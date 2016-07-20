/*****************************************************************
 * 
 * Projeto: Biblioteca FRDM-KL25 para KiT de Automa��o 
 * Autor: Evandro Teixeira
 * Informa��o: http://www.embarcados.com.br/kit-de-automacao/
 *  
 *****************************************************************/
#include "derivative.h" /* include peripheral declarations */
#include "externs.h"    /* Inclui os arquivos da biblioteca kit de Automa��o */

/* Aplica��o de Demo */
int main(void)
{
	InicializaRele(RELE1);		// Inicializa Rele 1 
	InicializaSaidas(OUT_D0);   // Inicializa Sa�da D0
	InicializaEntradas(IN_D0);  // Inicializa Entrada D0
	for(;;) 
	{	   	   
		AcionaRele(RELE1,OFF);
		
		if(EntradasDigitais(IN_D0)==TRUE)
		{
			SaidasDigitais(OUT_D0,ON);
		}
		else
		{
			SaidasDigitais(OUT_D0,OFF);
		}
	}	
	//return 0;
}
/*****************************************************************/
