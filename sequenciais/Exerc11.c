/********************************************************************************************
Autor....: João Victor Rantin Silvério
Data.....: 04.04.2025
Objetivo.: Ler o nome de um funcionário, as horas trabalhadas e o salário por hora, 
e calcular o salário final, aplicando 50% a mais para as horas extras acima de 40 horas.
********************************************************************************************/
#include <stdio.h>

int main() {

    //Declaração de Variáveis
    char    nome[50];
    int     total_horas_trabalhadas;
    float   valor_hora;
    int     horas_extras;
    float   salario_final;

    //Entrada de Dados
    printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=Dados=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("Digite o nome do funcionario: ");
    fflush(stdin);
    fgets(nome, 50, stdin);
    printf("Digite o valor da hora do funcionario: ");
    scanf("%f", &valor_hora);
    printf("Digite o total de horas trabalhadas(Semana): ");
    scanf("%d", &total_horas_trabalhadas);

    if (total_horas_trabalhadas > 40) {
        horas_extras = total_horas_trabalhadas - 40;
        salario_final = (40 * valor_hora) + (horas_extras * valor_hora * 1.5);
    } else {
        salario_final = total_horas_trabalhadas * valor_hora;
    }

    //Saída de Dados
    printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=Resultado=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("Salario Final do funcionario: R$ %.2f\n", salario_final);

    return 0;
}