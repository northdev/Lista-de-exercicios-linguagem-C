/***************************************************************************************************************
Autor: João Victor Rantin Silvério
Data: 22.05.2025
Objetivo: Fazer um programa que leia uma matriz 2x3, mostre-a na tela e depois gere uma matriz transposta 3x2.
***************************************************************************************************************/
#include <stdio.h>
#include <windows.h>

int main() {
    //Variáveis
    int i;
    int j;
    int matriz[2][3];

    //Entrada de Dados
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 3; j++) {
            printf("Digite um valor para preencher a matriz[%d][%d]: ", i, j);
            scanf("%d", & matriz[i][j]);
        }
    }

    system("cls");

    //Saída de Dados (Matriz)
    printf("Matriz:\n");
    printf("+--------------------+\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 3; j++) {
            printf("| %4d ", matriz[i][j]);
        }
        printf("|\n");
    }
    printf("+--------------------+\n");

    printf("\n");   //Espaço de 1 linha entre as matrizes

    //Saída de Dados (Matriz Transposta)
    printf("Matriz Transposta:\n");
    printf("+-----------+\n");
    for(j = 0; j < 3; j++) {
        for(i = 0; i < 2; i++) {
            printf("|%4d ", matriz[i][j]);
        }
        printf("|\n");  
    }
    printf("+-----------+\n");

    return 0;
}