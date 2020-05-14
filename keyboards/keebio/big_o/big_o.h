/* Copyright 2020 Keebio
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
    KA1,      KA3, KA4, KA5, KA6, KA7, KA8, KA9, KA10,       KA12, KA13, KA14, KA15, KA16, KA17, KA18, \
    KB1, KB2, KB3, KB4, KB5, KB6, KB7, KB8, KB9, KB10, KB11, KB12, KB13, KB14, KB15, KB16, KB17, KB18, \
    KC1, KC2, KC3, KC4, KC5, KC6, KC7, KC8, KC9, KC10, KC11, KC12, KC13, KC14, KC15, KC16, KC17, KC18, \
    KD1, KD2, KD3, KD4, KD5, KD6, KD7, KD8, KD9, KD10, KD11, KD12, KD13, KD14, KD15, \
    KE1, KE2, KE3, KE4, KE5, KE6, KE7, KE8, KE9, KE10, KE11, KE12, KE13, KE14, KE15,       KE17, \
    KF1, KF2, KF3, KF4, KF5, KF6, KF7, KF8, KF9, KF10, KF11, KF12, KF13, KF14, KF15, KF16, KF17, KF18 \
) \
{ \
    { KA1, KC_NO, KA3, KA4, KA5, KA6, KA7, KA8, KA9 }, \
    { KA18, KA17, KA16, KA15, KA14, KA13, KA12, KC_NO, KA10 }, \
    { KB1, KB2, KB3, KB4, KB5, KB6, KB7, KB8, KB9 }, \
    { KB18, KB17, KB16, KB15, KB14, KB13, KB12, KB11, KB10 }, \
    { KC1, KC2, KC3, KC4, KC5, KC6, KC7, KC8, KC9 }, \
    { KC18, KC17, KC16, KC15, KC14, KC13, KC12, KC11, KC10 }, \
    { KD1, KD2, KD3, KD4, KD5, KD6, KD7, KD8, KD9 }, \
    { KC_NO, KC_NO, KC_NO, KD15, KD14, KD13, KD12, KD11, KD10 }, \
    { KE1, KE2, KE3, KE4, KE5, KE6, KE7, KE8, KE9 }, \
    { KC_NO, KE17, KC_NO, KE15, KE14, KE13, KE12, KE11, KE10 }, \
    { KF1, KF2, KF3, KF4, KF5, KF6, KF7, KF8, KF9 }, \
    { KF18, KF17, KF16, KF15, KF14, KF13, KF12, KF11, KF10 } \
}

