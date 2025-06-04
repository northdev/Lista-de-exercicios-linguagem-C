/************************************************************************
Autor: João Victor Rantin Silvério
Data: 25.03.2025
Obejtivo: Fazer um programa que escreva a média aritimética e harmonica
*************************************************************************/
#include <stdio.h>

int main() {

    //Declaração de Variáveis
    float   numero1;
    float   numero2;
    float   numero3;
    float   media_aritimetica;
    float   media_harmonica;

    //Leitura de Dados
    printf("Digite o primeiro numero: ");
    scanf("%f", &numero1);
    printf("Digite o segundo numero: ");
    scanf("%f", &numero2);
    printf("Digite o terceiro numero: ");
    scanf("%f", &numero3);

    //Cálculo Média Aritimética 
    media_aritimetica = numero1 + numero2 + numero3 / 3;

    //Saída Média Aritimética 
    printf("Media Aritimetica: %.f\n", media_aritimetica);

    //Cálculo Média Harmônica
    media_harmonica = 3 / ((1 / numero1) + (1 / numero2) + (1 / numero3));

    //Saída da Média Harmônica
    printf("Media Harmonica: %.4f\n", media_harmonica);

    return 0;
}