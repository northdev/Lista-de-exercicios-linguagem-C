/*********************************************************************************************
Autor.....: João Victor Rantin Silvério
Data......: 01.06.2025
Objetivo..: Fazer um programa que leia se um número e retorna se ele é perfeito ou não perfeito.
**********************************************************************************************/
#include <stdio.h>
#include <windows.h>
//Função para veirficao se o número é perfeito
int perfeicao(int num) {
    //Declarção de Variáveis
    int soma = 0;   //Variável que armazena a soma
    int i;  //Variável de Controle

    //Percorre de 1 até n-1
    for (i = 0; i < num; i++) {
        if(num % i == 0) {  //Verifica se 'i' é divisor de 'num' 
            soma = soma + i;
        }
    }

    if(soma == num) {
        return 1;   //Retorna 1 se for perfeito
    } else {
        return 0;   //Retorna 0 se não for perfeito
    }

}

//Programa principal
int main() {
    //Declaração de Variáveis
    int numero;

    //Entrada de Dados
    system("cls");
    printf("Digite um numero: ");
    scanf("%d", &numero);   //Lê o valor informado pelo usuário

    //Saída de Dados
    if(perfeicao(numero)) {
        printf("O numero %d eh perfeito.\n", numero);   //Se for perfeito
    } else {
        printf("O numero %d nao eh perfeito.\n", numero);   //Se não for perfeito
    }

    return 0;
}