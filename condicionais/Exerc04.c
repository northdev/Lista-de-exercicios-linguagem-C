/******************************************************************************

Autor: João Victor Rantin Silvério
Data: 19.03.2025
Objetivo: Fazer um programa que mostre Nome, Horas Trabalhadas, Salário Bruto
Numero de dependentes, Descontos e Salário líquido.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char    nome [50];
    float   horas_trabalhadas;
    int     dependentes;
    float   salario;
    float   ir;
    float   inss;
    float   adicional_dependentes;
    
    ir = 5;
    inss = 8.5;
    
    printf("\n");
    printf("\t|Nome do Funcionário..................: ");
    fgets(nome, 50, stdin);
    
    printf("\t|Horas Trabalhadas....................: "); 
    scanf("%f", &horas_trabalhadas);
    
    printf("\t|Salário do funcionário...............: R$ ");
    scanf("%f", &salario);
    
    printf("\t|Numero de dependentes do funcionário.: ");
    scanf("%d", &dependentes);
    printf("\n\t------------------Resultado------------------\n\n");
    
    adicional_dependentes = dependentes * 40;
    salario += adicional_dependentes;
    
    printf("\t|Salário Bruto........................: %.2f\n", salario);
    
    inss = (salario * 8.5 / 100);
    
    printf("\t|Desconto do INSS.....................: %.2f\n", inss);
    
    ir = (salario * 5 / 100);
    
    printf("\t|Imposto de Renda.....................: %.2f\n", ir);
    
    printf("\t|Salário Líquido......................: %.2f", salario - inss - ir);
    

    return 0;
}
