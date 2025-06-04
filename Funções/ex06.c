/****************************************************************************************************
Autor.....: João Victor Rantin Silvério
Data......: 31.05.2025
Objetivo..: Fazer um programa que leia um número e retorne a quantidade de divisores que o número tem.
*****************************************************************************************************/
//Bibliotecas
#include <stdio.h>
#include <windows.h>
//Função para somar a quantidade de divisores de um número
int divisores(int num) {
    //Declaração de Variáveis
    int i;  //Variável de controle
    int cont = 0;   //Variável para armazenar a quantidade de números divisores

    //Cálculo
    for(i = 1; i <= num; i++) {
        if(num % i == 0) {
            cont++;     //Caso seja verdadeira, adiciona +1 no contador
        }
    }

    return cont;    //Retorna o valor de cont
}
//Programa principal
int main() {
    //Declaração de Variáveis
    int valor;  //Variável que armazena o valor informado pelo usuário
    int contador;   //Variável para guardar o valor da função

    //Entrada de Dados
    system("cls");  //Limpa a tela do prompt de comando
    printf("Digite um numero: ");
    scanf("%d", &valor);    //Lê o valor informado pelo usuário

    //Chamada da Função
    contador = divisores(valor);

    //Saída de Dados
    printf("O numero %d tem %d divisores.\n", valor, contador);

    return 0;
}