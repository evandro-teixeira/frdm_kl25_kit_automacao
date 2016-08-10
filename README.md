#KiT de Automação Open Hardware do [Embarcados](http://www.embarcados.com.br) - Biblioteca para FRDM-KL25Z

Esse biblioteca trata-se de projeto criado no CodeWarrior para a ferramenta de [FRDM-KL25Z](http://www.nxp.com/products/software-and-tools/hardware-development-tools/freedom-development-boards/freedom-development-platform-for-kinetis-kl14-kl15-kl24-kl25-mcus:FRDM-KL25Z) para ser utilizada em conjunto com o [KiT de Automação](http://www.embarcados.com.br/kit-de-automacao/).
As funções aqui desenvolvidas podem ser empregadas em projetos no Kinetis Design Studio.
Foram desenvolvidas funções leituras das entradas analógicas e digitais, saídas digitais, acionamento dos relés e da comunicação serial (UART). 
A biblioteca desenvolvida aqui está sob a licença [Creative Commons Attribution-ShareAlike 4.0 International License](https://creativecommons.org/licenses/by-sa/4.0/).

#Bibliotecas 

#Entradas Analógicas 
Função de inicialização do periférico analógico. 
```sh
InicialidaAnalogico();		// Inicializa Periférico  Analógico 
```
Função de leitura do canal analógico. 
O Kit de Automação possui 03 analógicas. 
```sh
adc_A0 = (unsigned int)LeAnalogicoA0()); // Le entrada analógica A0
adc_A1 = (unsigned int)LeAnalogicoA0()); // Le entrada analógica A1
adc_A2 = (unsigned int)LeAnalogicoA0()); // Le entrada analógica A2
```

Detalhamento da função de inicialização do periférico analógico: 
```sh
/*
Parâmetro entrada e saída da função  
Entrada: void
Saída: void
*/
void InicialidaAnalogico(void)
```
Detalhamento da função de leitura do canal analógico: 
```sh
/*
Parâmetro entrada e saída da função  
Entrada: void
Saída: resultado da leitura do canal ADC em 16 Bit (0~65535)
*/
/*
Leitura entrada Analógica canal A0 - PTB0 ~ ADC8
*/
uint16_t LeAnalogicoA0(void)
/*
Leitura entrada Analógica canal A1 - PTB1 ~ ADC9
*/
uint16_t LeAnalogicoA1(void)
/*
Leitura entrada Analógica canal A2 - PTB3 ~ ADC12
*/
uint16_t LeAnalogicoA2(void)
```

#Entradas Digitais 
Função de Inicialização entradas digitais 
```sh
InicializaEntradas(IN_D0);  // Inicializa Entrada D0 
```
Função de leitura Entradas Digitais
```sh
// Le entrada D0
if(EntradasDigitais(IN_D0) == TRUE)
{
...
}
```
Detalhamento da função de inicialização do periférico Entrada Digital.
```sh
#include "entradas.h"
/*
Definição dos parâremtro entrada 
*/
#define IN_D0	0
#define IN_D1	1
#define IN_D2	2
#define IN_D3	3
/*
Parâmetro entrada e saída da função  
Entrada: Entrada Digital 
Saída: void
*/
void InicializaEntradas(uint8_t di)
```
Detalhamento da função de leitura da Entrada Digital.
```sh
/*
Parâmetro entrada e saída da função  
Entrada: Entrada Digital 
Saída: TRUE ou FALSE
*/
bool EntradasDigitais(uint8_t in)
```

#Saídas Digitais 
Função de Inicialização Saídas digitais
```sh
InicializaSaidas(OUT_D0);   // Inicializa Saída D0
```
Função de acionamento das saídas digitais 
```sh
// Aciona saída digital D0
SaidasDigitais(OUT_D0,ON); 
```
Detalhamento da função de inicialização do periférico Saídas Digital.
```sh
void InicializaSaidas(uint8_t di)
{
	switch(di)
	{
		case OUT_D0:
			gpio_direction(PTA,5,OUTPUT,NO_PULL_RESISTOR);
		break;
		case OUT_D1:
			gpio_direction(PTA,4,OUTPUT,NO_PULL_RESISTOR);			
		break;
		case OUT_D2:
			gpio_direction(PTA,12,OUTPUT,NO_PULL_RESISTOR);
		break;
		case OUT_D3:
			gpio_direction(PTD,4,OUTPUT,NO_PULL_RESISTOR);
		break;
	}
}
```
Detalhamento da função de acionamento das saídas digitais 
```sh
void SaidasDigitais(uint8_t di, bool st)
{
	switch(di)
	{
		case OUT_D0:
			if(st==ON)
			{
				gpio_set(PTA,5,ON);
			}
			else
			{
				gpio_set(PTA,5,OFF);
			}
		break;	
		case OUT_D1:
			if(st==ON)
			{
				gpio_set(PTA,4,ON);
			}
			else
			{
				gpio_set(PTA,4,OFF);
			}
		break;	
		case OUT_D2:
			if(st==ON)
			{
				gpio_set(PTA,12,ON);
			}
			else
			{
				gpio_set(PTA,12,OFF);
			}
		break;	
		case OUT_D3:
			if(st==ON)
			{
				gpio_set(PTA,4,ON);
			}
			else
			{
				gpio_set(PTA,4,OFF);
			}
		break;	
	}
}
```
