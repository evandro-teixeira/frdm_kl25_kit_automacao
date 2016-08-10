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
