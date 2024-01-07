/* Copyright 2022 JasonRen(biu)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xAA96
#define PRODUCT_ID      0xAA88
#define DEVICE_VER      0x0001
#define MANUFACTURER    Y&R
// #define MANUFACTURER    BUFF_Y&R
#define PRODUCT         Luck65
// #define PRODUCT         Rose65
// #define PRODUCT         buff67v3

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 15

//                         0    1    2    3    4    5    6    7    8    9    10   11   12   13   14
// #define MATRIX_COL_PINS {  B5,  B6,  B7,  B8,  B9,  C13, C14, B0,  B1,  B2,  B10, B11, B12, A15, B3 }
#define MATRIX_COL_PINS {  B5,  B6,  B7,  B8,  B9,  C13, C14, B0,  B1,  B2,  B10, B11, B12, A15, B4 }
#define MATRIX_ROW_PINS {  A3,  A4,  A5,  A7,  C15 }

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 8

#ifdef RGBLIGHT_ENABLE

// #    define RGB_DI_PIN B4
#    define RGB_DI_PIN B3
#    define RGBLED_NUM 1
#    define DRIVER_LED_TOTAL RGBLED_NUM
#    define RGBLIGHT_SLEEP
#    define RGBLIGHT_VAL_STEP 10
#    define RGBLIGHT_LIMIT_VAL 200
#    define RGB_DISABLE_WHEN_USB_SUSPENDED true
#    define RGBLIGHT_ANIMATIONS
#    define RGBLIGHT_DEFAULT_MODE RGBLIGHT_MODE_RAINBOW_MOOD
#    define RGBLIGHT_LAYERS
#    define RGBLIGHT_LAYERS_RETAIN_VAL
#    define RGBLIGHT_LAYERS_OVERRIDE_RGB_OFF

#endif


