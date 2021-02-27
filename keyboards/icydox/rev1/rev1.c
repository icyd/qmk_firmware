/* Copyright 2021 Alberto Vázquez <beto.v25@gmail.com>
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
#include "rev1.h"

void encoder_update_kb(uint8_t index, bool clockwise) {
    switch (index) {
        case 0:
            if (clockwise) {
                tap_code(KC_DOWN);
            } else {
                tap_code(KC_UP);
            }
            break;
        case 1:
            if (clockwise) {
                tap_code(KC_PGDN);
            } else {
                tap_code(KC_PGUP);
            }
            break;
    }
}

void dip_switch_update_kb(uint8_t index, bool active) {
    static bool enabled = false;

    switch (index) {
        case 0:
            if (active) {
                if (!enabled) {
                    tap_code16(C(KC_A));
                    tap_code(KC_2);
                } else {
                    tap_code(KC_X);
                }
                enabled ^= true;
            }
    }
}

void matrix_init_kb(void) {
    backlight_enable();
    backlight_level(3);
}
