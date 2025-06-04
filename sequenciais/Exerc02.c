/****************************************************************************************************************************************************
Autor....: João Victor Rantin Silvério
Data.....: 04.04.2025
Objetivo.: O programa calcula o salário líquido de um funcionário considerando os descontos do INSS e do IR com base em valores e taxas fornecidos.
*****************************************************************************************************************************************************/
#include <stdio.h>

int main() {

    //Declaração de Variáveis
    float   salario_bruto;
    float   premio;
    float   base_inss;
    float   base_ir;
    float   taxa_inss;
    float   taxa_ir;
    float   rendimento;
    float   desconto_inss;
    float   desconto_ir;
    float   salario_liquido;
    float   valor_com_inss;

    //Entrada de Dados
    printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=Dados=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("Digite o salario bruto: R$ ");
    scanf("%f", &salario_bruto);
    printf("Digite o valor do premio: R$ ");
    scanf("%f", &premio);
    printf("Digite a base do INSS: R$ ");
    scanf("%f", &base_inss);
    printf("Digite a base do Imposto de Renda: R$ ");
    scanf("%f", &base_ir);
    printf("Digite a taxa do INSS: ");
    scanf("%f", &taxa_inss);
    printf("Digite a taxa do Imposto de Renda: ");
    scanf("%f", &taxa_ir);

    rendimento = salario_bruto + premio;

    if (rendimento > base_inss) {
        desconto_inss = rendimento * (taxa_inss / 100);
    } else {
        desconto_inss = 0;
    }

    valor_com_inss = rendimento - desconto_inss;

    if (valor_com_inss > base_ir) {
        desconto_ir = valor_com_inss * (taxa_ir / 100);
    } else {
        desconto_ir = 0;
    }

    salario_liquido = rendimento - desconto_inss - desconto_ir;

    //Saída de Dados
    printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=Resultados=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("Salario bruto: R$%.2f\n", salario_bruto);
    printf("Premio: R$ %.2f\n", premio);
    printf("Rendimento: R$ %.2f\n", rendimento);
    printf("Desconto INSS: R$ %.2f\n", desconto_inss);
    printf("Desconto Imposto de Renda: R$ %.2f\n", desconto_ir);
    printf("Salario Liquido: R$ %.2f\n", salario_liquido);

    return 0;
}