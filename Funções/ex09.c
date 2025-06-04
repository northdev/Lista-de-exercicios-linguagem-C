/***************************************************************************************************************************************
Autor: João Victor Rantin Sivério 
Data: 01.06.2025
Objetivo: Fazer um programa que leia um vetor de 30 elementos e retorne em outros dois vetores os números pares e os números ímpares.
****************************************************************************************************************************************/
//Bibliotecas
#include <stdio.h>
#include <windows.h>

// Função para separar os elementos pares e ímpares
void separaParesImpares(int val[], int par[], int *tamP, int impar[], int *tamI) {
    //Declaração de Variáveis
    int i;

    //Atribuição de Valores
    *tamP = 0;
    *tamI = 0;

    //Separa os pares dos ímpares
    for (i = 0; i < 30; i++) {
        if (val[i] % 2 == 0) {
            par[*tamP] = val[i];
            (*tamP)++;
        } else {
            impar[*tamI] = val[i];
            (*tamI)++;
        }
    }
}

//Programa Principal
int main() {
    //Declaração de Variáveis
    int i;
    int valores[30]; 
    int par[30];
    int impar[30];
    int tamanhoPar;
    int tamanhoImpar;

    //Entrada de Dados (Vetor X)
    system("cls");
    printf("Digite 30 numeros inteiros:\n");
    for (int i = 0; i < 30; i++) {
        printf("Valor[%d]: ", i);
        scanf("%d", &valores[i]);
    }

    //Chamada da função
    separaParesImpares(valores, par, &tamanhoPar, impar, &tamanhoImpar);

    //Saída de Dados (Pares)
    printf("\nNumeros pares.....:\n");
    for (i = 0; i < tamanhoPar; i++) {
        printf("%d ", par[i]);
    }

    //Saída de Dados (Ímpares)
    printf("\n\nNumeros impares.:\n");
    for (i = 0; i < tamanhoImpar; i++) {
        printf("%d ", impar[i]);
    }

    printf("\n");

    return 0;
}
