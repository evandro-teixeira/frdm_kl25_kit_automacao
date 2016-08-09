/*
 * analogico.c
 *
 *  Created on: Aug 9, 2016
 *      Author: PDI
 */
#include "analogico.h"
/********************************************************************/
//
/********************************************************************/
void InicialidaAnalogico(void)
{
	InicializaADC();
}
/********************************************************************/
//
/********************************************************************/
uint16_t LeAnalogicoA0(void)
{
	return (uint16_t)LeADC(A0);
}
/********************************************************************/
//
/********************************************************************/
uint16_t LeAnalogicoA1(void)
{
	return (uint16_t)LeADC(A1);
}
/********************************************************************/
//
/********************************************************************/
uint16_t LeAnalogicoA2(void)
{
	return (uint16_t)LeADC(A2);
}
/********************************************************************/
