/******************************************************************************
Autor: João Victor Rantin Silvério
Data: 03.05.2025
Objetivo: Fazer um programa que mostre o quadrado dos números de 15 a 200.
******************************************************************************/
#include <stdio.h>

int main() {
    //Variáveis
    int     i;
    int     resultado;

    //Saída de Dados
    for (i = 15; i <= 200; i++) {
        resultado = i * i;
        printf("%d elevado ao quadrado eh: %d.\n", i, resultado);
    }

    return 0;
}