/*
 * init_cpu.c
 *
 *  Created on: Aug 5, 2016
 *      Author: PDI
 */

#include "init_cpu.h"

void InicializaCPU(void)
{
   /* Enable all of the port clocks. These have to be enabled to configure
	* pin muxing options, so most code will need all of these on anyway.
	*/
	SIM_SCGC5 	|= (SIM_SCGC5_PORTA_MASK
				| SIM_SCGC5_PORTB_MASK
				| SIM_SCGC5_PORTC_MASK
				| SIM_SCGC5_PORTD_MASK
				| SIM_SCGC5_PORTE_MASK );
	
   /* Ramp up the system clock */
   /* Set the system dividers */
   /* NOTE: The PLL init will not configure the system clock dividers,
	* so they must be configured appropriately before calling the PLL
	* init function to ensure that clocks remain in valid ranges.
	*/  
	//SIM_CLKDIV1 = ( 0 | SIM_CLKDIV1_OUTDIV1(0) | SIM_CLKDIV1_OUTDIV4(1) );
	
	SIM_CLKDIV1 = ( 0 | SIM_CLKDIV1_OUTDIV1(1) | SIM_CLKDIV1_OUTDIV4(0) );
	
	// If PLL initialization is not desired, set FLL to 48 MHz clock in default FEI mode
	//MCG_C4 |= (MCG_C4_DRST_DRS(1) | MCG_C4_DMX32_MASK);	
	//SIM_SOPT2 &= ~SIM_SOPT2_PLLFLLSEL_MASK; // clear PLLFLLSEL to select the FLL for this clock source
}
