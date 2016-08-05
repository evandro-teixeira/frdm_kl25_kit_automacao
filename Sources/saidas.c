/*
 * saidas.c
 *
 *  Created on: Jul 20, 2016
 *      Author: PDI
 */
#include "saidas.h"
//=========================================================
//
//
//=========================================================
void InicializaSaidas(uint8_t di)
{
	switch(di)
	{
		case OUT_D0:
			gpio_direction(PTA,5,OUTPUT,NO_PULL_RESISTOR);
		break;
		case OUT_D1:
			gpio_direction(PTA,4,OUTPUT,NO_PULL_RESISTOR);			
		break;
		case OUT_D2:
			gpio_direction(PTA,12,OUTPUT,NO_PULL_RESISTOR);
		break;
		case OUT_D3:
			gpio_direction(PTD,4,OUTPUT,NO_PULL_RESISTOR);
		break;
	}
}
//=========================================================
//
//
//=========================================================
void SaidasDigitais(uint8_t di, bool st)
{
	switch(di)
	{
		case OUT_D0:
			if(st==ON)
			{
				gpio_set(PTA,5,ON);
			}
			else
			{
				gpio_set(PTA,5,OFF);
			}
		break;	
		case OUT_D1:
			if(st==ON)
			{
				gpio_set(PTA,4,ON);
			}
			else
			{
				gpio_set(PTA,4,OFF);
			}
		break;	
		case OUT_D2:
			if(st==ON)
			{
				gpio_set(PTA,12,ON);
			}
			else
			{
				gpio_set(PTA,12,OFF);
			}
		break;	
		case OUT_D3:
			if(st==ON)
			{
				gpio_set(PTA,4,ON);
			}
			else
			{
				gpio_set(PTA,4,OFF);
			}
		break;	
	}
}
//=========================================================
