/********************************************************************************************
Autor.....: João Victor Rantin Silvério
Data......: 30.05.2025
Objetivo..: Fazer um programa que leia um valor inteiro e positivo e retorne o seu fatorial.
*******************************************************************************************/
//Bibliotecas
#include <stdio.h>
#include <windows.h>
//Função para calcular o fatorial de um número
int fatorial(int valor) {
    //Declaração de Variáveis
    int i;  //Variável de controle
    int fatorial = 1;   //Variável de fatorial

    //Cálculo
    for (i = 1; i <= valor; i++) {
        fatorial = fatorial * i;
    }

    //Retorna o resultado
    return fatorial;
}
//Programa principal
int main() {
    //Declaração de Variáveis
    int valor;  //Variável que armazena o valor informado pelo usuário
    int result; //Variável que armazena o resultado

    //Entrada de Dados
    system("cls");  //Limpa a tela do CMD
    printf("Digite um valor inteiro e positivo: ");
    scanf("%d", &valor);

    //Chamada da função
    result = fatorial(valor);

    //Verifica se o número é positivo 
    if (valor < 0) {
        printf("Fatorial nao definido para numeros negativos!\n");
    } else {
        printf("%d! = %d", valor, result);
    }

    return 0;
}