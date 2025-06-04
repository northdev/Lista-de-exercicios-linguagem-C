/**********************************************************************************************
Autor....: João Victor Rantin Silvério
Data.....: 04.04.2025
Objetivo.: Ler a hora inicial e final de um jogo (em horas inteiras) e calcular sua duração, 
considerando que o jogo pode terminar no dia seguinte e que a duração máxima é de 24 horas.
**********************************************************************************************/
#include <stdio.h>

int main() {

    //Declaração de Variáveis
    int     hora_inicial;
    int     hora_final;
    int     duracao;

    //Entrada de Dados
    printf("\n=-=-=-=-=-=-=-=-=-=-=Dados=-=-=-=-=-=-=-=-=-=-=\n");
    printf("Digite o horario que o jogo comecou: ");
    scanf("%d", &hora_inicial);
    printf("Digite o horario que o jogo acabou: ");
    scanf("%d", &hora_final);

    if (hora_final > hora_inicial) {
        duracao = hora_final - hora_inicial;
    } else {
        duracao = (24 - hora_inicial) + hora_final;
    }

    //saída de Dados
    printf("\n=-=-=-=-=-=-=-=-=-=-=Resultado=-=-=-=-=-=-=-=-=-=-=\n");
    printf("A duracao do jogo foi de %d horas\n", duracao);

    return 0;
}