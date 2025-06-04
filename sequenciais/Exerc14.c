/*******************************************************************************************************************************
Autor....: João Victor Rantin Silvério
Data.....: 04.04.2025
Objetivo.: Ler a quantidade de horas extras e horas faltadas de um funcionário, calcular H = horas extras - horas faltadas, 
e determinar o valor da gratificação de Natal com base em uma tabela de faixas de H.
********************************************************************************************************************************/
#include <stdio.h>

int main() {

    //Declaração de Variáveis
    int     horas_extras;
    int     horas_faltas;
    int     H;

    //Entrada de Dados
    printf("\n=-=-=-=-=-=-=-=Dados=-=-=-=-=-=-=-=\n");
    printf("Digite a qunatidade de horas extras: ");
    scanf("%d", &horas_extras);
    printf("Digite a quantidade de horas faltadas: ");
    scanf("%d", &horas_faltas);

    //Cálculo
    H = horas_extras - horas_faltas;

    //Saída de Dados
    printf("\n=-=-=-=-=-=-=-=Resultados=-=-=-=-=-=-=-=\n");
    printf("Numero de horas extras: %d\n", H);

    if (H < 10) {
        printf("O funcionario ganhou R$ 20,00.");
    } else if ((H > 10) && (H <= 20)) {
        printf("O funcionario ganhou R$ 40,00.");
    } else if ((H > 20) && (H <= 30)) {
        printf("O funcionario ganhou R$ 60,00.");
    } else if ((H > 30) & (H <= 40)) {
        printf("O funcionario ganhou R$ 80,00.");
    } else if ((H > 40) && (H <= 100)) {
        printf("O funcionario ganhou R$ 100,00.");
    } else {
        printf("Erro! Tente novamente!");
    }


    return 0;
}