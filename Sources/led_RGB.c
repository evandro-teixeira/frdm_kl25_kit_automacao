/*
 * led_RGB.c
 *
 *  Created on: Aug 18, 2016
 *      Author: PDI
 */
#include"led_RGB.h"
//=========================================================
//
//
//=========================================================
void InicializaLedRED(void)
{
	gpio_direction(PTB,18,OUTPUT,NO_PULL_RESISTOR);		// Inicializa led RED
}
void InicializaLedGREEN(void)
{
	gpio_direction(PTD,1, OUTPUT,NO_PULL_RESISTOR);		// Inicializa led GREEN
}
void InicializaLedBLUE(void)
{
	gpio_direction(PTB,19,OUTPUT,NO_PULL_RESISTOR);		// Inicializa led BLUE
}
//=========================================================
//
//
//=========================================================
void AcionaLedRED(bool i)
{	
	gpio_set(PTB,18,i);	
}
void AcionaLedGREEN(bool i)
{
	gpio_set(PTD,1,i);	
}
void AcionaLedBLUE(bool i)
{
	gpio_set(PTB,19,i);		
}
//=========================================================
//
//
//=========================================================
void ToggleLedRED(void)
{
	gpio_toggle(PTB,18);
}
void ToggleLedGREEN(void)
{
	gpio_toggle(PTD,1);
}
void ToggleLedBLUE(void)
{
	gpio_toggle(PTB,19);
}
//=========================================================
