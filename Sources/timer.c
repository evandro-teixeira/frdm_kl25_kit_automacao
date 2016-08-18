/*
 * timer.c
 *
 *  Created on: Aug 18, 2016
 *      Author: PDI
 */
#include "timer.h"

static uint64_t Tick = 0;

void InicializaTimer(void)
{
	
	//PIT initialization 
	SIM_SCGC6 |= SIM_SCGC6_PIT_MASK;		// Turn on clock to to the PIT module
	PIT_LDVAL0 = (1048000/100);     		// Timeout period = 1 ms
	PIT_MCR = PIT_MCR_FRZ_MASK;     		// Enable clock for PIT, freeze PIT in debug mode
	PIT_TCTRL0 = PIT_TCTRL_TIE_MASK | 		// Enable PIT interrupt
				 PIT_TCTRL_TEN_MASK;     	// and PIT 
		
	//Enable PIT interrupt on NVIC	 
	NVIC_ICPR |= 1 << ((INT_PIT - 16) % 32);
	NVIC_ISER |= 1 << ((INT_PIT - 16) % 32);	
}

void PIT_IRQHandler()
{
	PIT_TFLG0 |= PIT_TFLG_TIF_MASK;		// Clear the PIT interrupt flag	
   	// Toggle Green LED
   	//GPIOB_PTOR = (1 << 19);   	
   	Tick++;
   	
   	//ToggleLedBLUE();
}

bool Check_Tick(uint64_t n_Tick)
{
	if(Tick >= n_Tick)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

uint64_t Calcula_Tick(uint64_t n_Tick)
{
	return (Tick + n_Tick); 
}

