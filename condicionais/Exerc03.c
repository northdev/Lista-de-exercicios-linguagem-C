/******************************************************************************

Autor: João Victor Rantin Silvério
Data: 19.03.2025
Objetivo: Calcular o rendimento do carro de taxi e o lucro do taxista.

*******************************************************************************/
#include <stdio.h>

int main()
{
   float    od_inicial;
   float    od_final;
   float    km_percorridos;
   float    consumo_medio;
   float    combustivel_gasto;
   int      corridas;
   float    taxi;
   float    valor_recebido_clientes;
   float    combustivel_gasto_reais;
   float    lucro_dia;
   
   consumo_medio = 10;
   taxi = 6;
   
   printf("Digite a marcação inicial do Odometro: ");
   scanf("%f", &od_inicial);
   
   printf("Digite a marcação final do Odometro: ");
   scanf("%f", &od_final);
   
   km_percorridos = od_final - od_inicial;
   
   printf("Km percorridos: %.1f\n", km_percorridos);
   
   combustivel_gasto = km_percorridos / consumo_medio;
   
   printf("Combustível gasto (Litros): %.2f\n", combustivel_gasto);
   printf("Consumo Médio de Combustível: %.2f Km/L\n", consumo_medio);
   
   combustivel_gasto_reais = combustivel_gasto * 5.24;
   
   printf("Valor do Combustível gasto (R$): R$ %.2f\n", combustivel_gasto_reais);
   printf("Total de corridas hoje: ");
   scanf("%d", &corridas);
   valor_recebido_clientes = taxi * corridas;
   
   printf("Valor recebido dos clientes: %.2f\n", valor_recebido_clientes);
   
   lucro_dia = valor_recebido_clientes - combustivel_gasto_reais;
   
   printf("Lucro do dia: R$ %.2f\n", lucro_dia);

    return 0;
}