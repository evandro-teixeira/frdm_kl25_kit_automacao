/*
 * main implementation: use this 'C' sample to create your own application
 *
 */
#include "derivative.h" /* include peripheral declarations */
#include "externs.h"


int main(void)
{
	//int counter = 0;
	InicializaRele(RELE1);
	
	for(;;) 
	{	   
	   	//counter++;
		AcionaRele(RELE1,OFF);
	}
	
	return 0;
}
