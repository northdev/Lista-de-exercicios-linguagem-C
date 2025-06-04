/***********************************************************************************************************************************
Autor....: João Victor Rantin Silvério
Data.....: 03.04.2025
Objetivo.: Ler um número inteiro positivo e informar se ele é par ou ímpar, e se é múltiplo de 3, 5 e/ou 7.
***********************************************************************************************************************************/
#include <stdio.h>

int main() {

    //Declaração de Variáveis
    int numero;

    //Entrada de Dados
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);
    
    //Saída de Dados
    if (numero < 0) {
        printf("Numero invalido. Digite outro numero!\n");
    } else {

        //Verifica se o número é par.
        if (numero % 2 == 0) { 
            printf("\n=-=-=-=-=-=-=Resultados=-=-=-=-=-=-=\n");
            printf("O numero %d e par.\n", numero);
        } else {
            printf("O numero %d e impar.\n", numero);
        }

        //Verifica se o número é multiplo de 3.
        if (numero % 3 == 0) {
            printf ("O numero %d e multiplo de 3.\n", numero);
        } else {
            printf("O numero %d nao e multiplo de 3.\n", numero);
        }

        //Verifica se o número é multiplo de 5.
        if (numero % 5 == 0) {
            printf("O numero %d e multiplo de 5.\n", numero);
        } else {
            printf("O numero %d nao e multiplo de 5.\n", numero);
        }

        //Verifica se o número é multiplo de 7.
        if (numero % 7 == 0) {
            printf("O numero %d e multiplo de 7.\n", numero);
        } else {
            printf("O numero %d nao e multiplo de 7.\n", numero);
        }
    }


    return 0;
}