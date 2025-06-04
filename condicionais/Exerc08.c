/**********************************************************************************************************
Autor: João Victor Rantin silvério
Data: 24.03.2025
Objetivo: Fazer um programa que leia a idade em anos, meses e dias e mostre a idade da pessoa em dias.
**********************************************************************************************************/
#include <stdio.h>

int main() {
    
    //Declaração das Variaveis
    int idade_anos;
    int idade_meses;
    int idade_dias;
    int total_dias;

    //Leitura de Dados
    printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=Dados=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("Digite sua idade em anos......................: ");
    scanf("%d", &idade_anos);
    printf("Informe quantos meses alem dos anos completos.: ");
    scanf("%d", &idade_meses);
    printf("Informe quantos dias alem dos meses completos.: ");
    scanf("%d", &idade_dias);

    //Cálculo
    total_dias = (idade_anos * 365) + (idade_meses * 30) + idade_dias;

    //Saída
    printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=Resultados=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("\nSua idade em dias e igual a ..................: %d", total_dias);

    return 0;
}