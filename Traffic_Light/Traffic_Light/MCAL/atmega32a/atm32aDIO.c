/*
 * atm32aDIO.c
 *
 * Created: 1/12/2023
 *  Author: Ahmed Adel
 */ 
 

//include .h
#include "atm32aDIO.h"

//global variables
//functions definitions

void DIO_init(uint8_t pinnumber,uint8_t portnumber,uint8_t direction)
{
	switch(portnumber)
	{
	  case PORT_A:
			if (direction == INPUT)
			{
				DDRA &= ~(1<<pinnumber);
			}
			else if(direction == OUTPUT)
			{
				DDRA |= (1<<pinnumber);
			}
			else
			{
				//return error handle
			}
	   break;
	   case PORT_B:
		   if (direction == INPUT)
		   {
			   DDRB &= ~(1<<pinnumber);
		   }
		   else if(direction == OUTPUT)
		   {
			   DDRB |= (1<<pinnumber);
		   }
		   else
		   {
			   //return error handle
		   }
	    break;
	    case PORT_C:
			if (direction == INPUT)
			{
				DDRC &= ~(1<<pinnumber);
			}
			else if(direction == OUTPUT)
			{
				DDRC |= (1<<pinnumber);
			}
			else
			{
				//return error handle
			}
	     break;
		 case PORT_D:
			 if (direction == INPUT)
			 {
				 DDRD &= ~(1<<pinnumber);
			 }
			 else if(direction == OUTPUT)
			 {
				 DDRD |= (1<<pinnumber);
			 }
			 else
			 {
				 //return error handle
			 }
		  break;
	 }
	  
}
void DIO_write(uint8_t pinnumber,uint8_t portnumber,uint8_t value)
{
	switch(portnumber)
	{

	
	case PORT_A:
		if (value == LOW)
		{
			PORTA &= ~(1<<pinnumber);
		}
		else if(value == HIGH)
		{
			PORTA |= (1<<pinnumber);
		}
		else
		{
			//return error handle
		}
	break;
	case PORT_B:
		if (value == LOW)
		{
			PORTB &= ~(1<<pinnumber);
		}
		else if(value == HIGH)
		{
			PORTB |= (1<<pinnumber);
		}
		else
		{
			//return error handle
		}
	break;
	case PORT_C:
		if (value == LOW)
		{
			PORTC &= ~(1<<pinnumber);
		}
		else if(value == HIGH)
		{
			PORTC |= (1<<pinnumber);
		}
		else
		{
			//return error handle
		}
	break;
	case PORT_D:
		if (value == LOW)
		{
			PORTD &= ~(1<<pinnumber); //write 0
		}
		else if(value == HIGH)
		{
			PORTD |= (1<<pinnumber); //write 1
		}
		else
		{
			//return error handle
		}
	break;
	}
}
void DIO_read(uint8_t pinnumber,uint8_t portnumber,uint8_t *value)
{
	switch(portnumber)
	{
		case PORT_A:
			*value=(PINA & (1<<pinnumber))>>pinnumber;
		break;
		case PORT_B:
			*value=(PINB & (1<<pinnumber))>>pinnumber;
		break;
		case PORT_C:
			*value=(PINC & (1<<pinnumber))>>pinnumber;
		break;
		case PORT_D:
			*value=(PIND & (1<<pinnumber))>>pinnumber;
		break;
	}

}
void DIO_toggle(uint8_t pinnumber,uint8_t portnumber)
{
	uint8_t state;
	DIO_read( pinnumber,portnumber, &state);
	if (state == HIGH)
	{
		DIO_write( pinnumber, portnumber,LOW);
	}
	else
	{	
		DIO_write( pinnumber, portnumber,HIGH);
	}
	
}

