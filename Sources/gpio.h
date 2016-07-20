/*
 * gpio.h
 *
 *  Created on: Jul 20, 2016
 *      Author: Evandro
 */

#ifndef GPIO_H_
#define GPIO_H_

#include "types.h"
#include "externs.h"
#include "derivative.h" 
#include <MKL25Z4.h>    /* I/O map for MKL25Z128VLK4 */

#define PTA 	0
#define PTB 	1
#define PTC 	2
#define PTD 	3
#define PTE 	4
#define OUTPUT 	1
#define INPUT 	0
#define HIGH 	1
#define LOW 	0

void gpio_direction(uint8_t port, uint8_t pin, uint8_t mode);

void gpio_set(uint8_t port, uint8_t pin, uint8_t value);

void gpio_toggle(uint8_t port, uint8_t pin);

uint16_t gpio_read(uint8_t port, uint8_t pin);

#endif /* GPIO_H_ */
