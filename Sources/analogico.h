/*
 * analogico.h
 *
 *  Created on: Aug 9, 2016
 *      Author: PDI
 */

#ifndef ANALOGICO_H_
#define ANALOGICO_H_

#include "externs.h"

#define A0 8
#define A1 9
#define A2 12

void InicializaAnalogico(void);
uint16_t LeAnalogicoA0(void);
uint16_t LeAnalogicoA1(void);
uint16_t LeAnalogicoA2(void);

#endif /* ANALOGICO_H_ */
