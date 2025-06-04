/***********************************************************************************************************************************
Autor: João Victor Rantin Silvério
Data: 02.04.2025
Objetivo: Fazer um programa que calcule a mensalidade de um associado de um clube, aplicando descontos baseados no sexo e idade.
***********************************************************************************************************************************/

#include <stdio.h>

int main() {
    //Declaração de Variáveis
    char    nome[40];
    int     idade;
    char    sexo; 
    float   mensalidade;
    float   desconto;
    float   result_mensalidade;

    //Leitura de Dados
    printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=Dados-==-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("Digite seu nome............................................: ");
    fflush(stdin);
    fgets(nome, 40, stdin);
    printf("Digite sua idade...........................................: ");
    scanf("%d", &idade);
    printf("Digite seu sexo(Utilize 'f' para feminino e 'm' para masculino): ");
    scanf(" %c", &sexo);
    printf("Digite a mensalidade.......................................: R$ ");
    scanf("%f", &mensalidade);

    if (sexo == 'f' && idade <=30) {
        desconto = 0.2;
    } else if (sexo == 'f' && idade >= 31 && idade <= 40) {
        desconto = 0.3;
    } else if (sexo == 'f' && idade >= 41) {
        desconto = 0.35;
    } else if (sexo == 'm' && idade > 25) {
        desconto = 0.25;
    } else {
        desconto = 0;
    }

    //Cálculos
    result_mensalidade = mensalidade - (mensalidade * desconto);

    //Saída de Dados
    printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=Resultados=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("Nome.......................................................: %s", nome);
    printf("Idade......................................................: %d\n", idade);
    printf("Sexo.......................................................: %c\n", sexo);
    printf("Mensalidade................................................: R$ %.2f\n", result_mensalidade);

    return 0;
}