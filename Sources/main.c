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

void ControleLED(void);

/* Aplicação de Demo KiT de Automação */
int main(void)
{	
	char c = 0;					
	char texto[10] = "         ";
	
	InicializaCPU();			// Inicializa CPU
	InicializaTimer();			// Inicializa Timer (PIT ~> 1 milissegundos)
	InicializaRele(RELE1);		// Inicializa Rele 1 
	InicializaSaidas(OUT_D0);   // Inicializa Saída D0
	InicializaEntradas(IN_D0);  // Inicializa Entrada D0
	InicializaSerial(115200);   // Inicializa Serial com Baud Rate 115200	
	InicializaAnalogico();		// Inicializa Analogico	
	InicializaLedRED();			//
	InicializaLedGREEN();       //
	InicializaLedBLUE();		//
	AcionaLedRED(LED_OFF);		//
	AcionaLedGREEN(LED_OFF);	//
	AcionaLedBLUE(LED_OFF);		//
	
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
							
		//c = RecebeCh();		// Recebe character 
		//sprintf(texto,"\n\r ");
		//EnviaString(texto);
		//EnviaCh(c);			// Envia character
		
		ControleLED(); 		// executa função que controla LED RGB
	}	
	
	return 0;
}
/*****************************************************************/
// função que controla LED RGB
/*****************************************************************/
void ControleLED(void)
{
	static uint8_t estado = 0;
	static uint64_t temp = 0;
	switch(estado)
	{
		case 0:
			/*gpio_toggle(PTB,18);
			i++;
			if(i>1)
			{
				i = 0;
				estado = 1;
			}*/
			temp = Calcula_Tick(1000);	// solicita tempo de 1000 milissegundos = 1 segundos
			ToggleLedRED();
			estado = 1;
		break;
		case 1:
			/*
			gpio_toggle(PTB,19);
			i++;
			if(i>1)
			{
				i = 0;
				estado = 2;
			}*/
			// Checa se atingiu tempo solicitado 
			if(Check_Tick(temp) == TRUE)
			{
				estado = 2;
				ToggleLedRED();
			}
		break;
		case 2:
			/*gpio_toggle(PTD,1);
			i++;
			if(i>1)
			{
				i = 0;
				estado = 0;
			}*/
			temp = Calcula_Tick(1000);	// solicita tempo de 1000 milissegundos = 1 segundos
			ToggleLedGREEN();
			estado = 3;
		break;
		case 3:
			if(Check_Tick(temp) == TRUE)
			{
				estado = 4;
				ToggleLedGREEN();
			}
		break;
		case 4:
			temp = Calcula_Tick(1000);	// solicita tempo de 1000 milissegundos = 1 segundos
			ToggleLedBLUE();
			estado = 5;
		break;	
		case 5:
			if(Check_Tick(temp) == TRUE)
			{
				estado = 0;
				ToggleLedBLUE();
			}
		break;	
	}
}
/*****************************************************************/
