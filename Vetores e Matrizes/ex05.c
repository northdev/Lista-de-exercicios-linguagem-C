/*************************************************************************************************************************************************************
Autor: João Victor Rantin Silvério
Data: 20.05.2025
Objetivo: Fazer um programa que leia 10 números e calcule a média deles, depois mostre quais números são maiores que a média e somando os maiores números.
*************************************************************************************************************************************************************/
#include <stdio.h>

int main() {
    //Variáveis
    int i;
    int valores[10];
    int somaTotal = 0;
    int media = 0;
    int somaMaior = 0;

    //Entrada de Dados
    for(i = 0; i < 10; i++) {
        printf("Digite um valor desejado: ");
        scanf("%d", &valores[i]);
    }

    //Leitura de Dados
    for(i = 0; i < 10; i++) {
        somaTotal = somaTotal + valores[i]; //Cálculo para somar o valor total 
    }

    //Leitura de Dados
    media = somaTotal / 10; //Cálculo da média

    //Leitura de Dados
    for(i = 0; i < 10; i++) {
        if(valores[i] > media) {
            somaMaior = somaMaior + valores[i]; //Cálculo para somar os valores maiores que a média
        }
    }

    //Saída de Dados
    printf("Valor da media: %d\n", media); //Imprime o valor da média
    printf("Valor da soma dos valores maiores: %d\n", somaMaior); //imprime o valor da soma dos números maiores que a média

    return 0; 
}