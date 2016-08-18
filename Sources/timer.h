/*
 * timer.h
 *
 *  Created on: Aug 18, 2016
 *      Author: PDI
 */

#ifndef TIMER_H_
#define TIMER_H_

#include "externs.h"

void InicializaTimer(void);
void PIT_IRQHandler();

bool Check_Tick(uint64_t n_Tick);
uint64_t Calcula_Tick(uint64_t n_Tick);

#endif /* TIMER_H_ */
