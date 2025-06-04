/***********************************************************************************************************************************
Autor....: João Victor Rantin Silvério
Data.....: 04.04.2025
Objetivo.: Identificar e exibir o menor e o maior número entre três valores fornecidos pelo usuário.
***********************************************************************************************************************************/
#include <stdio.h>

int main() {

    //Declaração de Variáveis
    int     a;
    int     b;
    int     c;
    int     menor;
    int     maior;

    //Entrada de Dados
    printf("\n=-=-=-=-=-=-=Dados=-=-=-=-=-=-=\n");
    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    printf("Digite o segundo numero: ");
    scanf("%d", &b);
    printf("Digite o terceiro numero: ");
    scanf("%d", &c);

    //Atribuição de Valores as Variáveis
    maior = a;
    menor = a;

    if (b < menor) {
        menor = b;
    }

    if (c < menor) {
        menor = c;
    }
    
    if (b > maior) {
        maior = b;
    }
    
    if (c > maior) {
        maior = c;
    } 

    //Saída de Dados
    printf("\n=-=-=-=-=-=-=Resultado=-=-=-=-=-=-=\n");
    printf("Maior numero: %d\n", maior);
    printf("Menor numero: %d\n", menor);

    return 0;
}