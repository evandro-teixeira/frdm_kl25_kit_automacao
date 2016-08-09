/*
 * adc.h
 *
 *  Created on: Aug 5, 2016
 *      Author: PDI
 */

#ifndef ADC_H_
#define ADC_H_

#include "externs.h"

#define ADC_CHANNEL 8 // Channel 8 (PTB0)

void InicializaADC(void);
//void LeADC(unsigned int ch);
unsigned int LeADC(unsigned int ch);
int adc_cal(void);

#endif /* ADC_H_ */
