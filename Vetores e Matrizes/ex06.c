/*************************************************************************************
Autor: João Victor Rantin Silvério
Data: 21.05.2025
Objetivo: Fazer um programa que converta 25 temperaturas de celcius para fahrenheit.
*************************************************************************************/
#include <stdio.h>

int main() {
    //Variáveis
    int     i;
    float   c[25];
    float   f[25];

    //Entrada de Dados
    for(i = 0; i < 25; i++) {
        printf("Digite a temperatura: ");
        scanf("%f", &c[i]);
    }

    //Saída de Dados
    printf("Celsius -> Fahrenheit\n");
    for(i = 0; i < 25; i++) {
        f[i] = (c[i] * 9/5) + 32;   //Cálculo
        printf("%7.1f -> %7.1f\n", c[i], f[i]); //Imprime o Resultado na tela
    }

    return 0;
}