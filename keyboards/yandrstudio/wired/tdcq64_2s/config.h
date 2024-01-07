/* Copyright 2021 JasonRen(biu)
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
#define PRODUCT_ID      0xAAA2
#define DEVICE_VER      0x0001
#define MANUFACTURER    JasonRen biu
#define PRODUCT         tdcq64_2s

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 14

//                         0   1   2       3   4    5    6    7    8   9   10  11  12  13  14
#define MATRIX_COL_PINS { B12, B13, B14, B15, A8, A9,  A10, C13, C14, C15, A0, A1, A2, A3}
#define MATRIX_ROW_PINS { A15, B3, B4, B5, B7}

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW


// enable the nkro when using the VIA.
#define FORCE_NKRO

// fix VIA RGB_light
#define VIA_HAS_BROKEN_KEYCODES

/* define if matrix has ghost */
//#define MATRIX_HAS_GHOST

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5


#define  LED_CAPS_LOCK_PIN A5
#define LED_PIN_ON_STATE 0



