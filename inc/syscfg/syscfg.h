/**
 * This file was generated by Apache Newt version: 1.4.0-dev
 */

#ifndef H_MYNEWT_SYSCFG_
#define H_MYNEWT_SYSCFG_

/**
 * This macro exists to ensure code includes this header when needed.  If code
 * checks the existence of a setting directly via ifdef without including this
 * header, the setting macro will silently evaluate to 0.  In contrast, an
 * attempt to use these macros without including this header will result in a
 * compiler error.
 */
#define MYNEWT_VAL(x)                           MYNEWT_VAL_ ## x

#include "nimble_conf.h"

/*** compiler/arm-none-eabi-m4 */
#ifndef MYNEWT_VAL_HARDFLOAT
#define MYNEWT_VAL_HARDFLOAT (0)
#endif

/*** hw/bsp/nrf52840pdk */
#ifndef MYNEWT_VAL_BSP_NRF52840
#define MYNEWT_VAL_BSP_NRF52840 (1)
#endif

#ifndef MYNEWT_VAL_I2C_0_FREQ_KHZ
#define MYNEWT_VAL_I2C_0_FREQ_KHZ (100)
#endif

#ifndef MYNEWT_VAL_I2C_0_PIN_SCL
#define MYNEWT_VAL_I2C_0_PIN_SCL (27)
#endif

#ifndef MYNEWT_VAL_I2C_0_PIN_SDA
#define MYNEWT_VAL_I2C_0_PIN_SDA (26)
#endif

#ifndef MYNEWT_VAL_PWM_3
#define MYNEWT_VAL_PWM_3 (0)
#endif

#ifndef MYNEWT_VAL_SPI_0_MASTER_PIN_MISO
#define MYNEWT_VAL_SPI_0_MASTER_PIN_MISO (47)
#endif

#ifndef MYNEWT_VAL_SPI_0_MASTER_PIN_MOSI
#define MYNEWT_VAL_SPI_0_MASTER_PIN_MOSI (46)
#endif

#ifndef MYNEWT_VAL_SPI_0_MASTER_PIN_SCK
#define MYNEWT_VAL_SPI_0_MASTER_PIN_SCK (45)
#endif

#ifndef MYNEWT_VAL_SPI_0_SLAVE_PIN_MISO
#define MYNEWT_VAL_SPI_0_SLAVE_PIN_MISO (47)
#endif

#ifndef MYNEWT_VAL_SPI_0_SLAVE_PIN_MOSI
#define MYNEWT_VAL_SPI_0_SLAVE_PIN_MOSI (46)
#endif

#ifndef MYNEWT_VAL_SPI_0_SLAVE_PIN_SCK
#define MYNEWT_VAL_SPI_0_SLAVE_PIN_SCK (45)
#endif

#ifndef MYNEWT_VAL_SPI_0_SLAVE_PIN_SS
#define MYNEWT_VAL_SPI_0_SLAVE_PIN_SS (44)
#endif

#ifndef MYNEWT_VAL_TIMER_0
#define MYNEWT_VAL_TIMER_0 (1)
#endif

#ifndef MYNEWT_VAL_TIMER_1
#define MYNEWT_VAL_TIMER_1 (0)
#endif

#ifndef MYNEWT_VAL_TIMER_2
#define MYNEWT_VAL_TIMER_2 (0)
#endif

#ifndef MYNEWT_VAL_TIMER_3
#define MYNEWT_VAL_TIMER_3 (0)
#endif

#ifndef MYNEWT_VAL_TIMER_4
#define MYNEWT_VAL_TIMER_4 (0)
#endif

#ifndef MYNEWT_VAL_TIMER_5
#define MYNEWT_VAL_TIMER_5 (0)
#endif

#ifndef MYNEWT_VAL_UART_0
#define MYNEWT_VAL_UART_0 (1)
#endif

#ifndef MYNEWT_VAL_UART_0_PIN_CTS
#define MYNEWT_VAL_UART_0_PIN_CTS (7)
#endif

#ifndef MYNEWT_VAL_UART_0_PIN_RTS
#define MYNEWT_VAL_UART_0_PIN_RTS (5)
#endif

#ifndef MYNEWT_VAL_UART_0_PIN_RX
#define MYNEWT_VAL_UART_0_PIN_RX (8)
#endif

#ifndef MYNEWT_VAL_UART_0_PIN_TX
#define MYNEWT_VAL_UART_0_PIN_TX (6)
#endif

#ifndef MYNEWT_VAL_UART_1
#define MYNEWT_VAL_UART_1 (0)
#endif

#ifndef MYNEWT_VAL_UART_1_PIN_CTS
#define MYNEWT_VAL_UART_1_PIN_CTS (-1)
#endif

#ifndef MYNEWT_VAL_UART_1_PIN_RTS
#define MYNEWT_VAL_UART_1_PIN_RTS (-1)
#endif

#ifndef MYNEWT_VAL_UART_1_PIN_RX
#define MYNEWT_VAL_UART_1_PIN_RX (-1)
#endif

#ifndef MYNEWT_VAL_UART_1_PIN_TX
#define MYNEWT_VAL_UART_1_PIN_TX (-1)
#endif

/*** hw/mcu/nordic/nrf52xxx */
#ifndef MYNEWT_VAL_ADC_0
#define MYNEWT_VAL_ADC_0 (0)
#endif

#ifndef MYNEWT_VAL_ADC_0_REFMV_0
#define MYNEWT_VAL_ADC_0_REFMV_0 (0)
#endif

#ifndef MYNEWT_VAL_I2C_0
#define MYNEWT_VAL_I2C_0 (0)
#endif

#ifndef MYNEWT_VAL_I2C_1
#define MYNEWT_VAL_I2C_1 (0)
#endif

/* Overridden by hw/bsp/nrf52840pdk (defined by hw/mcu/nordic/nrf52xxx) */
#ifndef MYNEWT_VAL_MCU_DCDC_ENABLED
#define MYNEWT_VAL_MCU_DCDC_ENABLED (1)
#endif

#ifndef MYNEWT_VAL_MCU_FLASH_MIN_WRITE_SIZE
#define MYNEWT_VAL_MCU_FLASH_MIN_WRITE_SIZE (1)
#endif

#ifndef MYNEWT_VAL_PWM_0
#define MYNEWT_VAL_PWM_0 (0)
#endif

#ifndef MYNEWT_VAL_PWM_1
#define MYNEWT_VAL_PWM_1 (0)
#endif

#ifndef MYNEWT_VAL_PWM_2
#define MYNEWT_VAL_PWM_2 (0)
#endif

#ifndef MYNEWT_VAL_QSPI_ADDRMODE
#define MYNEWT_VAL_QSPI_ADDRMODE (0)
#endif

#ifndef MYNEWT_VAL_QSPI_DPMCONFIG
#define MYNEWT_VAL_QSPI_DPMCONFIG (0)
#endif

#ifndef MYNEWT_VAL_QSPI_ENABLE
#define MYNEWT_VAL_QSPI_ENABLE (0)
#endif

/* Overridden by hw/bsp/nrf52840pdk (defined by hw/mcu/nordic/nrf52xxx) */
#ifndef MYNEWT_VAL_QSPI_FLASH_PAGE_SIZE
#define MYNEWT_VAL_QSPI_FLASH_PAGE_SIZE (256)
#endif

/* Overridden by hw/bsp/nrf52840pdk (defined by hw/mcu/nordic/nrf52xxx) */
#ifndef MYNEWT_VAL_QSPI_FLASH_SECTOR_COUNT
#define MYNEWT_VAL_QSPI_FLASH_SECTOR_COUNT (4096)
#endif

/* Overridden by hw/bsp/nrf52840pdk (defined by hw/mcu/nordic/nrf52xxx) */
#ifndef MYNEWT_VAL_QSPI_FLASH_SECTOR_SIZE
#define MYNEWT_VAL_QSPI_FLASH_SECTOR_SIZE (4096)
#endif

/* Overridden by hw/bsp/nrf52840pdk (defined by hw/mcu/nordic/nrf52xxx) */
#ifndef MYNEWT_VAL_QSPI_PIN_CS
#define MYNEWT_VAL_QSPI_PIN_CS (17)
#endif

/* Overridden by hw/bsp/nrf52840pdk (defined by hw/mcu/nordic/nrf52xxx) */
#ifndef MYNEWT_VAL_QSPI_PIN_DIO0
#define MYNEWT_VAL_QSPI_PIN_DIO0 (20)
#endif

/* Overridden by hw/bsp/nrf52840pdk (defined by hw/mcu/nordic/nrf52xxx) */
#ifndef MYNEWT_VAL_QSPI_PIN_DIO1
#define MYNEWT_VAL_QSPI_PIN_DIO1 (21)
#endif

/* Overridden by hw/bsp/nrf52840pdk (defined by hw/mcu/nordic/nrf52xxx) */
#ifndef MYNEWT_VAL_QSPI_PIN_DIO2
#define MYNEWT_VAL_QSPI_PIN_DIO2 (22)
#endif

/* Overridden by hw/bsp/nrf52840pdk (defined by hw/mcu/nordic/nrf52xxx) */
#ifndef MYNEWT_VAL_QSPI_PIN_DIO3
#define MYNEWT_VAL_QSPI_PIN_DIO3 (23)
#endif

/* Overridden by hw/bsp/nrf52840pdk (defined by hw/mcu/nordic/nrf52xxx) */
#ifndef MYNEWT_VAL_QSPI_PIN_SCK
#define MYNEWT_VAL_QSPI_PIN_SCK (19)
#endif

#ifndef MYNEWT_VAL_QSPI_READOC
#define MYNEWT_VAL_QSPI_READOC (0)
#endif

#ifndef MYNEWT_VAL_QSPI_SCK_DELAY
#define MYNEWT_VAL_QSPI_SCK_DELAY (0)
#endif

#ifndef MYNEWT_VAL_QSPI_SCK_FREQ
#define MYNEWT_VAL_QSPI_SCK_FREQ (0)
#endif

#ifndef MYNEWT_VAL_QSPI_SPI_MODE
#define MYNEWT_VAL_QSPI_SPI_MODE (0)
#endif

#ifndef MYNEWT_VAL_QSPI_WRITEOC
#define MYNEWT_VAL_QSPI_WRITEOC (0)
#endif

#ifndef MYNEWT_VAL_SOFT_PWM
#define MYNEWT_VAL_SOFT_PWM (0)
#endif

#ifndef MYNEWT_VAL_SPI_0_MASTER
#define MYNEWT_VAL_SPI_0_MASTER (0)
#endif

#ifndef MYNEWT_VAL_SPI_0_SLAVE
#define MYNEWT_VAL_SPI_0_SLAVE (0)
#endif

#ifndef MYNEWT_VAL_SPI_1_MASTER
#define MYNEWT_VAL_SPI_1_MASTER (0)
#endif

#ifndef MYNEWT_VAL_SPI_1_SLAVE
#define MYNEWT_VAL_SPI_1_SLAVE (0)
#endif

#ifndef MYNEWT_VAL_SPI_2_MASTER
#define MYNEWT_VAL_SPI_2_MASTER (0)
#endif

#ifndef MYNEWT_VAL_SPI_2_SLAVE
#define MYNEWT_VAL_SPI_2_SLAVE (0)
#endif

/* Overridden by hw/bsp/nrf52840pdk (defined by hw/mcu/nordic/nrf52xxx) */
#ifndef MYNEWT_VAL_XTAL_32768
#define MYNEWT_VAL_XTAL_32768 (1)
#endif

#ifndef MYNEWT_VAL_XTAL_32768_SYNTH
#define MYNEWT_VAL_XTAL_32768_SYNTH (0)
#endif

#ifndef MYNEWT_VAL_XTAL_RC
#define MYNEWT_VAL_XTAL_RC (0)
#endif

/*** kernel/os */
#ifndef MYNEWT_VAL_FLOAT_USER
#define MYNEWT_VAL_FLOAT_USER (0)
#endif

#ifndef MYNEWT_VAL_MSYS_1_BLOCK_COUNT
#define MYNEWT_VAL_MSYS_1_BLOCK_COUNT (12)
#endif

#ifndef MYNEWT_VAL_MSYS_1_BLOCK_SIZE
#define MYNEWT_VAL_MSYS_1_BLOCK_SIZE (292)
#endif

#ifndef MYNEWT_VAL_MSYS_2_BLOCK_COUNT
#define MYNEWT_VAL_MSYS_2_BLOCK_COUNT (0)
#endif

#ifndef MYNEWT_VAL_MSYS_2_BLOCK_SIZE
#define MYNEWT_VAL_MSYS_2_BLOCK_SIZE (0)
#endif

#ifndef MYNEWT_VAL_OS_CLI
#define MYNEWT_VAL_OS_CLI (0)
#endif

#ifndef MYNEWT_VAL_OS_COREDUMP
#define MYNEWT_VAL_OS_COREDUMP (0)
#endif

#ifndef MYNEWT_VAL_OS_CPUTIME_FREQ
#define MYNEWT_VAL_OS_CPUTIME_FREQ (1000000)
#endif

#ifndef MYNEWT_VAL_OS_CPUTIME_TIMER_NUM
#define MYNEWT_VAL_OS_CPUTIME_TIMER_NUM (0)
#endif

#ifndef MYNEWT_VAL_OS_CTX_SW_STACK_CHECK
#define MYNEWT_VAL_OS_CTX_SW_STACK_CHECK (0)
#endif

#ifndef MYNEWT_VAL_OS_CTX_SW_STACK_GUARD
#define MYNEWT_VAL_OS_CTX_SW_STACK_GUARD (4)
#endif

#ifndef MYNEWT_VAL_OS_MAIN_STACK_SIZE
#define MYNEWT_VAL_OS_MAIN_STACK_SIZE (1024)
#endif

#ifndef MYNEWT_VAL_OS_MAIN_TASK_PRIO
#define MYNEWT_VAL_OS_MAIN_TASK_PRIO (127)
#endif

#ifndef MYNEWT_VAL_OS_MEMPOOL_CHECK
#define MYNEWT_VAL_OS_MEMPOOL_CHECK (0)
#endif

#ifndef MYNEWT_VAL_OS_MEMPOOL_POISON
#define MYNEWT_VAL_OS_MEMPOOL_POISON (0)
#endif

#ifndef MYNEWT_VAL_OS_SCHEDULING
#define MYNEWT_VAL_OS_SCHEDULING (1)
#endif

#ifndef MYNEWT_VAL_OS_SYSVIEW
#define MYNEWT_VAL_OS_SYSVIEW (0)
#endif

#ifndef MYNEWT_VAL_SANITY_INTERVAL
#define MYNEWT_VAL_SANITY_INTERVAL (15000)
#endif

#ifndef MYNEWT_VAL_WATCHDOG_INTERVAL
#define MYNEWT_VAL_WATCHDOG_INTERVAL (30000)
#endif

/*** libc/baselibc */
#ifndef MYNEWT_VAL_BASELIBC_ASSERT_FILE_LINE
#define MYNEWT_VAL_BASELIBC_ASSERT_FILE_LINE (0)
#endif

#ifndef MYNEWT_VAL_BASELIBC_PRESENT
#define MYNEWT_VAL_BASELIBC_PRESENT (1)
#endif

/*** nimble */
#ifndef MYNEWT_VAL_BLE_EXT_ADV
#define MYNEWT_VAL_BLE_EXT_ADV (0)
#endif

#ifndef MYNEWT_VAL_BLE_EXT_ADV_MAX_SIZE
#define MYNEWT_VAL_BLE_EXT_ADV_MAX_SIZE (31)
#endif

#ifndef MYNEWT_VAL_BLE_MAX_CONNECTIONS
#define MYNEWT_VAL_BLE_MAX_CONNECTIONS (1)
#endif

#ifndef MYNEWT_VAL_BLE_MULTI_ADV_INSTANCES
#define MYNEWT_VAL_BLE_MULTI_ADV_INSTANCES (0)
#endif

#ifndef MYNEWT_VAL_BLE_ROLE_BROADCASTER
#define MYNEWT_VAL_BLE_ROLE_BROADCASTER (1)
#endif

#ifndef MYNEWT_VAL_BLE_ROLE_CENTRAL
#define MYNEWT_VAL_BLE_ROLE_CENTRAL (1)
#endif

#ifndef MYNEWT_VAL_BLE_ROLE_OBSERVER
#define MYNEWT_VAL_BLE_ROLE_OBSERVER (1)
#endif

#ifndef MYNEWT_VAL_BLE_ROLE_PERIPHERAL
#define MYNEWT_VAL_BLE_ROLE_PERIPHERAL (1)
#endif

#ifndef MYNEWT_VAL_BLE_WHITELIST
#define MYNEWT_VAL_BLE_WHITELIST (1)
#endif

/*** nimble/host */
#ifndef MYNEWT_VAL_BLE_ATT_PREFERRED_MTU
#define MYNEWT_VAL_BLE_ATT_PREFERRED_MTU (256)
#endif

#ifndef MYNEWT_VAL_BLE_ATT_SVR_FIND_INFO
#define MYNEWT_VAL_BLE_ATT_SVR_FIND_INFO (1)
#endif

#ifndef MYNEWT_VAL_BLE_ATT_SVR_FIND_TYPE
#define MYNEWT_VAL_BLE_ATT_SVR_FIND_TYPE (1)
#endif

#ifndef MYNEWT_VAL_BLE_ATT_SVR_INDICATE
#define MYNEWT_VAL_BLE_ATT_SVR_INDICATE (1)
#endif

#ifndef MYNEWT_VAL_BLE_ATT_SVR_MAX_PREP_ENTRIES
#define MYNEWT_VAL_BLE_ATT_SVR_MAX_PREP_ENTRIES (64)
#endif

#ifndef MYNEWT_VAL_BLE_ATT_SVR_NOTIFY
#define MYNEWT_VAL_BLE_ATT_SVR_NOTIFY (1)
#endif

#ifndef MYNEWT_VAL_BLE_ATT_SVR_QUEUED_WRITE
#define MYNEWT_VAL_BLE_ATT_SVR_QUEUED_WRITE (1)
#endif

#ifndef MYNEWT_VAL_BLE_ATT_SVR_QUEUED_WRITE_TMO
#define MYNEWT_VAL_BLE_ATT_SVR_QUEUED_WRITE_TMO (30000)
#endif

#ifndef MYNEWT_VAL_BLE_ATT_SVR_READ
#define MYNEWT_VAL_BLE_ATT_SVR_READ (1)
#endif

#ifndef MYNEWT_VAL_BLE_ATT_SVR_READ_BLOB
#define MYNEWT_VAL_BLE_ATT_SVR_READ_BLOB (1)
#endif

#ifndef MYNEWT_VAL_BLE_ATT_SVR_READ_GROUP_TYPE
#define MYNEWT_VAL_BLE_ATT_SVR_READ_GROUP_TYPE (1)
#endif

#ifndef MYNEWT_VAL_BLE_ATT_SVR_READ_MULT
#define MYNEWT_VAL_BLE_ATT_SVR_READ_MULT (1)
#endif

#ifndef MYNEWT_VAL_BLE_ATT_SVR_READ_TYPE
#define MYNEWT_VAL_BLE_ATT_SVR_READ_TYPE (1)
#endif

#ifndef MYNEWT_VAL_BLE_ATT_SVR_SIGNED_WRITE
#define MYNEWT_VAL_BLE_ATT_SVR_SIGNED_WRITE (1)
#endif

#ifndef MYNEWT_VAL_BLE_ATT_SVR_WRITE
#define MYNEWT_VAL_BLE_ATT_SVR_WRITE (1)
#endif

#ifndef MYNEWT_VAL_BLE_ATT_SVR_WRITE_NO_RSP
#define MYNEWT_VAL_BLE_ATT_SVR_WRITE_NO_RSP (1)
#endif

#ifndef MYNEWT_VAL_BLE_GATT_DISC_ALL_CHRS
#define MYNEWT_VAL_BLE_GATT_DISC_ALL_CHRS (MYNEWT_VAL_BLE_ROLE_CENTRAL)
#endif

#ifndef MYNEWT_VAL_BLE_GATT_DISC_ALL_DSCS
#define MYNEWT_VAL_BLE_GATT_DISC_ALL_DSCS (MYNEWT_VAL_BLE_ROLE_CENTRAL)
#endif

#ifndef MYNEWT_VAL_BLE_GATT_DISC_ALL_SVCS
#define MYNEWT_VAL_BLE_GATT_DISC_ALL_SVCS (MYNEWT_VAL_BLE_ROLE_CENTRAL)
#endif

#ifndef MYNEWT_VAL_BLE_GATT_DISC_CHR_UUID
#define MYNEWT_VAL_BLE_GATT_DISC_CHR_UUID (MYNEWT_VAL_BLE_ROLE_CENTRAL)
#endif

#ifndef MYNEWT_VAL_BLE_GATT_DISC_SVC_UUID
#define MYNEWT_VAL_BLE_GATT_DISC_SVC_UUID (MYNEWT_VAL_BLE_ROLE_CENTRAL)
#endif

#ifndef MYNEWT_VAL_BLE_GATT_FIND_INC_SVCS
#define MYNEWT_VAL_BLE_GATT_FIND_INC_SVCS (MYNEWT_VAL_BLE_ROLE_CENTRAL)
#endif

#ifndef MYNEWT_VAL_BLE_GATT_INDICATE
#define MYNEWT_VAL_BLE_GATT_INDICATE (1)
#endif

#ifndef MYNEWT_VAL_BLE_GATT_MAX_PROCS
#define MYNEWT_VAL_BLE_GATT_MAX_PROCS (4)
#endif

#ifndef MYNEWT_VAL_BLE_GATT_NOTIFY
#define MYNEWT_VAL_BLE_GATT_NOTIFY (1)
#endif

#ifndef MYNEWT_VAL_BLE_GATT_READ
#define MYNEWT_VAL_BLE_GATT_READ (MYNEWT_VAL_BLE_ROLE_CENTRAL)
#endif

#ifndef MYNEWT_VAL_BLE_GATT_READ_LONG
#define MYNEWT_VAL_BLE_GATT_READ_LONG (MYNEWT_VAL_BLE_ROLE_CENTRAL)
#endif

#ifndef MYNEWT_VAL_BLE_GATT_READ_MAX_ATTRS
#define MYNEWT_VAL_BLE_GATT_READ_MAX_ATTRS (8)
#endif

#ifndef MYNEWT_VAL_BLE_GATT_READ_MULT
#define MYNEWT_VAL_BLE_GATT_READ_MULT (MYNEWT_VAL_BLE_ROLE_CENTRAL)
#endif

#ifndef MYNEWT_VAL_BLE_GATT_READ_UUID
#define MYNEWT_VAL_BLE_GATT_READ_UUID (MYNEWT_VAL_BLE_ROLE_CENTRAL)
#endif

#ifndef MYNEWT_VAL_BLE_GATT_RESUME_RATE
#define MYNEWT_VAL_BLE_GATT_RESUME_RATE (1000)
#endif

#ifndef MYNEWT_VAL_BLE_GATT_SIGNED_WRITE
#define MYNEWT_VAL_BLE_GATT_SIGNED_WRITE (MYNEWT_VAL_BLE_ROLE_CENTRAL)
#endif

#ifndef MYNEWT_VAL_BLE_GATT_WRITE
#define MYNEWT_VAL_BLE_GATT_WRITE (MYNEWT_VAL_BLE_ROLE_CENTRAL)
#endif

#ifndef MYNEWT_VAL_BLE_GATT_WRITE_LONG
#define MYNEWT_VAL_BLE_GATT_WRITE_LONG (MYNEWT_VAL_BLE_ROLE_CENTRAL)
#endif

#ifndef MYNEWT_VAL_BLE_GATT_WRITE_MAX_ATTRS
#define MYNEWT_VAL_BLE_GATT_WRITE_MAX_ATTRS (4)
#endif

#ifndef MYNEWT_VAL_BLE_GATT_WRITE_NO_RSP
#define MYNEWT_VAL_BLE_GATT_WRITE_NO_RSP (MYNEWT_VAL_BLE_ROLE_CENTRAL)
#endif

#ifndef MYNEWT_VAL_BLE_GATT_WRITE_RELIABLE
#define MYNEWT_VAL_BLE_GATT_WRITE_RELIABLE (MYNEWT_VAL_BLE_ROLE_CENTRAL)
#endif

#ifndef MYNEWT_VAL_BLE_HOST
#define MYNEWT_VAL_BLE_HOST (1)
#endif

#ifndef MYNEWT_VAL_BLE_HS_DEBUG
#define MYNEWT_VAL_BLE_HS_DEBUG (0)
#endif

#ifndef MYNEWT_VAL_BLE_HS_FLOW_CTRL
#define MYNEWT_VAL_BLE_HS_FLOW_CTRL (0)
#endif

#ifndef MYNEWT_VAL_BLE_HS_FLOW_CTRL_ITVL
#define MYNEWT_VAL_BLE_HS_FLOW_CTRL_ITVL (1000)
#endif

#ifndef MYNEWT_VAL_BLE_HS_FLOW_CTRL_THRESH
#define MYNEWT_VAL_BLE_HS_FLOW_CTRL_THRESH (2)
#endif

#ifndef MYNEWT_VAL_BLE_HS_FLOW_CTRL_TX_ON_DISCONNECT
#define MYNEWT_VAL_BLE_HS_FLOW_CTRL_TX_ON_DISCONNECT (0)
#endif

#ifndef MYNEWT_VAL_BLE_HS_PHONY_HCI_ACKS
#define MYNEWT_VAL_BLE_HS_PHONY_HCI_ACKS (0)
#endif

#ifndef MYNEWT_VAL_BLE_HS_REQUIRE_OS
#define MYNEWT_VAL_BLE_HS_REQUIRE_OS (1)
#endif

#ifndef MYNEWT_VAL_BLE_L2CAP_COC_MAX_NUM
#define MYNEWT_VAL_BLE_L2CAP_COC_MAX_NUM (0)
#endif

#ifndef MYNEWT_VAL_BLE_L2CAP_JOIN_RX_FRAGS
#define MYNEWT_VAL_BLE_L2CAP_JOIN_RX_FRAGS (1)
#endif

#ifndef MYNEWT_VAL_BLE_L2CAP_MAX_CHANS
#define MYNEWT_VAL_BLE_L2CAP_MAX_CHANS (3*MYNEWT_VAL_BLE_MAX_CONNECTIONS)
#endif

#ifndef MYNEWT_VAL_BLE_L2CAP_RX_FRAG_TIMEOUT
#define MYNEWT_VAL_BLE_L2CAP_RX_FRAG_TIMEOUT (30000)
#endif

#ifndef MYNEWT_VAL_BLE_L2CAP_SIG_MAX_PROCS
#define MYNEWT_VAL_BLE_L2CAP_SIG_MAX_PROCS (1)
#endif

#ifndef MYNEWT_VAL_BLE_MESH
#define MYNEWT_VAL_BLE_MESH (0)
#endif

#ifndef MYNEWT_VAL_BLE_MONITOR_CONSOLE_BUFFER_SIZE
#define MYNEWT_VAL_BLE_MONITOR_CONSOLE_BUFFER_SIZE (128)
#endif

#ifndef MYNEWT_VAL_BLE_MONITOR_RTT
#define MYNEWT_VAL_BLE_MONITOR_RTT (0)
#endif

#ifndef MYNEWT_VAL_BLE_MONITOR_RTT_BUFFERED
#define MYNEWT_VAL_BLE_MONITOR_RTT_BUFFERED (1)
#endif

#ifndef MYNEWT_VAL_BLE_MONITOR_RTT_BUFFER_NAME
#define MYNEWT_VAL_BLE_MONITOR_RTT_BUFFER_NAME ("monitor")
#endif

#ifndef MYNEWT_VAL_BLE_MONITOR_RTT_BUFFER_SIZE
#define MYNEWT_VAL_BLE_MONITOR_RTT_BUFFER_SIZE (256)
#endif

#ifndef MYNEWT_VAL_BLE_MONITOR_UART
#define MYNEWT_VAL_BLE_MONITOR_UART (0)
#endif

#ifndef MYNEWT_VAL_BLE_MONITOR_UART_BAUDRATE
#define MYNEWT_VAL_BLE_MONITOR_UART_BAUDRATE (1000000)
#endif

#ifndef MYNEWT_VAL_BLE_MONITOR_UART_BUFFER_SIZE
#define MYNEWT_VAL_BLE_MONITOR_UART_BUFFER_SIZE (64)
#endif

#ifndef MYNEWT_VAL_BLE_MONITOR_UART_DEV
#define MYNEWT_VAL_BLE_MONITOR_UART_DEV ("uart0")
#endif

#ifndef MYNEWT_VAL_BLE_RPA_TIMEOUT
#define MYNEWT_VAL_BLE_RPA_TIMEOUT (300)
#endif

#ifndef MYNEWT_VAL_BLE_SM_BONDING
#define MYNEWT_VAL_BLE_SM_BONDING (0)
#endif

#ifndef MYNEWT_VAL_BLE_SM_IO_CAP
#define MYNEWT_VAL_BLE_SM_IO_CAP (BLE_HS_IO_NO_INPUT_OUTPUT)
#endif

#ifndef MYNEWT_VAL_BLE_SM_KEYPRESS
#define MYNEWT_VAL_BLE_SM_KEYPRESS (0)
#endif

#ifndef MYNEWT_VAL_BLE_SM_LEGACY
#define MYNEWT_VAL_BLE_SM_LEGACY (1)
#endif

#ifndef MYNEWT_VAL_BLE_SM_MAX_PROCS
#define MYNEWT_VAL_BLE_SM_MAX_PROCS (1)
#endif

#ifndef MYNEWT_VAL_BLE_SM_MITM
#define MYNEWT_VAL_BLE_SM_MITM (0)
#endif

#ifndef MYNEWT_VAL_BLE_SM_OOB_DATA_FLAG
#define MYNEWT_VAL_BLE_SM_OOB_DATA_FLAG (0)
#endif

#ifndef MYNEWT_VAL_BLE_SM_OUR_KEY_DIST
#define MYNEWT_VAL_BLE_SM_OUR_KEY_DIST (0)
#endif

#ifndef MYNEWT_VAL_BLE_SM_SC
#define MYNEWT_VAL_BLE_SM_SC (0)
#endif

#ifndef MYNEWT_VAL_BLE_SM_THEIR_KEY_DIST
#define MYNEWT_VAL_BLE_SM_THEIR_KEY_DIST (0)
#endif

#ifndef MYNEWT_VAL_BLE_STORE_MAX_BONDS
#define MYNEWT_VAL_BLE_STORE_MAX_BONDS (3)
#endif

#ifndef MYNEWT_VAL_BLE_STORE_MAX_CCCDS
#define MYNEWT_VAL_BLE_STORE_MAX_CCCDS (8)
#endif

/*** nimble/host/services/ans */
#ifndef MYNEWT_VAL_BLE_SVC_ANS_NEW_ALERT_CAT
#define MYNEWT_VAL_BLE_SVC_ANS_NEW_ALERT_CAT (0)
#endif

#ifndef MYNEWT_VAL_BLE_SVC_ANS_UNR_ALERT_CAT
#define MYNEWT_VAL_BLE_SVC_ANS_UNR_ALERT_CAT (0)
#endif

/*** nimble/host/services/bas */
#ifndef MYNEWT_VAL_BLE_SVC_BAS_BATTERY_LEVEL_NOTIFY_ENABLE
#define MYNEWT_VAL_BLE_SVC_BAS_BATTERY_LEVEL_NOTIFY_ENABLE (1)
#endif

#ifndef MYNEWT_VAL_BLE_SVC_BAS_BATTERY_LEVEL_READ_PERM
#define MYNEWT_VAL_BLE_SVC_BAS_BATTERY_LEVEL_READ_PERM (0)
#endif

/*** nimble/host/services/gap */
#ifndef MYNEWT_VAL_BLE_SVC_GAP_APPEARANCE
#define MYNEWT_VAL_BLE_SVC_GAP_APPEARANCE (0)
#endif

#ifndef MYNEWT_VAL_BLE_SVC_GAP_APPEARANCE_WRITE_PERM
#define MYNEWT_VAL_BLE_SVC_GAP_APPEARANCE_WRITE_PERM (-1)
#endif

#ifndef MYNEWT_VAL_BLE_SVC_GAP_CENTRAL_ADDRESS_RESOLUTION
#define MYNEWT_VAL_BLE_SVC_GAP_CENTRAL_ADDRESS_RESOLUTION (-1)
#endif

#ifndef MYNEWT_VAL_BLE_SVC_GAP_DEVICE_NAME
#define MYNEWT_VAL_BLE_SVC_GAP_DEVICE_NAME ("nimble")
#endif

#ifndef MYNEWT_VAL_BLE_SVC_GAP_DEVICE_NAME_MAX_LENGTH
#define MYNEWT_VAL_BLE_SVC_GAP_DEVICE_NAME_MAX_LENGTH (31)
#endif

#ifndef MYNEWT_VAL_BLE_SVC_GAP_DEVICE_NAME_WRITE_PERM
#define MYNEWT_VAL_BLE_SVC_GAP_DEVICE_NAME_WRITE_PERM (-1)
#endif

#ifndef MYNEWT_VAL_BLE_SVC_GAP_PPCP_MAX_CONN_INTERVAL
#define MYNEWT_VAL_BLE_SVC_GAP_PPCP_MAX_CONN_INTERVAL (0)
#endif

#ifndef MYNEWT_VAL_BLE_SVC_GAP_PPCP_MIN_CONN_INTERVAL
#define MYNEWT_VAL_BLE_SVC_GAP_PPCP_MIN_CONN_INTERVAL (0)
#endif

#ifndef MYNEWT_VAL_BLE_SVC_GAP_PPCP_SLAVE_LATENCY
#define MYNEWT_VAL_BLE_SVC_GAP_PPCP_SLAVE_LATENCY (0)
#endif

#ifndef MYNEWT_VAL_BLE_SVC_GAP_PPCP_SUPERVISION_TMO
#define MYNEWT_VAL_BLE_SVC_GAP_PPCP_SUPERVISION_TMO (0)
#endif

/*** nimble/transport */
#ifndef MYNEWT_VAL_BLE_HCI_TRANSPORT_EMSPI
#define MYNEWT_VAL_BLE_HCI_TRANSPORT_EMSPI (0)
#endif

/* Overridden by targets/porting-nimble (defined by nimble/transport) */
#ifndef MYNEWT_VAL_BLE_HCI_TRANSPORT_NIMBLE_BUILTIN
#define MYNEWT_VAL_BLE_HCI_TRANSPORT_NIMBLE_BUILTIN (0)
#endif

#ifndef MYNEWT_VAL_BLE_HCI_TRANSPORT_RAM
#define MYNEWT_VAL_BLE_HCI_TRANSPORT_RAM (0)
#endif

#ifndef MYNEWT_VAL_BLE_HCI_TRANSPORT_SOCKET
#define MYNEWT_VAL_BLE_HCI_TRANSPORT_SOCKET (0)
#endif

/* Overridden by targets/porting-nimble (defined by nimble/transport) */
#ifndef MYNEWT_VAL_BLE_HCI_TRANSPORT_UART
#define MYNEWT_VAL_BLE_HCI_TRANSPORT_UART (1)
#endif

/*** nimble/transport/uart */
#ifndef MYNEWT_VAL_BLE_ACL_BUF_COUNT
#define MYNEWT_VAL_BLE_ACL_BUF_COUNT (12)
#endif

#ifndef MYNEWT_VAL_BLE_ACL_BUF_SIZE
#define MYNEWT_VAL_BLE_ACL_BUF_SIZE (255)
#endif

#ifndef MYNEWT_VAL_BLE_HCI_ACL_OUT_COUNT
#define MYNEWT_VAL_BLE_HCI_ACL_OUT_COUNT (12)
#endif

#ifndef MYNEWT_VAL_BLE_HCI_EVT_BUF_SIZE
#define MYNEWT_VAL_BLE_HCI_EVT_BUF_SIZE (70)
#endif

#ifndef MYNEWT_VAL_BLE_HCI_EVT_HI_BUF_COUNT
#define MYNEWT_VAL_BLE_HCI_EVT_HI_BUF_COUNT (8)
#endif

#ifndef MYNEWT_VAL_BLE_HCI_EVT_LO_BUF_COUNT
#define MYNEWT_VAL_BLE_HCI_EVT_LO_BUF_COUNT (8)
#endif

/* Overridden by targets/porting-nimble (defined by nimble/transport/uart) */
#ifndef MYNEWT_VAL_BLE_HCI_UART_BAUD
#define MYNEWT_VAL_BLE_HCI_UART_BAUD (115200)
#endif

#ifndef MYNEWT_VAL_BLE_HCI_UART_DATA_BITS
#define MYNEWT_VAL_BLE_HCI_UART_DATA_BITS (8)
#endif

/* Overridden by targets/porting-nimble (defined by nimble/transport/uart) */
#ifndef MYNEWT_VAL_BLE_HCI_UART_FLOW_CTRL
#define MYNEWT_VAL_BLE_HCI_UART_FLOW_CTRL (0)
#endif

#ifndef MYNEWT_VAL_BLE_HCI_UART_PARITY
#define MYNEWT_VAL_BLE_HCI_UART_PARITY (HAL_UART_PARITY_NONE)
#endif

#ifndef MYNEWT_VAL_BLE_HCI_UART_PORT
#define MYNEWT_VAL_BLE_HCI_UART_PORT (0)
#endif

#ifndef MYNEWT_VAL_BLE_HCI_UART_STOP_BITS
#define MYNEWT_VAL_BLE_HCI_UART_STOP_BITS (1)
#endif

/*** sys/console/stub */
#ifndef MYNEWT_VAL_CONSOLE_UART_BAUD
#define MYNEWT_VAL_CONSOLE_UART_BAUD (115200)
#endif

#ifndef MYNEWT_VAL_CONSOLE_UART_DEV
#define MYNEWT_VAL_CONSOLE_UART_DEV ("uart0")
#endif

#ifndef MYNEWT_VAL_CONSOLE_UART_FLOW_CONTROL
#define MYNEWT_VAL_CONSOLE_UART_FLOW_CONTROL (UART_FLOW_CTL_NONE)
#endif

/*** sys/flash_map */
#ifndef MYNEWT_VAL_FLASH_MAP_MAX_AREAS
#define MYNEWT_VAL_FLASH_MAP_MAX_AREAS (10)
#endif

/*** sys/log/stub */
#ifndef MYNEWT_VAL_LOG_CONSOLE
#define MYNEWT_VAL_LOG_CONSOLE (1)
#endif

#ifndef MYNEWT_VAL_LOG_FCB
#define MYNEWT_VAL_LOG_FCB (0)
#endif

#ifndef MYNEWT_VAL_LOG_LEVEL
#define MYNEWT_VAL_LOG_LEVEL (255)
#endif

/*** sys/sysinit */
#ifndef MYNEWT_VAL_SYSINIT_CONSTRAIN_INIT
#define MYNEWT_VAL_SYSINIT_CONSTRAIN_INIT (1)
#endif

#ifndef MYNEWT_VAL_SYSINIT_PANIC_FILE_LINE
#define MYNEWT_VAL_SYSINIT_PANIC_FILE_LINE (0)
#endif

#ifndef MYNEWT_VAL_SYSINIT_PANIC_MESSAGE
#define MYNEWT_VAL_SYSINIT_PANIC_MESSAGE (0)
#endif

#endif
