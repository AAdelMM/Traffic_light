/*
 * timers.c
 *
 * Created: 1/14/2023 1:41:32 PM
 *  Author: Ahmed Adel
 */ 

 #include "timers.h"

 void timer0Mode(void) // later choose different modes
 {
	TCCR0 = 0x00;//Normal mode
 }

 void timer0initValue(void)// later add value
 {
	TCNT0 = 0x00;
 }

 void timer0Start(void)
 {
	TCCR0 |= (1<<0); //no prescaler
 }

 void timer0Stop()
 {
	TCCR0 = 0x00;
 }

 void timer0Delay_ms(unsigned int delayTime)
 {
	unsigned int overflowCounter=0;
	//unsigned int t = (3*delayTime);
	TCNT0=0x00;
	TCCR0 |= (1<<0);
	 while(overflowCounter < (32500*delayTime))
	 {
		 //will repeat 2000 times
		 //stop after one over flow
		 //wait until the overflow flag to be set
		 while((TIFR &(1<<0)) == 0);

		 //clear overflow flag
		 TIFR &= ~(1<<0);

		 overflowCounter++;
	 }
	 timer0Stop();
 }