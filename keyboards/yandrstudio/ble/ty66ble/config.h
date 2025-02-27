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
#define PRODUCT_ID      0xAAC0
#define DEVICE_VER      0x0001
#define MANUFACTURER    Biu_Ikaill
#define PRODUCT         ty66ble

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 15



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

#define TAP_CODE_DELAY 15

#define USB_POLLING_INTERVAL_MS 1
#define QMK_KEYS_PER_SCAN 4



// for ble

// rgb switch
#define RGB_BLE_SW B4

// USB Power
#define USB_PWR_READ

// ADC SETTING
#define SAMPLE_BATTERY

// disable rgb when using ble
#define RGB_ONLY_ON_WHEN_USB
