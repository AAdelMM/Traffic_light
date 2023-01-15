/*
 * led.c
 *
 * Created: 1/12/2023 1:33:18 AM
 *  Author: Ahmed Adel
 */ 
 /*
 * led.c
 *
 * Created: 1/7/2023 3:11:59 PM
 *  Author: Ahmed Adel
 */ 
 #include "led.h"
 

 void LED_init(uint8_t ledport,uint8_t ledpin)
 {
	DIO_init(ledpin,ledport,OUTPUT);
	
 }
 void LED_on(uint8_t ledport,uint8_t ledpin)
 {
	DIO_write(ledpin,ledport,HIGH);
 }
 void LED_off(uint8_t ledport,uint8_t ledpin)
 {
	DIO_write(ledpin,ledport,LOW);
 }
 void LED_toggle(uint8_t ledport,uint8_t ledpin)
 {
	 DIO_toggle( ledpin, ledport);
 }
