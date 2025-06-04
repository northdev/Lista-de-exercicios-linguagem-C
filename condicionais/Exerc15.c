/******************************************************************************

Autor: João Victor Rantin Silvério
Data: 27.03.2025
Objetivo: Escrever um programa que leia o número de empregados da loja,
o valor do salário-mínimo, o preço de custo de cada bicicleta,
o número de bicicletas vendidas, o salário final dos empregrados e o lucro.

*******************************************************************************/
#include <stdio.h>

int main () {
    
    //Declaração de Variáveis
    int     empregados;
    int     bicicletas_vendidas;
    float   salario_minimo;
    float   preco_custo;
    float   preco_venda;
    float   salario_fixo;
    float   comissao_total;
    float   comissao_por_empregado;
    float   custo_salario_total;
    float   receita_total;
    float   lucro;
    float   salario_final;
    
    //Leitura de Dados
    printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=Dados=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("numero de empregados..................: ");
    scanf("%d", &empregados);  
    printf("Digite o salario-minimo...............: ");
    scanf("%f", &salario_minimo);
    printf("Digite o preco de custo das bicicletas: ");
    scanf("%f", &preco_custo);
    printf("Digite o numero de bicicletas vendidas: ");
    scanf("%d", &bicicletas_vendidas);
    
    //Cálculos
    preco_venda = preco_custo * 1.5;
    salario_fixo = salario_minimo * 2;
    custo_salario_total = empregados * salario_fixo;
    comissao_total = (preco_custo * 0.15) * bicicletas_vendidas;
    comissao_por_empregado = comissao_total / empregados;
    salario_final = salario_fixo + comissao_por_empregado;
    receita_total = preco_venda * bicicletas_vendidas;
    lucro = receita_total - (custo_salario_total + comissao_total);
    
    //Saída
    printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=Resultados=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("Numero de empregados..................: %d\n", empregados);
    printf("Preco do salario-minimo...............: %.2f\n", salario_minimo);
    printf("Preco de custo de cada bicicleta......: %.2f\n", preco_custo);
    printf("Numero de bicicletas vendidas.........: %d\n", bicicletas_vendidas);
    printf("Salario final de cada empregado.......: %.2f\n", salario_final);
    printf("Lucro liquido da loja.................: %.2f\n", lucro);
    
    return 0;
}