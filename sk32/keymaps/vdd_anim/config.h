/*
Copyright 2022 @dmedina09 [LogicPGS]
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.
This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.
You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#define VIAL_KEYBOARD_UID {0x63, 0x8B, 0x74, 0x2F, 0xE2, 0x8C, 0xAB, 0xC1}

#define DYNAMIC_KEYMAP_LAYER_COUNT 6  // LAYERS FOR KEYMAPS

//KEYBOARD SECURITY
#define VIAL_UNLOCK_COMBO_ROWS {0, 1, 1}
#define VIAL_UNLOCK_COMBO_COLS {2, 1, 3}

// TAP DANCE
#define TAPPING_TERM 180
#define IGNORE_MOD_TAP_INTERRUPT

#define VIALRGB_NO_DIRECT

//HANDNESS
#define MASTER_LEFT

//SPLIT CONFIGURATION
//REVIEW HOW THIS AFFECTS THE KEYBOARD
# define SPLIT_LAYER_STATE_ENABLE
# define SPLIT_LED_STATE_ENABLE
# define SPLIT_MODS_ENABLE
# define SPLIT_OLED_ENABLE

//USB CONFIGURATION
//ARM DEVICES #define SPLIT_USB_DETECT IS ENABLE BY DEFAULT
//NEEDS REVIEW
#define SPLIT_USB_TIMEOUT 3000
#define SPLIT_USB_TIMEOUT_POLL 20

//TIME THAT THE OLED IS ON
#ifdef OLED_ENABLE
    #define OLED_TIMEOUT 20000
#endif

// LEDS MATRIX DRIVER FOR WS2812B
#ifdef RGB_MATRIX_ENABLE
#define RGB_MATRIX_KEYPRESSES
#define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#define RGB_DISABLE_WHEN_USB_SUSPENDED 

// #define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#define RGB_MATRIX_LED_PROCESS_LIMIT (DRIVER_LED_TOTAL + 4) / 5  // limits the number of LEDs to process in an animation per task run (increases keyboard responsiveness)
#define RGB_MATRIX_LED_FLUSH_LIMIT 16                            // limits in milliseconds how frequently an animation will update the LEDs. 16 (16ms) is equivalent to limiting to 60fps (increases keyboard responsiveness)
#undef RGB_MATRIX_MAXIMUM_BRIGHTNESS
#define RGB_MATRIX_MAXIMUM_BRIGHTNESS 100                        // limits maximum brightness of LEDs to 150 out of 255. Higher may cause the controller to crash.
#define RGB_MATRIX_HUE_STEP 8
#define RGB_MATRIX_SAT_STEP 8
#define RGB_MATRIX_VAL_STEP 8
#define RGB_MATRIX_SPD_STEP 10
#define RGB_MATRIX_STARTUP_MODE RGB_MATRIX_SOLID_COLOR

//RGB EFFECTS
#define ENABLE_RGB_MATRIX_ALPHAS_MODS
#define ENABLE_RGB_MATRIX_GRADIENT_UP_DOWN
#define ENABLE_RGB_MATRIX_BREATHING
#define ENABLE_RGB_MATRIX_BAND_SAT
#define ENABLE_RGB_MATRIX_BAND_VAL
#define ENABLE_RGB_MATRIX_BAND_PINWHEEL_SAT
#define ENABLE_RGB_MATRIX_BAND_PINWHEEL_VAL
#define ENABLE_RGB_MATRIX_BAND_SPIRAL_SAT
#define ENABLE_RGB_MATRIX_BAND_SPIRAL_VAL
#define ENABLE_RGB_MATRIX_CYCLE_ALL
#define ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
#define ENABLE_RGB_MATRIX_CYCLE_UP_DOWN
#define ENABLE_RGB_MATRIX_CYCLE_OUT_IN
#define ENABLE_RGB_MATRIX_CYCLE_OUT_IN_DUAL
#define ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON
#define ENABLE_RGB_MATRIX_CYCLE_PINWHEEL
#define ENABLE_RGB_MATRIX_CYCLE_SPIRAL
#define ENABLE_RGB_MATRIX_DUAL_BEACON
#define ENABLE_RGB_MATRIX_RAINBOW_BEACON
#define ENABLE_RGB_MATRIX_RAINBOW_PINWHEELS
#define ENABLE_RGB_MATRIX_RAINDROPS
#define ENABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS

//RGB MATRIX FRAMEBUFFER EFFECTS
#ifdef RGB_MATRIX_FRAMEBUFFER_EFFECTS
    #define ENABLE_RGB_MATRIX_TYPING_HEATMAP
    #define ENABLE_RGB_MATRIX_DIGITAL_RAIN
#endif

//RGB NATRUX KEYPRESSES
#ifdef RGB_MATRIX_KEYPRESSES
    #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE
    #define ENABLE_RGB_MATRIX_SOLID_REACTIVE
    #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE
    #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE
    #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_CROSS
    #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTICROSS
    #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS
    #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS
    #define ENABLE_RGB_MATRIX_SPLASH
    #define ENABLE_RGB_MATRIX_MULTISPLASH
    #define ENABLE_RGB_MATRIX_SOLID_SPLASH
    #define ENABLE_RGB_MATRIX_SOLID_MULTISPLASH
#endif

#endif