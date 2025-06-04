/*************************************************************************************************************************************
Autor: João Victor Rantin Silvério
Data: 25.03.2025
Obejtivo: Fazer um programa que leia horas trabalhadas, valor da hora e numero de filhos de um funcionario e calcule o salario bruto
**************************************************************************************************************************************/
#include <stdio.h>

int main() {

    //Declaração de Variáveis
    float   salario_bruto;
    int     horas_tabalhadas;
    float   valor_hora;
    int     filhos;

    //Leitura de Dados
    printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=Dados=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("\nDigite quantas horas o funcionario trabalhou (mensalmente)...: ");
    scanf("%d", &horas_tabalhadas);
    printf("Digite o valor da hora do funcionario........................: R$ ");
    scanf("%f", &valor_hora);
    printf("Digite o numero de filhos do funcionario (abaixo de 14 anos).: ");
    scanf("%d", &filhos);

    //Cálculo
    salario_bruto = (horas_tabalhadas * valor_hora) + (filhos * 13.48);
    
    //Saída
    printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=Resultado=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("\nO salario bruto do funcionario e.............................: R$ %.2f", salario_bruto);

    return 0;
}