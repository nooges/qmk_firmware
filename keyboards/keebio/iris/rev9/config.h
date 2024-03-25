// Copyright 2024 Danny Nguyen (@nooges)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/* Defines for the split keyboard setup */
#define SERIAL_USART_DRIVER SD3         // USART 3
#define SOFT_SERIAL_PIN B10             // The GPIO pin that is used split communication.
#define USART3_REMAP                    // Remap USART TX and RX pins for half duplex
#define SERIAL_USART_TX_PAL_MODE 7      // Pin alternate function 7 = USART3_TX for PB10
#define SERIAL_DEBUG

#if defined(SOFT_SERIAL_PIN)
#    define SERIAL_USART_TX_PIN SOFT_SERIAL_PIN
#endif

#define USB_VBUS_PIN C6
#define SPLIT_HAND_PIN A0

/* Defines for the RGB matrix */
#ifdef RGB_MATRIX_ENABLE
#   define NOP_FUDGE 0.4
#   define WS2812_PWM_DRIVER PWMD3
#   define WS2812_PWM_CHANNEL 4
#   define WS2812_PWM_PAL_MODE 10
#   define WS2812_DMA_STREAM STM32_DMA1_STREAM2
#   define WS2812_DMA_CHANNEL 2
#   define WS2812_DMAMUX_ID STM32_DMAMUX1_TIM3_UP

#endif
