/*******************************************************************************************************
Autor: João Victor Rantin Silvério
Data: 19.05.2025
Objetivo: Fazer um programa que leia 10 números da escolha do usuário e imprimi-los de traz pra frente.
*******************************************************************************************************/
#include <stdio.h>

int main() {
    //Variáveis
    int i;
    int vetor[10];

    //Entrada de Dados
    printf("Digite 10 numeros:\n");
    for(i = 0; i < 10; i++) {
        printf("Digite o numero desejado [%d]: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("\nResultados\n");   //Exibe "resultados" no CMD

    //Saída de Dados
    for(i = 9; i >= 0; i--) {
        printf("\nNumeros %d", vetor[i]);
    }

    return 0;
}