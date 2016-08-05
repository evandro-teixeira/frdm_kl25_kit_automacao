/*
 * serial.c
 *
 *  Created on: Aug 5, 2016
 *      Author: PDI
 */
#include "serial.h"
//=========================================================
//
//
//=========================================================
void InicializaSerial(uint32_t baud_rate)
{
	/* Habilita uart0 - pinos PTA1-RX, PTA2-TX */
	uart_init(UART0_BASE_PTR,(21000000/1000),baud_rate);
}
//=========================================================
//
//
//=========================================================
void EnviaCh(char ch)
{
	/* enviar uart0 */
	uart_putchar(UART0_BASE_PTR,ch) ;
}
//=========================================================
//
//
//=========================================================
char RecebeCh(void)
{
	/* uart0 */
	return uart_getchar(UART0_BASE_PTR);
}
//=========================================================
//
//
//=========================================================
void EnviaString(char* msg)
{
	/* envia string uart0  */
	while(*msg)
	{
		uart_putchar(UART0_BASE_PTR,*msg) ;
		msg++;
	}
}
//=========================================================
