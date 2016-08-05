/*
 * reles.c
 *
 *  Created on: Jul 20, 2016
 *      Author: Evandro
 */
#include "reles.h"
//=========================================================
//
//
//=========================================================
void InicializaRele(uint8_t rl)
{
	switch(rl)
	{
		case RELE1:
			gpio_direction(PTE,1,OUTPUT,NO_PULL_RESISTOR);
		break;
		case RELE2:
			gpio_direction(PTE,0,OUTPUT,NO_PULL_RESISTOR);
		break;
		case RELE3:
			gpio_direction(PTD,1,OUTPUT,NO_PULL_RESISTOR);
		break;
		case RELE4:
			gpio_direction(PTD,3,OUTPUT,NO_PULL_RESISTOR);
		break;
		case RELE5:
			gpio_direction(PTD,2,OUTPUT,NO_PULL_RESISTOR);
		break;
		case RELE6:
			gpio_direction(PTD,0,OUTPUT,NO_PULL_RESISTOR);
		break;
	}
}
//=========================================================
//
//
//=========================================================
void AcionaRele(uint8_t rl, bool st)
{
	switch(rl)
	{
		case RELE1:
			if(st==ON)
			{
				gpio_set(PTE,1,ON);
			}
			else
			{
				gpio_set(PTE,1,OFF);
			}
		break;
		case RELE2:
			if(st==ON)
			{
				gpio_set(PTE,0,ON);
			}
			else
			{
				gpio_set(PTE,0,OFF);
			}
		break;
		case RELE3:
			if(st==ON)
			{
				gpio_set(PTD,1,ON);
			}
			else
			{
				gpio_set(PTD,1,OFF);
			}
		break;
		case RELE4:
			if(st==ON)
			{
				gpio_set(PTD,3,ON);
			}
			else
			{
				gpio_set(PTD,3,OFF);
			}
		break;
		case RELE5:
			if(st==ON)
			{
				gpio_set(PTD,2,ON);
			}
			else
			{
				gpio_set(PTD,2,OFF);
			}
		break;
		case RELE6:
			if(st==ON)
			{
				gpio_set(PTD,0,ON);
			}
			else
			{
				gpio_set(PTD,0,OFF);
			}
		break;
	}
	
}
//=========================================================
