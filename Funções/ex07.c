/****************************************************************************************
Autor.....: João Victor Rantin Silvério
Data......: 30.05.2025
Objetivo..: Fazer um programa que calcule o somatório de um valor informado pelo usuário.
****************************************************************************************/
//Bibliotecas
#include <stdio.h>
//Função para calcular o somatório de um valor
int somatorio(int v) {
    //Declaração de Variáveis
    int     i;  //Variável de Controle
    int     soma;   //Variável que armazena o resultado

    //Cálculo
    for(i = 0; i <= v; i++) {
        soma = soma + i; 
    }

    return soma;    //Retorna o valor da variável soma
}

int main() {
    //Declaração de Variáveis
    int valor;  //Variável que armazena um valor que o usuário digitar
    int s = 0;  //Armazena a soma da função

    //Entrada de Dados
    printf("Digite um valor inteiro e positivo: ");
    scanf("%d", &valor);    //Lê o valor informado pelo usuário

    //Verificação se o número é positivo
    if(valor < 0) {     //Se for negativo pede para o usuário informar um valor positivo
        printf("Digite um numero positivo!");
    } else {        //Se for positivo, informa o somatório do número
        s = somatorio(valor);
        printf("O somatorio do numero %d e: %d", valor, s); //Imprime o valor do somatório na tela
    }

    return 0;
}