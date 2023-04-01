#MAIN RULES FOR SK32 KEYBOARD

#MCU AND BOARD CONFIGURATION
MCU_STM32F401 ?= no  #SK32 v1.0 (256 KB)
MCU_STM32F411 ?= no #SK32 v1.1 (512 KB)

ifeq ($(strip $(MCU_STM32F401)), yes)
    #OPT_DEFS += -DMCU_F401
    MCU = STM32F401
    BOARD = BLACKPILL_STM32_F401
endif

ifeq ($(strip $(MCU_STM32F411)), yes)
    #OPT_DEFS += -DMCU_F411
    MCU = STM32F411
    BOARD = BLACKPILL_STM32_F411
endif

# Bootloader selection
BOOTLOADER = stm32-dfu

# Build Options
#   change yes to no to disable
#
BOOTMAGIC_ENABLE = yes     # Enable Bootmagic Lite
MOUSEKEY_ENABLE = no       # Mouse keys
EXTRAKEY_ENABLE = yes       # Audio control and System control
CONSOLE_ENABLE = no         # Console for debug
COMMAND_ENABLE = no         # Commands for debug and configuration

# Do not enable SLEEP_LED_ENABLE. it uses the same timer as BACKLIGHT_ENABLE
SLEEP_LED_ENABLE = no       # Breathing sleep LED during USB suspend
# if this doesn't work, see here: https://github.com/tmk/tmk_keyboard/wiki/FAQ#nkro-doesnt-work
NKRO_ENABLE = yes           # USB Nkey Rollover
BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
RGBLIGHT_ENABLE = no        # Enable keyboard RGB underglow
AUDIO_ENABLE = no           # Audio output
MUSIC_ENABLE = no
SPLIT_KEYBOARD = yes
KEYBOARD_SHARED_EP = no

#STM32 CONFIGURATION FOR COM AND LED DRIVER
SERIAL_DRIVER = usart
WS2812_DRIVER = pwm

#LAYOUT
LAYOUTS = split_3x6_3

#CRYSTAL CONFIGURATION
CRYSTAL_8MHZ ?= yes

ifeq ($(strip $(CRYSTAL_8MHZ)), yes)
    OPT_DEFS += -DCRYSTAL_8MHZ
endif