/*
 * LED.c
 *
 *  Created on: Mar 12, 2025
 *      Author: juliexiaoni
 */
#include "main.h"
#include "LED.h"
#include "stm32g4xx_hal.h"

#define NUM_LEDS 11
GPIO_TypeDef* LED_PORT = GPIOA;
uint16_t LED_PINS[NUM_LEDS] = {GPIO_PIN_0, GPIO_PIN_1, GPIO_PIN_2, GPIO_PIN_3, GPIO_PIN_4,
								GPIO_PIN_5, GPIO_PIN_6, GPIO_PIN_7, GPIO_PIN_8, GPIO_PIN_9,
								GPIO_PIN_10};

void LED_ON_minute(){
	 for(int i = 0; i < NUM_LEDS; i++ ){
			  HAL_GPIO_WritePin(LED_PORT, LED_PINS[i], GPIO_PIN_SET);

	 }
}

void LED_ON_hour(){
	 for(int i = 0; i < NUM_LEDS; i++ ){
			  HAL_GPIO_WritePin(LED_PORT, LED_PINS[i], GPIO_PIN_SET);

	 }
}

void LED_OFF(){
	for(int i = 0; i < NUM_LEDS; i++ ){
		HAL_GPIO_WritePin(LED_PORT, LED_PINS[i], GPIO_PIN_RESET);

	 }
}
