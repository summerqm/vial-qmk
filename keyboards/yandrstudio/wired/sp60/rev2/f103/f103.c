// Copyright 2022 Y&R-Biu (@jiaxin96)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

void board_init(void) {
    AFIO->MAPR |= AFIO_MAPR_TIM1_REMAP_PARTIALREMAP;
}
