/***********************************************************************************************************************************
Autor: João Victor Rantin Silvério
Data: 21.05.2025
Objetivo: Fazer um programa que leia a nota de 10 alunos e mostre quantos alunos estão com nota acima, na média e abaixo da média.
***********************************************************************************************************************************/
#include <stdio.h>

int main() {
    //Variáveis
    int i;
    int notas[10];
    int acima = 0;
    int media = 0;
    int abaixo = 0;

    //Entrada de Dados
    printf("Digite as notas dos alunos: \n");
    for(i = 0; i < 10; i++) {
        printf("Nota %d: ", i + 1);
        scanf("%d", &notas[i]);
    }

    //Leitura de Dados
    for(i = 0; i < 10; i++) {
        if (notas[i] >= 70) { 
            acima++;    //Adiciona 1 para cada nota acima da média
        } 

        if ((notas[i] >= 60 && notas[i] < 70)) { 
            media++;    //Adiciona 1 para cada nota na média
        }

        if (notas[i] < 60) { 
            abaixo++;   //Adiciona 1 para cada nota abaixo da média
        }
    }

    //Saída de Dados
    printf("\nNotas\n");

    //Para mostrar quantas e quais notas estão acima da média
    if(acima == 1) {        //Imprime no singular caso tenha 1 nota acima da média
        printf("%d nota esta acima da media\n", acima);
        for(i = 0; i < 10; i++) {
            if(notas[i] >= 70) {
                printf("Nota que esta acima: %d\n", notas[i]);
            }
        }
    } else {                //Imprime no plural caso tenha mais de 1 nota acima da média
        printf("%d notas estao acima da media\n", acima);
        for(i = 0; i < 10; i++) {
            if(notas[i] >= 70) {
                printf("Nota que esta acima da media: %d\n", notas[i]);
            }
        }
    }

    printf("\n");   //Deixa 1 linha de espaço

    //Para mostrar quantas e quais notas está na média
    if(media == 1) {        //Imprime no singular caso tenha 1 nota na média
        printf("%d nota esta media\n", media);
        for(i = 0; i < 10; i++) {
            if((notas[i] >= 60 && notas[i] < 70)) {
                printf("Nota que esta na media: %d\n", notas[i]);
            }
        }
    } else {                //Imprime no plural caso tenha mais de 1 nota na média
        printf("%d notas estao media\n", media);
        for(i = 0; i < 10; i++) {
            if((notas[i] >= 60 && notas[i] < 70)) {
                printf("Nota que esta na media: %d\n", notas[i]);
            }
        }
    }

    printf("\n");   //Deixa 1 linha de espaço

    //Para mostrar quantas e quais estão abaixo da média
    if(abaixo == 1) {       //Imprime no singular caso tenha 1 nota abaixo da média
        printf("%d nota esta abaixo da media\n", abaixo);
        for(i = 0; i < 10; i++) {
            if(notas[i] < 60) {
                printf("Nota que esta abaixo da media: %d\n", notas[i]);
            }
        }
    } else {               //Imprime no plural caso tenha mais de 1 nota abaixo da média
        printf("%d notas esta abaixo da media\n", abaixo);
        for(i = 0; i < 10; i++) {
            if(notas[i] < 60) {
                printf("Nota que esta abaixo da media: %d\n", notas[i]);
            }
        }
    }

    return 0;
}