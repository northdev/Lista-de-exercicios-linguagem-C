/****************************************************************************************************************
Autor....: João Victor Rantin Silvério
Data.....: 02.04.2025
Objetivo.: Fazer um programa que calcule duas variáveis e depois imprima o valor de a e b e o resultado de y
*****************************************************************************************************************/
#include <stdio.h>

int main() {

    //Declaração de Variáveis
    int     a;
    int     b;
    int     y;

    //Leitura de Dados
    printf("\n\n=-=-=-=-=-=Dados=-=-=-=-=-=\n");
    printf("Digite um numero...: ");
    scanf("%d", &a);
    printf("Digite outro numero: ");
    scanf("%d", &b);

    if (a < b) {
        y = b - a;
    } else if (b < a) {
        y = a - b;
    } else if (a == b) {
        y = a + b;
    } 

    //Saída de Dados
    printf("\n=-=-=-=-=-=Resultados=-=-=-=-=-=\n");
    printf("Primeiro Numero(a).: %d\n", a);
    printf("Segundo Numero(b)..: %d\n", b);
    printf("Resultado(y).......: %d\n", y);

    return 0;
}