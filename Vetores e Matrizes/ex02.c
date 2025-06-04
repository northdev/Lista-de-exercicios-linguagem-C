/***********************************************************************************************************************
Autor: João Victor Rantin Silvério
Data: 19.05.2025
Objetivo: Fazer um programa que leia dados digitados pelo usuário e mostre seu número elevado ao quadrado equivalente.
***********************************************************************************************************************/
#include <stdio.h>

int main() {
    //Variáveis
    int A[15];
    int B[15];
    int i;

    //Entrada de Dados
    for(i = 0; i < 15; i++) {
        printf("Digite o valor que deseja [%d]: ", i + 1);
        scanf("%d", &A[i]);
    }

    //Cálculo
    for(i = 0; i < 15; i++) {
        B[i]=A[i] * A[i];       //Cálculo
    }

    printf("\nResultados\n");   //Exibe "Resultado" no CMD

    //Saída de Dados
    for(i = 0; i < 15; i++) {
        printf("%5d -> %5d\n", A[i], B[i]);   //Imprime o resultado na tela 
    }

    return 0; 
}