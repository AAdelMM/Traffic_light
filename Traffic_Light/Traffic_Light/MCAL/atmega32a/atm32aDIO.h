/*
 * atm32aDIO.h
 *
 * Created: 1/12/2023 
 *  Author: Ahmed Adel
 */ 


#ifndef ATM32ADIO_H_
#define ATM32ADIO_H_

#include "registers.h"

//all internal typedefs for drivers

//all driver macros

#define PORT_A 'A'
#define PORT_B 'B'
#define PORT_C 'C'
#define PORT_D 'D'
//driver directions
#define INPUT 0
#define OUTPUT 1
//driver values
#define LOW 0
#define HIGH 1


//all driver functions prototypes

void DIO_init(uint8_t pinnumber,uint8_t portnumber,uint8_t direction);
void DIO_write(uint8_t pinnumber,uint8_t portnumber,uint8_t value);
void DIO_read(uint8_t pinnumber,uint8_t portnumber,uint8_t *value);
void DIO_toggle(uint8_t pinnumber,uint8_t portnumber);


#endif /* ATM32ADIO_H_ */