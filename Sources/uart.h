/*
 * uart.h
 *
 *  Created on: Jul 20, 2016
 *      Author: PDI
 */

#ifndef UART_H_
#define UART_H_

#include "externs.h"    /* Inclui os arquivos da biblioteca kit de Automação */
#include "derivative.h" /* include peripheral declarations */
#include <MKL25Z4.h>
#include <stdio.h>

#define POLLING_MODE 	1  
#define UART_MODE 		POLLING_MODE  
#define UART_BAUD       115200
#define CORE_CLK_KHZ    48000

void uart_init (UART_MemMapPtr uartch, int sysclk, int baud);
void uart_putchar (UART_MemMapPtr channel, char ch);
char uart_getchar (UART_MemMapPtr channel); 

#endif /* UART_H_ */
