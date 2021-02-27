#include QMK_KEYBOARD_H

#define _QWERTY 0
#define _SYMB 1

#define SYM_L   MO(_SYMB)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QWERTY] = LAYOUT(
      KC_GRV,  KC_1, KC_2, KC_3, KC_4, KC_5, KC_EQL,                 KC_RBRC, KC_6, KC_7, KC_8,    KC_9,   KC_0,    KC_MINS,
      KC_TAB,  KC_Q, KC_W, KC_E, KC_R, KC_T, KC_BSLS,                KC_BSLS, KC_Y, KC_U, KC_I,    KC_O,   KC_P,    KC_LBRC,
      KC_CAPS,  KC_A, KC_S, KC_D, KC_F, KC_G,                                  KC_H, KC_J, KC_K,    KC_L,   KC_SCLN, KC_QUOT,
      KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B,                                  KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,
      KC_ESC, SYM_L, KC_LWIN, KC_LALT, KC_LCTL, KC_SPC, KC_BSPC,    KC_DEL, KC_ENT, KC_RALT, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT
  ),

  [_SYMB] = LAYOUT(
     _______, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6,              KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, _______,
     _______, KC_EXLM, KC_AT, KC_LCBR, KC_RCBR, KC_PIPE, _______,    _______, KC_PSLS, KC_P7, KC_P8, KC_P9, KC_PMNS, XXXXXXX,
     _______, KC_HASH, KC_DLR, KC_LBRC, KC_RBRC, KC_GRV,                      KC_PAST, KC_P4, KC_P5, KC_P6, KC_PPLS, XXXXXXX,
     _______, KC_PERC, KC_CIRC, KC_LPRN, KC_RPRN, KC_TILD,                    XXXXXXX, KC_P1, KC_P2, KC_P3, KC_PENT, XXXXXXX,
     _______, _______, _______, _______, _______, _______, _______,  _______, _______, KC_P0, KC_P0, KC_PDOT, KC_PENT, XXXXXXX
  ),
};
