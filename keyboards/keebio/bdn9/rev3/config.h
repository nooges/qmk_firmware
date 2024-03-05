// Copyright 2024 Danny Nguyen (@nooges)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/* Defines for the RGB matrix */
#ifdef RGB_MATRIX_ENABLE
#   define NOP_FUDGE 0.4                // Chip/pin specific configs from this lone onward
#   define WS2812_EXTERNAL_PULLUP
#   define WS2812_PWM_DRIVER PWMD3
#   define WS2812_PWM_CHANNEL 4
#   define WS2812_PWM_PAL_MODE 10
#   define WS2812_DMA_STREAM STM32_DMA1_STREAM2
#   define WS2812_DMA_CHANNEL 2
#   define WS2812_DMAMUX_ID STM32_DMAMUX1_TIM3_UP
#endif
