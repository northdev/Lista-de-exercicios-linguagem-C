/***********************************************************************************************************************************
Autor....: João Victor Rantin Silvério
Data.....: 03.04.2025
Objetivo.: Ler um número inteiro e informar se ele é par ou ímpar.
***********************************************************************************************************************************/
#include <stdio.h>

int main() {
    //Declaração de Variáveis
    int     numero;

    //Entrada de Dados
    printf("\n=-=-=-=-=-=Dados=-=-=-=-=-=\n");
    printf("Digite um numero: ");
    scanf("%d", &numero);

    //Saida de Dados
    printf("\n=-=-=-=-=-=Resultados=-=-=-=-=-=\n");
    if (numero % 2 == 0) {
        printf("O numero %d e par.\n", numero);
    } else {
        printf("O numero %d e impar.\n", numero);
    }

    return 0;
}