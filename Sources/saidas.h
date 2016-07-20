/*
 * saidas.h
 *
 *  Created on: Jul 20, 2016
 *      Author: PDI
 */

#ifndef SAIDAS_H_
#define SAIDAS_H_

#include "externs.h"

#define OUT_D0	0
#define OUT_D1	1
#define OUT_D2	2
#define OUT_D3	3

void InicializaSaidas(uint8_t di);
void SaidasDigitais(uint8_t di, bool st);

#endif /* SAIDAS_H_ */
