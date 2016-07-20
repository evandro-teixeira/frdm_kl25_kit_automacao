/*
 * reles.h
 *
 *  Created on: Jul 20, 2016
 *      Author: Evandro
 */

#ifndef RELES_H_
#define RELES_H_

#include "externs.h"

#define RELE1 0
#define RELE2 1
#define RELE3 2
#define RELE4 3
#define RELE5 4
#define RELE6 5
#define ON	  1
#define OFF   0

void InicializaRele(uint8_t rl);
void AcionaRele(uint8_t rl, bool st);

#endif /* RELES_H_ */
