/*
 * main.c
 *
 *  Created on: Apr 4, 2022
 *      Author: mhmdr
 */
#include "DIO_Interface.h"
#define  F_CPU 8000000U
#include "util/delay.h"

int main()
{
	DIO_SetPortDir(DIO_PORTA,DIO_PORT_OUTPUT);
	DIO_SetPortVal(DIO_PORTA,DIO_PORT_LOW);

	while(1)
	{
		/*     count up loop 				*/
DIO_SetPinVal(DIO_PORTA,DIO_PIN0,DIO_PIN_LOW);
_delay_ms(50);
DIO_SetPinVal(DIO_PORTA,DIO_PIN1,DIO_PIN_LOW);
_delay_ms(50);
DIO_SetPinVal(DIO_PORTA,DIO_PIN2,DIO_PIN_LOW);
_delay_ms(50);
DIO_SetPinVal(DIO_PORTA,DIO_PIN3,DIO_PIN_LOW);
_delay_ms(50);

		/*     count down loop 				*/
DIO_SetPinVal(DIO_PORTA,DIO_PIN0,DIO_PIN_HIGH);
_delay_ms(50);
DIO_SetPinVal(DIO_PORTA,DIO_PIN1,DIO_PIN_HIGH);
_delay_ms(50);
DIO_SetPinVal(DIO_PORTA,DIO_PIN2,DIO_PIN_HIGH);
_delay_ms(50);
DIO_SetPinVal(DIO_PORTA,DIO_PIN3,DIO_PIN_HIGH);
_delay_ms(50);

	}
	return 0;
}

