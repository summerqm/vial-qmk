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
#include "quantum.h"

#define LAYOUT( \
    K000, K001, K002, K003, K004,       K006, K007, K008, K009, K010, K011, K012, K013, K014, K015, K016, \
    K100, K101, K102, K103, K104, K105, K106, K107, K108, K109, K110, K111, K112, K113, K114, K115, K116, \
    K200, K201, K202, K203, K204, K205, K206, K207, K208, K209, K210, K211, K212, K213, K214, K215, K216, \
    K300, K301, K302, K303, K304, K305, K306, K307, K308, K309, K310, K311, K312,                         \
    K400,       K402, K403, K404, K405, K406, K407, K408, K409, K410, K411, K412,             K415,       \
    K500, K501, K502, K503,                                     K510, K511, K512, K513, K514, K515, K516  \
    )\
    { \
    { K000,  K001,  K002,  K003,  K004,  KC_NO, K006,  K007,  K008,  K009,  K010,  K011,  K012,  K013,  K014,  K015,  K016 }, \
    { K100,  K101,  K102,  K103,  K104,  K105,  K106,  K107,  K108,  K109,  K110,  K111,  K112,  K113,  K114,  K115,  K116 }, \
    { K200,  K201,  K202,  K203,  K204,  K205,  K206,  K207,  K208,  K209,  K210,  K211,  K212,  K213,  K214,  K215,  K216 }, \
    { K300,  K301,  K302,  K303,  K304,  K305,  K306,  K307,  K308,  K309,  K310,  K311,  K312,  KC_NO, KC_NO, KC_NO, KC_NO }, \
    { K400,  KC_NO, K402,  K403,  K404,  K405,  K406,  K407,  K408,  K409,  K410,  K411,  K412,  KC_NO, KC_NO, K415,  KC_NO }, \
    { K500,  K501,  K502,  K503,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, K510,  K511,  K512,  K513,  K514,  K515,  K516 }  \
}

enum keyboard_keycodes {
#ifdef VIA_ENABLE
    LOCK_GUI = USER00,
#else
    LOCK_GUI = SAFE_RANGE,
#endif
    TOG_MACOS_KEYMAP,
    KC_MISSION_CONTROL,
    KC_LAUNCHPAD,
#ifdef VIA_ENABLE
    NEW_SAFE_RANGE = SAFE_RANGE  // Important!
#else
    NEW_SAFE_RANGE   // Important!
#endif
};

#define KC_LG    LOCK_GUI
#define KC_MACOS TOG_MACOS_KEYMAP
#define KC_MCTL  KC_MISSION_CONTROL
#define KC_LPAD  KC_LAUNCHPAD
