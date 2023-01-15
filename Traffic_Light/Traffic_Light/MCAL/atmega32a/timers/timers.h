/*
 * timers.h
 *
 * Created: 1/14/2023 1:41:55 PM
 *  Author: Ahmed Adel
 */ 


#ifndef TIMERS_H_
#define TIMERS_H_

#include "../registers.h"

#define T0MODE TCCR0
#define T0I_VALUE TCNT0

void timer0Mode(void);
void timer0initValue(void);
void timer0Start(void);
void timer0Stop(void);
void timer0Delay_ms(unsigned int delayTime);



#endif /* TIMERS_H_ */