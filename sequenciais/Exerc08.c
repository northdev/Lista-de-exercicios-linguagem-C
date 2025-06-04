/***********************************************************************************************************************************
Autor....: João Victor Rantin Silvério
Data.....: 03.04.2025
Objetivo.: Ler quatro notas, calcular a média e informar se o aluno foi aprovado (média ≥ 7) ou reprovado (média < 7).
***********************************************************************************************************************************/
#include <stdio.h>

int main() {

    //Declaração de Variáveis
    int     nota1;
    int     nota2;
    int     nota3;
    int     nota4;
    int     media;

    //Entrada de Dados
    printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=Dados=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("Digite a nota do primeiro bimestre(de 0 a 100): ");
    scanf("%d", &nota1);
    printf("Digite a nota do segundo bimestre(de 0 a 100): ");
    scanf("%d", &nota2);
    printf("Digite a nota do terceiro bimestre(de 0 a 100): ");
    scanf("%d", &nota3);
    printf("Digite a nota do quarto bimestre(de 0 a 100): ");
    scanf("%d", &nota4);

    //Cálculo
    media = (nota1 + nota2 + nota3 + nota4) / 4;

    //Saída de Dados
    printf("\n=-=-=-=-=-=Resultado=-=-=-=-=-=\n");
    printf("Nota do aluno: %d", media);

    if (media >= 70) {
        printf("\nSituacao: Aprovado!\n");
    } else {
        printf("\nSituacao: Reprovado!\n");
    }

    return 0;
}