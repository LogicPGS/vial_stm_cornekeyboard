#pragma once

#define HAL_USE_DAC FALSE

#define HAL_USE_PWM TRUE

#define HAL_USE_PAL TRUE //ADDITIONAL

#define HAL_USE_I2C TRUE

#define HAL_USE_GPT FALSE

#define HAL_USE_SERIAL_USB FALSE

#define HAL_USE_SERIAL TRUE

#define HAL_USE_SPI FALSE

#include_next <halconf.h>