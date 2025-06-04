/**********************************************************************************************************************************************************
Autor....: João Victor Rantin Silvério
Data.....: 04.04.2025
Objetivo.: Ler o nome e três notas de um aluno, calcular a média ponderada com pesos 2, 3 e 5, e exibir o conceito (A, B, C ou D) correspondente à média.
***********************************************************************************************************************************************************/
#include <stdio.h>

int main() {

    //Declaração de Variáveis 
    char    nome_aluno[50];
    float   nota1;
    float   nota2;
    float   nota3;
    float   media;

    //Entrada de Dados
    printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=Dados=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("Digite o nome do aluno: ");
    fflush(stdin);
    fgets(nome_aluno, 50, stdin);
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    //Cálculo
    media = ((nota1 * 2) + (nota2 * 3) + (nota3 * 5)) / 10;

    //Saída de Dados
    printf("\n=-=-=-=-=-=-=-=Resultados=-=-=-=-=-=-=-=\n");
    printf("Media: %.1f\n", media);

    if ((media >= 0) && (media <= 4)) {
        printf("Conceito: D");
    } else if ((media > 4) && (media <= 6)) {
        printf("Conceito: C");
    } else if ((media > 6) && (media <= 8)) {
        printf("Conceito: B");
    } else if ((media > 8) && (media <= 10)) {
        printf("Conceito: A");
    } else {
        printf("Erro! Tente novamente!");
    }

    return 0;
}