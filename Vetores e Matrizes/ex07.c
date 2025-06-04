/*************************************************************************************
Autor: João Victor Rantin Silvério
Data: 21.05.2025
Objetivo: Fazer um programa que leia 8 números e depois imprima-os na ordem inversa.
**************************************************************************************/
#include <stdio.h>

int main() {
    //Variáveis
    int i;
    int vetor[8];

    //Entrada de Dados
    for(i = 0; i < 8; i++) {
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
    }

    //Saída de Dados
    for(i = 7; i >= 0; i--) {
        printf("%d\n", vetor[i]);
    }

    return 0;
}