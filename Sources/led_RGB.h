/*
 * led_RGB.h
 *
 *  Created on: Aug 18, 2016
 *      Author: PDI
 */

#ifndef LED_RGB_H_
#define LED_RGB_H_

#include "externs.h"

#define LED_ON	2
#define LED_OFF	1

void InicializaLedRED(void);
void InicializaLedGREEN(void);
void InicializaLedBLUE(void);

void AcionaLedRED(bool i);
void AcionaLedGREEN(bool i);
void AcionaLedBLUE(bool i);

void ToggleLedRED(void);
void ToggleLedGREEN(void);
void ToggleLedBLUE(void);

#endif /* LED_RGB_H_ */
