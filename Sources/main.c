/*****************************************************************
 * 
 * Projeto: Biblioteca FRDM-KL25 para KiT de Automação 
 * Autor: Evandro Teixeira
 * Informação: http://www.embarcados.com.br/kit-de-automacao/
 * GitHub: https://github.com/evandro-teixeira/frdm_kl25_kit_automacao 
 *  
 *****************************************************************/
#include "derivative.h" 	/* include peripheral declarations */
#include "externs.h"   		/* Inclui os arquivos da biblioteca kit de Automação */


/* Aplicação de Demo KiT de Automação */
int main(void)
{	
	char c = 0;					
	char texto[10] = "         ";
	
	InicializaCPU();			// Inicializa CPU
	InicializaRele(RELE1);		// Inicializa Rele 1 
	InicializaSaidas(OUT_D0);   // Inicializa Saída D0
	InicializaEntradas(IN_D0);  // Inicializa Entrada D0
	InicializaSerial(115200);   // Inicializa Serial com Baud Rate 115200	
	InicialidaAnalogico();		// Inicializa Analogico  
			
	EnviaString("\n\rTeste Serial FRDM-KL25\n\r"); // Escreve String 
	
	for(;;) 
	{		
		// Le entrada analogica A0
		sprintf(texto,"\n\r A0: %d ",LeAnalogicoA0());		
		EnviaString(texto);
		
		// Le entrada analogica A1
		sprintf(texto,"\n\r A1: %d ",LeAnalogicoA1());		
		EnviaString(texto);
		
		// Le entrada analogica A2
		sprintf(texto,"\n\r A2: %d ",LeAnalogicoA2());		
		EnviaString(texto);
		
		// Aciona o Rele 1
		AcionaRele(RELE1,ON);
		
		// Le entrada D0
		if(EntradasDigitais(IN_D0) == TRUE)
		{
			// Aciona saida digital D0
			SaidasDigitais(OUT_D0,ON);
		}
		else
		{
			// Aciona saida digital D1
			SaidasDigitais(OUT_D0,OFF);
		}
				
		c = RecebeCh();		// Recebe character 
		EnviaCh(c);			// Envia character
	}	
	
	return 0;
}
/*****************************************************************/
