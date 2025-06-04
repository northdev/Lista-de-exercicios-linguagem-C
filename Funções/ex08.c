/****************************************************************************************************************************
Autor......: João Victor Rantin Silvério
Data......: 01.06.2025
Objetivo..: Fazer um programa que leia dois vetores de 10 elementos, calcule e retorne o vetor da união dos dois primeiros.
*****************************************************************************************************************************/
//Bibliotecas
#include <stdio.h>
#include <windows.h>
//Função que verifica se o número já existe no vetor
int existenoVetor(int vet[], int tamanho, int valor) {
    //Declaração de Variáveis
    int i;

    //Verifica se o número já existe no vetor
    for(i = 0; i < tamanho; i++) {
        if (vet[i] == valor) {
            return 1;   //Já existe no vetor
        }
    }
    return 0;   //Não existe no vetor
}
//Função que calcula a união dos dois vetores
void calculaUniao(int v1[], int v2[], int uniao[], int *tamanhoUniao) {
    //Declaração de Variáveis
    int i;

    //Declaração de Valores
    *tamanhoUniao = 0;

    //Adiciona todos os elementos de v1 (sem repetição)
    for(i = 0; i < 10; i++) {
        if(!existenoVetor(uniao, *tamanhoUniao, v1[i])) {
            uniao[*tamanhoUniao] = v1[i];
            (*tamanhoUniao)++;
        }
    }

    //Adiciona todos os elementos de v2 que ainda não estão na união
    for(i = 0; i < 10; i++) {
        if(!existenoVetor(uniao, *tamanhoUniao, v2[i])) {
            uniao[*tamanhoUniao] = v2[i];
            (*tamanhoUniao)++;
        }
    }
}
//Programa principal
int main() {
    //Declaração de Variáveis
    int i;
    int primeiroVetor[10];
    int segundoVetor[10];
    int uniao[20];
    int tamanho;

    //Preenche o primeiro vetor
    system("cls");
    for(i = 0; i < 10; i++) {
        printf("Preencha o primeiro vetor.: ");
        scanf("%d", &primeiroVetor[i]);
    }

    //Preenche o segundo vetor
    for(i = 0; i < 10; i++) {
        printf("Preencha o segundo vetor..: ");
        scanf("%d", &segundoVetor[i]);
    }

    //Chamada da Função
    calculaUniao(primeiroVetor, segundoVetor, uniao, &tamanho);

    //Saída de Dados
    printf("Vetor Uniao:\n");
    for(i = 0; i < tamanho; i++) {
        printf("%d ", uniao[i]);
    }

    printf("\n");

    return 0;
}