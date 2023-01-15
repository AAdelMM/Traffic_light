/*
 * app.c
 *
 * Created: 1/12/2023 1:29:04 AM
 *  Author: Ahmed Adel
 */ 

 #include "app.h"
 
 

/* Replace with your application code */
//make pin 3 in PORTB as output


void normalMode()
{
	LED_init(PORT_A,0);LED_init(PORT_A,1);LED_init(PORT_A,2);
	LED_init(PORT_B,0);LED_init(PORT_B,1);LED_init(PORT_B,2);
	
	while (1)
	{
		LED_on(PORT_A,0);LED_on(PORT_B,2);
		timer0Delay_ms(1);
		LED_off(PORT_A,0);LED_off(PORT_B,2);
		for(int i=0;i<5;i++)
		{
			LED_on(PORT_A,1);LED_on(PORT_B,1);
			//delay 1sec
			LED_off(PORT_A,1);LED_off(PORT_B,1);
			//delay 1sec
		}
		LED_off(PORT_A,1);LED_off(PORT_B,1);
		LED_on(PORT_A,2);LED_on(PORT_B,0);
		//delay 5 sec
		LED_off(PORT_A,2);LED_off(PORT_B,0);
		for(int i=0;i<5;i++)
		{
			LED_on(PORT_A,1);LED_on(PORT_B,1);
			//delay 1 sec
			LED_off(PORT_A,1);LED_off(PORT_B,1);
			//delay 1 sec
		}
		//timer0Stop();
		
		
	}
}
void pedestrainMode()
{
	
}

 void appStart(void)
 {
	normalMode();
 }
 
/* #define NUMBER_OF_OVERFLOWS 3900
unsigned int overflowCounter = 0;
//uint8_t buttonstate;//save condition of pin

//choose timer mode
 T0MODE = 0x00;//Normal mode
 T0I_VALUE = 0x00; //initial value*/

/* //start timer -> setting clock
 T0MODE |= (1<<0); //no prescaler
 while(overflowCounter < NUMBER_OF_OVERFLOWS)
 {
	 //will repeat 2000 times
	 //stop after one over flow
	 //wait until the overflow flag to be set
	 while((TIFR & (1<<0)) == 0);

	 //clear overflow flag
	 TIFR &= ~(1<<0);

	 overflowCounter++;
 }
 
 overflowCounter = 0;

 //timer stop
 T0MODE = 0x00;*/