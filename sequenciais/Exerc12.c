/***********************************************************************************************************************************
Autor....: João Victor Rantin Silvério
Data.....: 04.04.2025
Objetivo.: Ler três números inteiros e identificar qual é o menor valor entre eles.
***********************************************************************************************************************************/
#include <stdio.h>

int main() {

    //Declaração de Variáveis
    int     numero1;
    int     numero2;
    int     numero3;

    //Entrada de Dados
    printf("\n=-=-=-=-=-=-=-=Dados=-=-=-=-=-=-=-=\n");
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero1);
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero2);
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero3);

    //saída de Dados
    printf("\n=-=-=-=-=-=-=-=Resultados=-=-=-=-=-=-=-=\n");
    if ((numero1 < numero2) && (numero1 < numero3)) {
        printf("O numero %d e menor.\n", numero1);
    } else if ((numero2 < numero1) && (numero2 < numero3)) {
        printf("O numero %d e menor.\n", numero2);
    } else if ((numero3 < numero1) && (numero3 < numero2)) {
        printf("O numero %d e o menor.\n", numero3);
    } else {
        printf("Todos os numeros sao iguais.\n");
    }


    return 0;
}