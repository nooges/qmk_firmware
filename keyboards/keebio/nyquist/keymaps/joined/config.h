#define USE_I2C
#define OLED_DISPLAY_128X64
//#define OLED_DISPLAY_ADDRESS 0x78

#undef PRODUCT
#define PRODUCT Boomerang Levinson
#undef MATRIX_ROW_PINS
#define MATRIX_ROW_PINS { F0, F5, D7, F6, B3 }
#define ENCODERS_PAD_A { B2 }
#define ENCODERS_PAD_B { B1 }
