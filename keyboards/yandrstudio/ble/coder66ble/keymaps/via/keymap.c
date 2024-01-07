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
#include QMK_KEYBOARD_H


#ifdef TAP_DANCE_ENABLE
// Tap Dance declarations
enum {
    TD_FN_LAYER_TOG
};

void dance_layer_to_layer_count_finsh(qk_tap_dance_state_t *state, void *user_data) {
    uint8_t cur_layer = get_highest_layer(layer_state);
    if (state->count == 1) {
        layer_on(2);
    } else if (state->count == 2) {
        if (cur_layer == 0) {
            layer_move(1);
        } else if (cur_layer == 1) {
            layer_move(0);
        }
    } else if (state->count >= 3) {
        layer_on(3);
    }
}

void dance_layer_to_layer_count_reset(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {
        layer_off(2);
    } else if (state->count == 2) {
        // keep state
    } else if (state->count >= 3) {
        layer_off(3);
    }
}


// Tap Dance definitions
qk_tap_dance_action_t tap_dance_actions[] = {
    [TD_FN_LAYER_TOG] = ACTION_TAP_DANCE_FN_ADVANCED(NULL,dance_layer_to_layer_count_finsh, dance_layer_to_layer_count_reset)
};

#endif

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

#if defined(KEYBOARD_yandrstudio_ble_coder66ble_solder)
    LAYOUT_solder(
        KC_ESC,  KC_1,    KC_2,   KC_3,    KC_4,  KC_5,  KC_6,  KC_7,  KC_8,  KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSLS, KC_BSPC,
        KC_TAB,  KC_Q,    KC_W,   KC_E,    KC_R,  KC_T,  KC_Y,  KC_U,  KC_I,  KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,           KC_DEL,
        KC_CAPS, KC_A,    KC_S,   KC_D,    KC_F,  KC_G,  KC_H,  KC_J,  KC_K,  KC_L,    KC_SCLN, KC_QUOT, KC_BSLS, KC_ENT,            KC_PGUP,
        KC_LSFT, KC_BSLS, KC_Z,   KC_X,    KC_C,  KC_V,  KC_B,  KC_N,  KC_M,  KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,          KC_UP,    KC_PGDN,
        KC_LCTL, KC_LGUI, KC_LALT,                       KC_SPC,                       KC_RALT, TD(TD_FN_LAYER_TOG),  KC_RCTL, KC_LEFT, KC_DOWN,  KC_RGHT),
    LAYOUT_solder(
        KC_ESC,  KC_F1,   KC_F2,  KC_F3,   KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_BSLS, KC_BSPC,
        KC_TAB,  KC_Q,    KC_W,   KC_E,    KC_R,  KC_T,  KC_Y,  KC_U,  KC_I,  KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,           KC_DEL,
        KC_CAPS, KC_A,    KC_S,   KC_D,    KC_F,  KC_G,  KC_H,  KC_J,  KC_K,  KC_L,    KC_SCLN, KC_QUOT, KC_BSLS, KC_ENT,            KC_PGUP,
        KC_LSFT, KC_BSLS, KC_Z,   KC_X,    KC_C,  KC_V,  KC_B,  KC_N,  KC_M,  KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,          KC_UP,    KC_PGDN,
        KC_LCTL, KC_LGUI, KC_LALT,                       KC_SPC,                       KC_RALT, TD(TD_FN_LAYER_TOG),  KC_RCTL, KC_LEFT, KC_DOWN,  KC_RGHT),
    LAYOUT_solder(
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS,                            KC_TRNS,                            KC_TRNS, TD(TD_FN_LAYER_TOG), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
    LAYOUT_solder(
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS,                            KC_TRNS,                            KC_TRNS, TD(TD_FN_LAYER_TOG), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS)
#else
        // 0        1        2         3           4           5          6           7        8          9          10         11          12          13       14
    LAYOUT_hotswap(
        KC_ESC,  KC_1,    KC_2,     KC_3,       KC_4,     KC_5,    KC_6,     KC_7,     KC_8,     KC_9,      KC_0,               KC_MINS,   KC_EQL,    KC_BSPC,
        KC_TAB,  KC_Q,    KC_W,     KC_E,       KC_R,     KC_T,    KC_Y,     KC_U,     KC_I,     KC_O,      KC_P,               KC_LBRC,   KC_RBRC,   KC_BSLS,   KC_DEL,
        KC_CAPS, KC_A,    KC_S,     KC_D,       KC_F,     KC_G,    KC_H,     KC_J,     KC_K,     KC_L,      KC_SCLN,            KC_QUOT,   KC_ENT,               KC_PGUP,
        KC_LSFT, KC_Z,    KC_X,     KC_C,       KC_V,     KC_B,    KC_N,     KC_M,     KC_COMM,  KC_DOT,    KC_SLSH,            KC_RSFT,              KC_UP,     KC_PGDN,
        KC_LCTL, KC_LGUI, KC_LALT,                        KC_SPC,                                KC_RALT,   TD(TD_FN_LAYER_TOG),                        KC_LEFT,   KC_DOWN,   KC_RGHT),
    LAYOUT_hotswap(
        KC_ESC,  KC_F1,   KC_F2,    KC_F3,      KC_F4,    KC_F5,   KC_F6,    KC_F7,    KC_F8,    KC_F9,     KC_F10,             KC_F11,    KC_F12,    KC_TRNS,
        KC_TAB,  KC_Q,    KC_W,     KC_E,       KC_R,     KC_T,    KC_Y,     KC_U,     KC_I,     KC_O,      KC_P,               KC_LBRC,   KC_RBRC,   KC_BSLS,   KC_PGDN,
        KC_CAPS, KC_A,    KC_S,     KC_D,       KC_F,     KC_G,    KC_H,     KC_J,     KC_K,     KC_L,      KC_SCLN,            KC_QUOT,   KC_ENT,               KC_PGUP,
        KC_LSFT, KC_Z,    KC_X,     KC_C,       KC_V,     KC_B,    KC_N,     KC_M,     KC_COMM,  KC_DOT,    KC_SLSH,            KC_RSFT,              KC_UP,     KC_PGDN,
        KC_LCTL, KC_LGUI, KC_LALT,                        KC_SPC,                                KC_RALT,   TD(TD_FN_LAYER_TOG),                        KC_LEFT,   KC_DOWN,   KC_RGHT),
    LAYOUT_hotswap(
        KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,    KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_TRNS,  KC_TRNS,   KC_TRNS,   KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,    KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_TRNS,  KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,    KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_TRNS,  KC_TRNS,   KC_TRNS,              KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,    KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_TRNS,  KC_TRNS,              KC_TRNS,   KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS,                        KC_TRNS,                               KC_TRNS,   TD(TD_FN_LAYER_TOG),              KC_TRNS,    KC_TRNS,   KC_TRNS),
    LAYOUT_hotswap(
        KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,    KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_TRNS,  KC_TRNS,   KC_TRNS,   KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,    KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_TRNS,  KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,    KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_TRNS,  KC_TRNS,   KC_TRNS,              KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,    KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_TRNS,  KC_TRNS,              KC_TRNS,   KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS,                        KC_TRNS,                               KC_TRNS,   TD(TD_FN_LAYER_TOG),              KC_TRNS,    KC_TRNS,   KC_TRNS)
#endif
};
