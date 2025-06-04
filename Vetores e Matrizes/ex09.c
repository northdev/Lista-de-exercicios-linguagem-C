/**********************************************************************************************************************************************************************
Autor: João Victor Rantin Silvério
Data: 21.05.2025
Objetivo: Fazer um programa que leia valores que o usuário digitar e guarde em uma matriz, depois mostre a diagonal principal e secundaria e suas respectivas somas.
**********************************************************************************************************************************************************************/
#include <stdio.h>

int main() {
    //Variáveis
    int l;
    int c;
    int matriz[4][4];
    int somaPrincipal = 0;
    int somaSecundaria = 0;
    
    //Entrada de Dados
    for(l = 0; l < 4; l++) {
        for(c = 0; c < 4; c++) {
            printf("Digite um valor para preencher a matriz[%d][%d]: ", l, c);
            scanf("%d", &matriz[l][c]);
        }
    }

    //Saída de Dados (Matriz)
    printf("\nMatriz\n");
    printf("+---------------------------+\n");
    for(l = 0; l < 4; l++) {
        for(c = 0; c < 4; c++) {
            printf("| %4d ", matriz[l][c]);
        }
        printf("|\n");
    }
    printf("+---------------------------+\n");

    //Saída de Dados (Diagonal Principal)
    printf("\nDiagonal Principal: \n");
    for(l = 0; l < 4; l++) {
        printf("%d\n", matriz[l][l]);
    }

    //Saída de Dados (Diagonal Secundaria)
    c = 3;
    printf("\nDiagonal Secundaria: \n");
    for(l = 0; l < 4; l++) {
        printf("%d\n", matriz[c][l]);
        c--;
    }

    //Cálculos
    for(l = 0; l < 4; l++) {
        somaPrincipal += matriz[l][l];      
        somaSecundaria += matriz[l][3 - l];
    }

    //Saída de Dados (Soma)
    printf("\n");
    printf("Soma da diagona principal: %d\n", somaPrincipal);
    printf("Soma da diagonal secundaria: %d\n", somaSecundaria);

    return 0;
}