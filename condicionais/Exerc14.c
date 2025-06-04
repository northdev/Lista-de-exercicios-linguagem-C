/*******************************************************************************************************
Autor: João Victor Rantin Silvério
Data: 26.03.2025
Obejtivo: 
*******************************************************************************************************/
#include <stdio.h>

int main() {

    //Declaração de Variáveis
    int     num_carros_vendidos;  
    float   valor_total_vendas; 
    float   salario_fixo;             
    float   comissao_carros_vendidos; 
    float   comissao;
    float   salario_mensal;
    float   percentual;

    //Leitura de Dados
    printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=Dados=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("\nDigite o numero de carros vendidos.....................: ");
    scanf("%d", &num_carros_vendidos);
    printf("Digite o valor total das vendas........................: R$ ");
    scanf("%f", &valor_total_vendas);
    printf("Digite o salario fixo do vendedor......................: R$ ");
    scanf("%f", &salario_fixo);
    printf("Digite o valor da comissao por cada carro vendido......: R$ ");
    scanf("%f", &comissao_carros_vendidos);

    //Cálculos
    comissao = num_carros_vendidos * comissao_carros_vendidos;
    percentual = valor_total_vendas * 0.05;
    salario_mensal = salario_fixo + comissao + percentual;

    //Saída
    printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=Resultados=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("\nValor da comissao do vendedor.........................: %.2f", comissao);
    printf("\n5%% do total de vendas feitas por ele...................: %.2f", percentual);
    printf("\nSalario mensal do vendedor.............................: %.2f", salario_mensal);

    return 0;
}