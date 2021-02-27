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
#pragma once

#include "quantum.h"

#define LAYOUT( \
  L00, L01, L02, L03, L04, L05, L06,                R06, R05, R04, R03, R02, R01, R00, \
  L07, L08, L09, L10, L11, L12, L13,                R13, R12, R11, R10, R09, R08, R07, \
  L14, L15, L16, L17, L18, L19,                          R19, R18, R17, R16, R15, R14, \
  L21, L22, L23, L24, L25, L26,                          R26, R25, R24, R23, R22, R21, \
  L28, L29, L30, L31,    L32,   L33, L34,      R34, R33,   R32,    R31, R30, R29, R28  \
) \
{ \
    { L00, L01, L02, L03, L04, L05, L06 }, \
    { L07, L08, L09, L10, L11, L12, L13 }, \
    { L14, L15, L16, L17, L18, L19, KC_NO }, \
    { L21, L22, L23, L24, L25, L26, KC_NO }, \
    { L28, L29, L30, L31, L32, L33, L34 }, \
    { R00, R01, R02, R03, R04, R05, R06 }, \
    { R07, R08, R09, R10, R11, R12, R13 }, \
    { R14, R15, R16, R17, R18, R19, KC_NO }, \
    { R21, R22, R23, R24, R25, R26, KC_NO }, \
    { R28, R29, R30, R31, R32, R33, R34 }, \
}
