##########################################################################################################################
# File automatically-generated by tool: [projectgenerator] version: [3.0.0] date: [Wed Dec 05 08:46:30 CST 2018]
##########################################################################################################################

# ------------------------------------------------
# Generic Makefile (based on gcc)
#
# ChangeLog :
#	2017-02-10 - Several enhancements + project update mode
#   2015-07-22 - first version
# ------------------------------------------------

######################################
# target
######################################
TARGET = nimble_host


######################################
# building variables
######################################
# debug build?
DEBUG = 1
# optimization
OPT = -Og


#######################################
# paths
#######################################
# Build path
BUILD_DIR = _build

# Configure NimBLE variables
NIMBLE_ROOT := nimble
NIMBLE_CFG_TINYCRYPT := 1
NIMBLE_CFG_MESH := 1
include $(NIMBLE_ROOT)/porting/nimble/Makefile.defs

######################################
# source
######################################
# C sources
C_SOURCES =  \
src/app.c \
src/bsp.c \
src/console_fmt.c \
src/demo.c \
src/hal_uart.c \
src/hook.c \
src/printk.c \
src/stm32f1xx_hal_msp.c \
src/stm32f1xx_it.c \
src/system_stm32f1xx.c \
driver/src/stm32f1xx_hal.c \
driver/src/stm32f1xx_hal_cortex.c \
driver/src/stm32f1xx_hal_dma.c \
driver/src/stm32f1xx_hal_flash.c \
driver/src/stm32f1xx_hal_flash_ex.c \
driver/src/stm32f1xx_hal_gpio.c \
driver/src/stm32f1xx_hal_gpio_ex.c \
driver/src/stm32f1xx_hal_pwr.c \
driver/src/stm32f1xx_hal_rcc.c \
driver/src/stm32f1xx_hal_rcc_ex.c \
driver/src/stm32f1xx_hal_tim.c \
driver/src/stm32f1xx_hal_tim_ex.c \
driver/src/stm32f1xx_hal_uart.c \
freertos/lib/FreeRTOS/event_groups.c \
freertos/lib/FreeRTOS/list.c \
freertos/lib/FreeRTOS/queue.c \
freertos/lib/FreeRTOS/stream_buffer.c \
freertos/lib/FreeRTOS/tasks.c \
freertos/lib/FreeRTOS/timers.c \
freertos/lib/FreeRTOS/portable/MemMang/heap_4.c \
freertos/lib/FreeRTOS/portable/GCC/ARM_CM3/port.c \
nimble/porting/npl/freertos/src/nimble_port_freertos.c \
nimble/porting/npl/freertos/src/npl_os_freertos.c \
nimble/nimble/transport/uart/src/ble_hci_uart.c \
$(NIMBLE_SRC) \
$(TINYCRYPT_SRC)


# ASM sources
ASM_SOURCES =  \
startup/startup_stm32f103xe.s


#######################################
# binaries
#######################################
PREFIX = arm-none-eabi-
# The gcc compiler bin path can be either defined in make command via GCC_PATH variable (> make GCC_PATH=xxx)
# either it can be added to the PATH environment variable.
ifdef GCC_PATH
CC = $(GCC_PATH)/$(PREFIX)gcc
AS = $(GCC_PATH)/$(PREFIX)gcc -x assembler-with-cpp
CP = $(GCC_PATH)/$(PREFIX)objcopy
SZ = $(GCC_PATH)/$(PREFIX)size
else
CC = $(PREFIX)gcc
AS = $(PREFIX)gcc -x assembler-with-cpp
CP = $(PREFIX)objcopy
SZ = $(PREFIX)size
endif
HEX = $(CP) -O ihex
BIN = $(CP) -O binary -S
 
#######################################
# CFLAGS
#######################################
# cpu
CPU = -mcpu=cortex-m3

# fpu
# NONE for Cortex-M0/M0+/M3

# float-abi


# mcu
MCU = $(CPU) -mthumb $(FPU) $(FLOAT-ABI)

# macros for gcc
# AS defines
AS_DEFS = 

# C defines
C_DEFS =  \
-D USE_HAL_DRIVER \
-D STM32F103xE


# AS includes
AS_INCLUDES = 

# C includes
C_INCLUDES =  \
-Iinc \
-Idriver/inc \
-Icmsis/device \
-Icmsis/include \
-Ifreertos/lib/include \
-Ifreertos/lib/include/private \
-Ifreertos/lib/FreeRTOS/portable/GCC/ARM_CM3 \
-Inimble/porting/npl/freertos/include \
-Inimble/porting/nimble/include \
-Inimble/nimble/transport/uart/include \
$(addprefix -I, $(NIMBLE_INCLUDE)) \
$(addprefix -I, $(TINYCRYPT_INCLUDE))


# compile gcc flags
ASFLAGS = $(MCU) $(AS_DEFS) $(AS_INCLUDES) $(OPT) -Wall -fdata-sections -ffunction-sections

CFLAGS = $(MCU) $(C_DEFS) $(C_INCLUDES) $(OPT) -Wall -fdata-sections -ffunction-sections $(NIMBLE_CFLAGS) $(TINYCRYPT_CFLAGS)

ifeq ($(DEBUG), 1)
CFLAGS += -g -gdwarf-2
endif


# Generate dependency information
CFLAGS += -MMD -MP -MF"$(@:%.o=%.d)"


#######################################
# LDFLAGS
#######################################
# link script
LDSCRIPT = STM32F103ZE_FLASH.ld

# libraries
LIBS = -lc -lm -lnosys 
LIBDIR = 
LDFLAGS = $(MCU) -specs=nano.specs -T$(LDSCRIPT) $(LIBDIR) $(LIBS) -Wl,-Map=$(BUILD_DIR)/$(TARGET).map,--cref -Wl,--gc-sections

# default action: build all
all: $(BUILD_DIR)/$(TARGET).elf $(BUILD_DIR)/$(TARGET).hex $(BUILD_DIR)/$(TARGET).bin


#######################################
# build the application
#######################################
# list of objects
OBJECTS = $(addprefix $(BUILD_DIR)/,$(notdir $(C_SOURCES:.c=.o)))
vpath %.c $(sort $(dir $(C_SOURCES)))
# list of ASM program objects
OBJECTS += $(addprefix $(BUILD_DIR)/,$(notdir $(ASM_SOURCES:.s=.o)))
vpath %.s $(sort $(dir $(ASM_SOURCES)))

$(BUILD_DIR)/%.o: %.c Makefile | $(BUILD_DIR) 
	@echo CC $<
	@$(CC) -c $(CFLAGS) -Wa,-a,-ad,-alms=$(BUILD_DIR)/$(notdir $(<:.c=.lst)) $< -o $@

$(BUILD_DIR)/%.o: %.s Makefile | $(BUILD_DIR)
	@echo AS $<
	@$(AS) -c $(CFLAGS) $< -o $@

$(BUILD_DIR)/$(TARGET).elf: $(OBJECTS) Makefile
	@echo LD $@
	@$(CC) $(OBJECTS) $(LDFLAGS) -o $@
	@echo
	@$(SZ) $@
	@echo

$(BUILD_DIR)/%.hex: $(BUILD_DIR)/%.elf | $(BUILD_DIR)
	@$(HEX) $< $@
	
$(BUILD_DIR)/%.bin: $(BUILD_DIR)/%.elf | $(BUILD_DIR)
	@$(BIN) $< $@	
	
$(BUILD_DIR):
	@mkdir $@		

#######################################
# clean up
#######################################
clean:
	-rm -rf $(BUILD_DIR)
  
#######################################
# dependencies
#######################################
-include $(wildcard $(BUILD_DIR)/*.d)

# *** EOF ***
