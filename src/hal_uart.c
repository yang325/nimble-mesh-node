/*
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 *  http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */

#include <assert.h>
#include <stdlib.h>

#include "hal/hal_uart.h"
#include "hal/hal_gpio.h"
#include "bsp/bsp.h"
#include "stm32f1xx_hal.h"

#define UART_CNT           (sizeof(uarts) / sizeof(uarts[0]))

struct hal_uart uarts[] = {
    {.u_regs.Instance = USART3}
};


int
hal_uart_init_cbs(int port, hal_uart_tx_char tx_func, hal_uart_tx_done tx_done,
                      hal_uart_rx_char rx_func, void *arg)
{
    struct hal_uart *u;

    u = &uarts[port];
    if (port >= UART_CNT) {
        return -1;
    }
    u->u_rx_func = rx_func;
    u->u_tx_func = tx_func;
    u->u_tx_done = tx_done;
    u->u_func_arg = arg;
    return 0;
}

void
hal_uart_start_rx(int port)
{
    if (port >= UART_CNT || NULL == uarts[port].u_rx_func) {
        return;
    }

    HAL_StatusTypeDef status = HAL_UART_Receive_IT(&uarts[port].u_regs,
                        &uarts[port].u_rx_data, sizeof(uarts[port].u_rx_data));
    assert(status == HAL_OK);
}

void
hal_uart_start_tx(int port)
{
    if (port >= UART_CNT || NULL == uarts[port].u_tx_func) {
        return;
    }

    int value = uarts[port].u_tx_func(uarts[port].u_func_arg);
    if (-1 == value) {
        if (uarts[port].u_tx_done) {
            uarts[port].u_tx_done(uarts[port].u_func_arg);
        }
    } else {
        uarts[port].u_tx_data = (uint8_t)value;
        HAL_StatusTypeDef status = HAL_UART_Transmit_IT(&uarts[port].u_regs,
                        &uarts[port].u_tx_data, sizeof(uarts[port].u_tx_data));
        assert(status == HAL_OK);
    }
}

int
hal_uart_config(int port, int32_t baudrate, uint8_t databits, uint8_t stopbits,
                    enum hal_uart_parity parity, enum hal_uart_flow_ctl flow_ctl)
{
    if (port >= UART_CNT) {
        return -1;
    }

    uarts[port].u_regs.Init.BaudRate = baudrate;
    uarts[port].u_regs.Init.Mode = UART_MODE_TX_RX;
    uarts[port].u_regs.Init.OverSampling = UART_OVERSAMPLING_16;

    switch (databits) {
    case 8:
        uarts[port].u_regs.Init.WordLength = UART_WORDLENGTH_8B;
        break;
    case 9:
        uarts[port].u_regs.Init.WordLength = UART_WORDLENGTH_9B;
        break;
    default:
        assert(0);
        return -1;
    }

    switch (stopbits) {
    case 1:
        uarts[port].u_regs.Init.StopBits = UART_STOPBITS_1;
        break;
    case 2:
        uarts[port].u_regs.Init.StopBits = UART_STOPBITS_2;
        break;
    default:
        return -1;
    }

    switch (parity) {
    case HAL_UART_PARITY_NONE:
        uarts[port].u_regs.Init.Parity = UART_PARITY_NONE;
        break;
    case HAL_UART_PARITY_ODD:
        uarts[port].u_regs.Init.Parity = UART_PARITY_ODD;
        break;
    case HAL_UART_PARITY_EVEN:
        uarts[port].u_regs.Init.Parity = UART_PARITY_EVEN;
        break;
    }

    switch (flow_ctl) {
    case HAL_UART_FLOW_CTL_NONE:
        uarts[port].u_regs.Init.HwFlowCtl = UART_HWCONTROL_NONE;
        break;
    case HAL_UART_FLOW_CTL_RTS_CTS:
        uarts[port].u_regs.Init.HwFlowCtl = UART_HWCONTROL_RTS_CTS;
        break;
    }

    HAL_StatusTypeDef status = HAL_UART_Init(&uarts[port].u_regs);
    assert(status == HAL_OK);

    hal_uart_start_rx(port);

    return 0;
}

int
hal_uart_close(int port)
{
    if (port >= UART_CNT) {
        return -1;
    }

    HAL_StatusTypeDef status = HAL_UART_DeInit(&uarts[port].u_regs);
    assert(status == HAL_OK);

    return 0;
}

/**
  * @brief  Tx Transfer completed callbacks.
  * @param  huart: pointer to a UART_HandleTypeDef structure that contains
  *                the configuration information for the specified UART module.
  * @retval None
  */
void HAL_UART_TxCpltCallback(UART_HandleTypeDef *huart)
{
    for (int port = 0; port < UART_CNT; ++port) {
        if (huart == &uarts[port].u_regs) {
            hal_uart_start_tx(port);
            break;
        }
    }
}

/**
  * @brief Rx Transfer completed callback.
  * @param huart: UART handle.
  * @retval None
  */
void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart)
{
    for (int port = 0; port < UART_CNT; ++port) {
        if (huart == &uarts[port].u_regs &&
            0 == uarts[port].u_rx_func(uarts[port].u_func_arg, uarts[port].u_rx_data)) {

            hal_uart_start_rx(port);
            break;
        }
    }
}
