/*
 * leds.h
 *
 *  Created on: May 20, 2025
 *      Author: laure
 */

#ifndef SRC_LEDS_H_
#define SRC_LEDS_H_
#define LED_COUNT 11  // Nombre total de LEDs

extern uint16_t LEDS[LED_COUNT];  // Déclaration externe
void set_leds(uint8_t position);

#endif /* SRC_LEDS_H_ */
