/*
 * adc.h
 *
 *  Created on: Aug 5, 2016
 *      Author: PDI
 */

#ifndef ADC_H_
#define ADC_H_

#include "externs.h"

void InicializaADC(void);
void LeADC(unsigned int ch);
int adc_cal(void);

#endif /* ADC_H_ */
