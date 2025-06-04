/******************************************************************************

Autor: João Victor Rantin Silvério
Data: 19.03.2025
Objetivo: Escrever um programa, que leia o número de empregados da loja,
o valor do salário-mínimo, o preço de custo de cada bicicleta,
o número de bicicletas vendidas, o salário final dos empregrados e o lucro.

*******************************************************************************/
#include <stdio.h>

int main () {
    
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
    
    printf("\n\t=--=--=--=--=--=-- Informações =--=--=--=--=--=--\n");
    printf("\tnumero de empregados..................: ");
    scanf("%d", &empregados);
    
    printf("\tDigite o salário-mínimo...............: ");
    scanf("%f", &salario_minimo);
    
    printf("\tDigite o preço de custo...............: ");
    scanf("%f", &preco_custo);
    
    printf("\tDigite o número de bicicletas vendidas: ");
    scanf("%d", &bicicletas_vendidas);
    
    preco_venda = preco_custo * 1.5;
    
    salario_fixo = salario_minimo * 2;
    custo_salario_total = empregados * salario_fixo;
    
    comissao_total = (preco_custo * 0.15) * bicicletas_vendidas;
    comissao_por_empregado = comissao_total / empregados;
    
    salario_final = salario_fixo + comissao_por_empregado;
    
    receita_total = preco_venda * bicicletas_vendidas;
    
    lucro = receita_total - (custo_salario_total + comissao_total);
    
    printf("\n\t=--=--=--=--=--=-- Resultado =--=--=--=--=--=--\n");
    printf("\tNúmero de empregados..................: %d\n", empregados);
    printf("\tPreço do salário-mínimo...............: %.2f\n", salario_minimo);
    printf("\tPreço de custo de cada bicicleta......: %.2f\n", preco_custo);
    printf("\tNúmero de bicicletas vendidas.........: %d\n", bicicletas_vendidas);
    printf("\tSalário final de cada empregado.......: %.2f\n", salario_final);
    printf("\tLucro líquido da loja.................: %.2f\n", lucro);
    
    return 0;
}