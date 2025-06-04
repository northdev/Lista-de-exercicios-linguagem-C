/******************************************************************************

Autor: João Victor Rantin Silvério
Data: 18.03.2025
Objetivo: Fazer uma tabela onde mostra os gastos de combustível em Reais, calcule
também qual a média de consumo que o carro teve durante a viagem.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float combustivel_gasto;
    float km_percorrido;
    float gasto_total_real;
    float consumo_medio;
    
    printf("\n");
    printf("\t|Digite os litros de combustivel gasto:");
    scanf("%f", &combustivel_gasto);
    printf("\t|Digite quantos Km percorreste:");
    scanf("%f", &km_percorrido);
    printf("\n\t-------------Resultados-------------\n");
    printf("\t|Litros de combustivel gasto: %.2f L\n", combustivel_gasto);
    printf("\t|Km percorrido: %.2f Km\n", km_percorrido);

    gasto_total_real = combustivel_gasto * 5.24;
    printf("\t|Gasto total com combustivel(R$): R$ %.2f\n", gasto_total_real);

    consumo_medio = km_percorrido / combustivel_gasto;
    printf("\t|Consumo medio(km/l): %.2f km/l", consumo_medio);

    return 0;
}