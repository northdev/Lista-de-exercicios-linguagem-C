/****************************************************************************************
Autor: João Victor Rantin Silvério
Data: 20.05.2025
Objetivo: Fazer um programa que leia 10 números e imprima o maior e o menor número.
****************************************************************************************/
#include <stdio.h>

int main() {
    //Variáveis
    int i;
    int numeros[10];
    int maior;
    int menor;

    //Entrada de Dados
    for(i = 0; i < 10; i++) {
        printf("Digite um numero [%d]: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    //Inicialmente, consideramos o primeiro número como o maior e menor
    maior = numeros[0]; 
    menor = numeros[0]; 

    //Leitura de Dados
    for(i = 0; i < 10; i++) {
        if(numeros[i] > maior) {
            maior = numeros[i]; //Coloca o maior número na variável "maior"
        } else {
            menor = numeros[i]; //Coloca o menor número na variável "menor"
        }
    }

    printf("\nResultados\n"); //Imprime "Resultados" na tela

    //Saída de dados
    printf("O numero %d e o maior.\n", maior);  //Imprime o maior número na tela
    printf("O numero %d e o menor.\n", menor);  //Imprime o menor número na tela

    return 0;
}