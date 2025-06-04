/******************************************************************************

Autor: João Victor Rantin Silvério
Data: 18.05.2025 
Objetivo: Fazer um programa que mostre informações de um funcionário

*******************************************************************************/
#include <stdio.h>

int main()
{
    char    nome[50];
    int     idade;
    char    cargo[30];
    float   salario_bruto;
    float   reajuste;
    float   salario_reajuste;
    float   gratificacao;
    float   desconto;
    float   salario_liquido;
    float   soma;
    
    printf("\tDigite o nome do funcionario: ");
    fflush(stdin);
    fgets(nome, 50, stdin);
    
    printf("\tDigite o cargo/função do funcionario: ");
    fflush(stdin);
    fgets(cargo, 30, stdin); 
    
    printf("\tDigite a idade do funcionario: ");
    scanf("%d", &idade);
    
    printf("\tDigite o salário bruto do funcionario: R$");
    scanf("%f", &salario_bruto);
    
    printf("\t\n--------------Resultado--------------\n");
    printf("\tNome do funcionario: %s", nome);
    printf("\tIdade do funcionario: %d\n", idade);
    printf("\tCargo do funcionario: %s", cargo);
    printf("\tSalário bruto anterior: %.2f\n", salario_bruto);
    
    reajuste = salario_bruto * 0.38;
    salario_reajuste = reajuste + salario_bruto;
    
    printf("\tSalario bruto reajustado: R$ %.2f\n", salario_reajuste);
    
    gratificacao = salario_reajuste * 0.2;
    
    printf("\tValor gratificação: R$ %.2f\n", gratificacao);
    
    desconto = salario_reajuste * 0.15;
    
    printf("\tImposto de Renda: R$ %.2f\n", desconto);
    
    salario_liquido = salario_reajuste + gratificacao - desconto;
    
    printf("\tSalário liquido: R$ %.2f\n", salario_liquido);

    return 0;
}
