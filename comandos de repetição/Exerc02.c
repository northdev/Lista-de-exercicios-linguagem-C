/*****************************************************************************************
Autor: João Victor Rantin Silvério 
Data: 03.05.2025
Objetivo: Fazer um programa que leia um número qualquer e mostre sua respectiva tabuada.
******************************************************************************************/

#include <stdio.h>

int main() {
    //Variáveis
    int     i;
    int     numero;
    int     resultado;

    //Entrada de Dados
    printf("Digite um numero: ");
    scanf("%d", &numero);

    for (i = 1; i <= 10; i++) {
        resultado = i * numero;
        printf("%d x %d = %d.\n", numero, i, resultado);
    }

    return 0;
}