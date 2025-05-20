/*
 * leds.c
 *
 *  Created on: May 20, 2025
 *      Author: laure
 */

#include "main.h"
#include "stm32f3xx_it.h"
#include "leds.h"


uint16_t LEDS[LED_COUNT] = {
    GPIO_PIN_0, GPIO_PIN_1, GPIO_PIN_2, GPIO_PIN_3, GPIO_PIN_4,
    GPIO_PIN_5, GPIO_PIN_6, GPIO_PIN_7, GPIO_PIN_8, GPIO_PIN_9, GPIO_PIN_10};


void set_leds(uint8_t position) {
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_All, GPIO_PIN_RESET);  // Éteindre toutes les LEDs
	if (position == 0) {  // Position MIDI (PA0 à PA9 allumées + PA10 toujours allumée)
		for (int i = 0; i < 10; i++) {
			HAL_GPIO_WritePin(GPIOA, LEDS[i], GPIO_PIN_SET);
		}
      }
	else {  // Position 15h (PA0 à PA5 allumées + PA10 toujours allumée)
        for (int i = 0; i < 6; i++) {
        	HAL_GPIO_WritePin(GPIOA, LEDS[i], GPIO_PIN_SET);
          }
      }

      // LED 11 (PA10) reste toujours allumée
      HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10, GPIO_PIN_SET);
  }
