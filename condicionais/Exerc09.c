/*********************************************************************************************************************************************
Autor: João Victor Rantin Silvério
Data: 25.03.2025
Obejtivo: Fazer um programa que leia o preço de um produto em real e a taxa de conversão do dolar e mostre o preço do produto em dolar.
**********************************************************************************************************************************************/
#include <stdio.h>

int main() {
    
    //Declaração de Variáveis
    float real;
    float dolar;
    float conversao;

    //Leitura de Dados
    printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=Dados=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("Digite o preco do produto em real (R$).: ");
    scanf("%f", &real);
    printf("Digite a taxa de conversao do dolar($).: ");
    scanf("%f", &dolar);

    //Cálculo
    conversao = real / dolar;

    //Saída
    printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=Resultados=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("\nO preco do produto em dolar seria......: %.2f", conversao);

    return 0;
}