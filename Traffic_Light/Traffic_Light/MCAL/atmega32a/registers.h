/*
 * registers.h
 *
 * Created: 1/12/2023 1:40:12 AM
 *  Author: Ahmed Adel
 */ 


#ifndef REGISTERS_H_
#define REGISTERS_H_

/*******************************************************
>>>>>>>>>  ALL MICROCONTROLLER REGISTERS <<<<<<<<<<
********************************************************/

typedef unsigned char uint8_t;

/*********************
>>>DIO REGISTERS<<<
**********************/

//PORTA REGISTERS
#define PORTA *((volatile uint8_t*)0x3B) //8 bit register
#define DDRA *((volatile uint8_t*)0x3A) //8 bit register
#define PINA *((volatile uint8_t*)0x39) //8 bit register

//PORTB REGISTERS
#define PORTB *((volatile uint8_t*)0x38) //8 bit register
#define DDRB *((volatile uint8_t*)0x37) //8 bit register
#define PINB *((volatile uint8_t*)0x36) //8 bit register

//PORTC REGISTERS
#define PORTC *((volatile uint8_t*)0x35) //8 bit register
#define DDRC *((volatile uint8_t*)0x34) //8 bit register
#define PINC *((volatile uint8_t*)0x33) //8 bit register

//PORTD REGISTERS
#define PORTD *((volatile uint8_t*)0x32) //8 bit register
#define DDRD *((volatile uint8_t*)0x31) //8 bit register
#define PIND *((volatile uint8_t*)0x30) //8 bit register

/*********************
>>>TIMER REGISTERS<<<
**********************/
//Timer0
#define TCCR0 *((volatile uint8_t*)0x53) //8 bit timer counter control register
#define TCNT0 *((volatile uint8_t*)0x52) //8 bit timer counter value register
#define TIFR *((volatile uint8_t*)0x58) //8 bit timer interrupt flag register
#define TIMSK *((volatile uint8_t*)0x59)//8 bit timer mask



#endif /* REGISTERS_H_ */