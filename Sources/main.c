/*****************************************************************
 * 
 * Projeto: Biblioteca FRDM-KL25 para KiT de Automação 
 * Autor: Evandro Teixeira
 * Informação: http://www.embarcados.com.br/kit-de-automacao/
 *  
 *****************************************************************/
#include "derivative.h" /* include peripheral declarations */
#include "externs.h"    /* Inclui os arquivos da biblioteca kit de Automação */

/* Aplicação de Demo */
int main(void)
{
	InicializaRele(RELE1);		// Inicializa Rele 1 
	InicializaSaidas(OUT_D0);   // Inicializa Saída D0
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
