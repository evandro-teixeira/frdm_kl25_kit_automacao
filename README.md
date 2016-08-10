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
void InicializaAnalogico(void)
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
#define IN_D0	0 // PTD5
#define IN_D1	1 // PTA13
#define IN_D2	2 // PTC9
#define IN_D3	3 // PTC8
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
/*
Definição dos parâremtro Saída 
*/
#define OUT_D0	0 // PTA5
#define OUT_D1	1 // PTA4
#define OUT_D2	2 // PTA12
#define OUT_D3	3 // PTD4
/*
Parâmetro entrada e saída da função  
Entrada: Saída Digital 
Saída: void
*/
void InicializaSaidas(uint8_t di)
```
Detalhamento da função de acionamento das saídas digitais 
```sh
/*
Parâmetro entrada e saída da função  
Entrada: Saída Digital, estado (0 ou 1)
Saída: void
*/
void SaidasDigitais(uint8_t di, bool st)
```

Acionamento Dos Relés
Função de Inicialização do acionamento dos relés.
```sh
InicializaRele(RELE1);		// Inicializa Rele 1 
```
Função de acionamento dos reles.
```sh
// Aciona o Rele 1
AcionaRele(RELE1,ON);
```
Detalhamento da função de inicialização do acionamento dos relés.
```sh
/*
Definição dos parâremtro do Relés
*/
#define RELE1 0
#define RELE2 1
#define RELE3 2
#define RELE4 3
#define RELE5 4
#define RELE6 5
/*
Parâmetro entrada e saída da função  
Entrada: Relé 
Saída: void
*/
void InicializaRele(uint8_t rl);
```
Detalhamento da função de acionamento dos reles.
```sh
/*
Parâmetro entrada e saída da função  
Entrada: Relé, Estado (0 ou 1) 
Saída: void
*/
void AcionaRele(uint8_t rl, bool st); 
```

