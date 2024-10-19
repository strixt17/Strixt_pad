// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#include "version.h"

#include "quantum.h"
#define MATRIX_COL_PINS { D0, D1, D2 }
#define MATRIX_ROW_PINS { D10, D9, D5, D8 }


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    
    [0] = LAYOUT(
      KC_F1, KC_F2, KC_F3, 
      KC_F4, KC_F5, KC_F6, 
      KC_F7, KC_F8, KC_F9,
      KC_F10, KC_F11, KC_F12
    )
};
