/*******************************************************************************************************
Autor: João Victor Rantin Silvério
Data: 26.03.2025
Obejtivo: 
*******************************************************************************************************/
#include <stdio.h>

int main() {

    //Declaração de Variáveis
    int     numero_funcionario;
    float   salario_inicial;
    int     indice_produtividade;
    float   novo_salario;
    float   aumento;
    float   percentual_produtividade;

    //Leitura de Dados
    printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=Dados=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("Digite o numero do funcionario........: +55 (44) ");
    scanf("%d", &numero_funcionario);
    printf("Digite o salario atual do funcionario.: ");
    scanf("%f", &salario_inicial);
    printf("Digite o percentual de produtividade..: ");
    scanf("%d", &indice_produtividade);

    //Cálculos
    aumento = (salario_inicial * 8) / 100; 
    percentual_produtividade = (salario_inicial * indice_produtividade) / 100 + aumento;
    novo_salario = salario_inicial + percentual_produtividade;
    
    //Saída
    printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=Resultados=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("Numero do funcionario.................: +55 (44) %d\n", numero_funcionario);
    printf("Valor do aumento do funcionario.......: %.2f\n", percentual_produtividade);
    printf("Salario do funcionario com aumento....: %.2f\n", novo_salario);

    return 0;
}