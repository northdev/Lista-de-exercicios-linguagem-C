/******************************************************************************************************************
Autor: João Victor Rantin silvério
Data: 24.03.2025
Objetivo: Fazer um programa que leia o nome e valor de fabrica de um automovel e mostre o nome e o valor final.
******************************************************************************************************************/

#include <stdio.h>

int main() {
    
    //Declaração de Variáveis
    char    nome[20];
    float   valor_fabrica;
    float   valor_imposto;
    float   valor_lucro;
    float   preco_final;

    //Laitura de Dados
    printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=Dados=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("Digite o nome do veiculo: ");
    fflush(stdin);
    fgets(nome, 20, stdin);
    printf("Digite o valor de fabrica do veiculo: ");
    scanf("%f", &valor_fabrica);
    printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=Resultados=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("Nome do veiculo: %s\n", nome);

    //Cálculos
    valor_imposto = valor_fabrica * 0.45;
    valor_lucro = valor_fabrica * 0.28;
    preco_final = valor_imposto + valor_lucro + valor_fabrica;

    //Saída
    printf("Preço final: %.2f\n", preco_final);

    return 0;
}