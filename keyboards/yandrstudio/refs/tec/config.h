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
#define PRODUCT_ID      0xFFFF
#define DEVICE_VER      0x0001
#define MANUFACTURER    Y&R
#define PRODUCT         tec

/* key matrix size */
#define MATRIX_ROWS 1
#define MATRIX_COLS 1


#define APLEX_EN_PIN E6
#define OPA_SHDN_PIN F4
#define DISCHARGE_PIN B1
#define ANALOG_PORT F6

#define MATRIX_ROW_PINS { C14 }
#define MATRIX_COL_CHANNELS { 1 }
#define MUX_SEL_PINS { A15, B2, B6 }


/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

#define TAP_CODE_DELAY 15

// enable the nkro when using the VIA.
#define FORCE_NKRO

// fix VIA RGB_light
#define VIA_HAS_BROKEN_KEYCODES

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5



