/*
 * led.h
 *
 * Created: 1/12/2023 
 *  Author: Ahmed Adel
 */ 


#ifndef LED_H_
#define LED_H_


#include "../../MCAL/atmega32a/atm32aDIO.h"



void LED_init(uint8_t ledport,uint8_t ledpin);
void LED_on(uint8_t ledport,uint8_t ledpin);
void LED_off(uint8_t ledport,uint8_t ledpin);
void LED_toggle(uint8_t ledport,uint8_t ledpin);
void LED_blink(uint8_t ledport,uint8_t ledpin);



#endif /* LED_H_ */