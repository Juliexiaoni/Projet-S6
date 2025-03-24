/*
 * utils.c
 *
 *  Created on: Mar 17, 2025
 *      Author: juliexiaoni
 */

#include "utils.h"
#include <math.h>
#include <stdio.h>
#include "LED.h"
#include <stdlib.h>

float current_angle ;
int start_angle = 0 ;
int indice ;
int *p = &indice ;


void calculate_angle(float *current_angle, int *start_angle){
	int time_since_last_angle = (int) (TIM2 -> CNT); // temps qui s'est écoulé depuis le dernier appel de cette fonction
	(TIM2 -> CNT) = 0;
	if (*start_angle == 0 ){ // Initialiser la première position
		time_since_last_angle = 0 ;
		*start_angle ++ ;
	}
	float angle_traveled = time_since_last_angle * (0.0001); //Calculer l'angle parcourure par la barre LED depuis le dernier appel de cette fonction
	*current_angle += angle_traveled ;
}

void loop(){
	*p = 0 ;
	calculate_angle(&current_angle, &start_angle); // calculer l'angle actuelle de notre barre
	current_angle -= (floor(current_angle / 360)) * 360 ;
	float angle_hour = 0 ; // en degrés
	float angle_minute = 270 ; // en degrés
	if((abs(angle_minute - current_angle) <= 3)){
		LED_ON_minute();
		*p ++;
	}
	if((abs(angle_hour - current_angle) <= 3)){
		LED_ON_hour();
		*p ++;
	}
	if(*p == 0){

		LED_OFF();

	}
}

void setup(){

	//GPIOA->BSRR = GPIOA->BSRR | (0x1000) ;

}

