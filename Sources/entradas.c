/*
 * entradas.c
 *
 *  Created on: Jul 20, 2016
 *      Author: PDI
 */
#include "entradas.h"
//=========================================================
//
//
//=========================================================
void InicializaEntradas(uint8_t di)
{
	switch(di)
	{
		case IN_D0:
			gpio_direction(PTD,5,INPUT);
		break;
		case IN_D1:
			gpio_direction(PTA,13,INPUT);
		break;
		case IN_D2:
			gpio_direction(PTC,9,INPUT);
		break;
		case IN_D3:
			gpio_direction(PTC,8,INPUT);
		break;
	}
}
//=========================================================
//
//
//=========================================================
bool EntradasDigitais(uint8_t in)
{
	switch(in)
	{
		case IN_D0:
			if(gpio_read(PTD,5))
			{
				return TRUE;
			}
			else
			{
				return FALSE;
			}
		break;
		case IN_D1:
			if(gpio_read(PTA,13))
			{
				return TRUE;
			}
			else
			{
				return FALSE;
			}
		break;
		case IN_D2:
			if(gpio_read(PTC,9))
			{
				return TRUE;
			}
			else
			{
				return FALSE;
			}
		break;
		case IN_D3:
			if(gpio_read(PTC,8))
			{
				return TRUE;
			}
			else
			{
				return FALSE;
			}
		break;
	}
}
//=========================================================
