/******************************************************************************************************
Autor: João Victor Rantin Silvério
Data: 19.05.2025
Objetivo: Fazer um programa que leia 20 números e imprima a média dos números positivos ou negativos.
******************************************************************************************************/
#include <stdio.h>

int main() {
    //Variáveis
    int i;
    int positivos = 0;
    int negativos = 0;
    float numeros[10];
    float somaPositivos = 0;
    float somaNegativos = 0;
    float mediaPositivos = 0;
    float mediaNegativos = 0;

    //Entrada de Dados
    for(i = 0; i < 10; i++) {
        printf("Digite um numero [%d]: ", i + 1); 
        scanf("%f", &numeros[i]);
    }

    //Leitura de Dados
    for(i = 0; i < 10; i++) {
        if (numeros[i] > 0) {
            somaPositivos = somaPositivos + numeros[i]; //Soma dos números positivos
            positivos++;                                //Variável de controle para os números positivos
        } else {
            somaNegativos = somaNegativos + numeros[i]; //Soma dos números negativos
            negativos++;                                //Variável de controle para os números negativos
        }
    }

    printf("\nResultados\n");   //Exibe "Resultados" no CMD

    //Saída de dados
    if (positivos > 0) {
        mediaPositivos = somaPositivos / positivos;             //Cálculo da média dos numeros positivos
        printf("Media dos positivos: %.1f\n", mediaPositivos);  //Imprime a média dos números positivos  
    } else {
        printf("Nao tem nenhum numero positivo!\n");            //Se não tiver números positivos, imprime essa mensagem no CMD
    }

    if (negativos > 0) {
        mediaNegativos = somaNegativos / negativos;             //Cálculo da média dos numeros negativos
        printf("Media dos negativos: %.1f\n", mediaNegativos);  //Cálculo da média dos numeros negativos
    } else {
        printf("Nao tem nenhum numero negativo!\n");            //Se não tiver números negativos, imprime essa mensagem no CMD
    }

    return 0;
}