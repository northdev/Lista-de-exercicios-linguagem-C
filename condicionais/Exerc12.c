/*******************************************************************************************************
Autor: João Victor Rantin Silvério
Data: 26.03.2025
Obejtivo: Fazer um programa que leia informações do vendedor e escreva o salario final, nome e numero.
*******************************************************************************************************/
#include <stdio.h>

int main() {

    //Declaração de Variáveis
    int     numero;
    char    nome[40];
    float   salario_fixo;
    int     vendas;
    int     percentual_vendas;
    float   salario_total;
    float   comissao;

    //Leitura de Dados
    printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=Dados=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("Digite o numero de telefone do vendedor.........: +55 (44) ");
    scanf("%d", &numero);
    printf("Digite o nome do vendedor.......................: ");
    fflush(stdin);
    fgets(nome, 40, stdin);
    printf("Digite o salario do vendedor....................: R$ ");
    scanf("%f", &salario_fixo);
    printf("Total de vendas efetuadas.......................: ");
    scanf("%d", &vendas);
    printf("Digite o percentual da comissão sobre as vendas: ");
    scanf("%d", &percentual_vendas);

    //Saída
    printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=Resultados=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("\nnumero do vendedor..............................: %d", numero);
    printf("\nNome do vendedor................................: %s", nome);
    comissao = (vendas * percentual_vendas) / 100;  //Cálculo
    salario_total = salario_fixo + comissao;        //Cálculo
    printf("Salario total do vendedor.......................: R$ %.2f", salario_total);

    return 0;
}