/*
Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert
Copyright 2018 Danny Nguyen <danny@keeb.io>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once


/* USB Device descriptor parameter */
#define VENDOR_ID       0xCB10
#define PRODUCT_ID      0x1146
#define DEVICE_VER      0x0400
#define MANUFACTURER    Keebio
#define PRODUCT         Levinson LP
#define DESCRIPTION     Split 40 percent ortholinear keyboard

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 8
#define MATRIX_COLS 6

// wiring of each half
#define MATRIX_ROW_PINS { B1, B2, F5, F4 }
#define MATRIX_COL_PINS { F1, F0, B4, F6, B3, C7 }
#define MATRIX_ROW_PINS_RIGHT { B1, B2, D5, D3 }
#define MATRIX_COL_PINS_RIGHT { B6, C6, C7, B4, B3, F0 }
#define SPLIT_HAND_PIN F7

#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* serial.c configuration for split keyboard */
#define SOFT_SERIAL_PIN D0

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* ws2812 RGB LED */
#define RGB_DI_PIN E6
#define RGBLED_NUM 12    // Number of LEDs
#define RGBLED_SPLIT { 6, 6 }

/* Backlight LEDs */
#define BACKLIGHT_PIN B5
#define BACKLIGHT_LEVELS 7
