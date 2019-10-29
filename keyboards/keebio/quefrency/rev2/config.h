/*
Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

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
#define PRODUCT_ID      0x1257
#define DEVICE_VER      0x0200
#define MANUFACTURER    Keebio
#define PRODUCT         Quefrency
#define DESCRIPTION     Split 60/65 percent staggered keyboard

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 10
#define MATRIX_COLS 9

// wiring of each half
#define MATRIX_ROW_PINS { B14, B13, A2, A1, A3, A0, A0, A0, A0, A0 }
#define MATRIX_COL_PINS { B1, B10, B11, A15, B3, B4, B5, B6, B7 }
#define MATRIX_ROW_PINS_RIGHT { B14, B13, A2, A1, A0, A0, A0, A0, A0 }
#define MATRIX_COL_PINS_RIGHT { B1, B10, B11, A7, A5, B12, A3, B6, B7 }
#define SPLIT_HAND_PIN B0
#define MASTER_VBUS_PIN B2

#define BACKLIGHT_LEVELS 6
#define BACKLIGHT_BREATHING
#define BREATHING_PERIOD 6

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* serial.c configuration for split keyboard */
#define SOFT_SERIAL_PIN D0

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* ws2812 RGB LED */
#define RGBLIGHT_ANIMATIONS
#define WS2812_LED_N 8
#define RGBLED_NUM WS2812_LED_N
#define PORT_WS2812     GPIOB
#define PIN_WS2812      15
#define WS2812_SPI SPID2


// EEPROM usage
// TODO: refactor with new user EEPROM code (coming soon)
#define EEPROM_MAGIC 0x451F
#define EEPROM_MAGIC_ADDR 32
// Bump this every time we change what we store
// This will automatically reset the EEPROM with defaults
// and avoid loading invalid data from the EEPROM
#define EEPROM_VERSION 0x02
#define EEPROM_VERSION_ADDR 34


#define DYNAMIC_KEYMAP_LAYER_COUNT 4
// Dynamic macro starts after dynamic keymaps (35+(4*5*15*2)) = (35+600) = 635
// start + layer * rows * col * 2
#define DYNAMIC_KEYMAP_EEPROM_ADDR 35
#define EEPROM_CUSTOM_BACKLIGHT 636
#define DYNAMIC_KEYMAP_MACRO_EEPROM_ADDR 637
#define DYNAMIC_KEYMAP_MACRO_EEPROM_SIZE 200
#define DYNAMIC_KEYMAP_MACRO_COUNT 16
