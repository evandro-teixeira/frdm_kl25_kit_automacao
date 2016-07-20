/*
 * entradas.h
 *
 *  Created on: Jul 20, 2016
 *      Author: PDI
 */

#ifndef ENTRADAS_H_
#define ENTRADAS_H_

#include "externs.h"

#define IN_D0	0
#define IN_D1	1
#define IN_D2	2
#define IN_D3	3

void InicializaEntradas(uint8_t di);
bool EntradasDigitais(uint8_t in);

#endif /* ENTRADAS_H_ */
