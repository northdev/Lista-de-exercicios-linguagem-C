/**********************************************************************************************
Autor: João Victor Rantin silvério
Data: 24.03.2025
Objetivo: Fazer um programa que leia o custo de fabrica e escreva o custo para o consumidor.
**********************************************************************************************/
#include <stdio.h>

int main() {
    
    //Declaração de Variáveis
    float preco_fabrica;
    float imposto;
    float lucro;
    float preco_final;

    //Leitura de Dados
    printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=Dados=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("Digite o preco de custo: ");
    scanf("%f", &preco_fabrica);

    //Cálculos
    imposto = preco_fabrica * 0.45;
    lucro = preco_fabrica * 0.28;
    preco_final = imposto + lucro + preco_fabrica;

    //Saída
    printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=Resultados=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("Custo ao cliente: %.2f", preco_final);

    return 0;
}