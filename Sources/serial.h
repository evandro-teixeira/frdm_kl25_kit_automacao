/*
 * serial.h
 *
 *  Created on: Aug 5, 2016
 *      Author: PDI
 */

#ifndef SERIAL_H_
#define SERIAL_H_

#include "externs.h"

void InicializaSerial(uint32_t baud_rate);
void EnviaCh(char ch);
char RecebeCh(void);
void EnviaString(char* msg);

#endif /* SERIAL_H_ */
