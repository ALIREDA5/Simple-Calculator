/*
 * DIO_lcfg.c
 *
 * Created: 9/20/2023 11:34:06 PM
 *  Author: Ali Reda
 */ 

/*----------------- Libraries and Definitions ------------*/

#include "DIO.h"

/*------------------- Global Array (Pin Status) ------------------*/

const DIO_PINstatus_type PinStatusArray[32]={
	/*PORTA*/
	output,
	output,
	output,
	output,
	output,
	output,
	output,
	output,
	/*PORTB*/
	output,
	output,
	output,
	output,
	output,
	output,
	output,
	output,
	/*PORTC*/
	output,
	output,
	output,
	output,
	inplup,
	inplup,
	inplup,
	inplup,
	/*PORTD*/
	infree,
	infree,
	infree,
	infree,
	infree,
	infree,
	output,
	output,
};