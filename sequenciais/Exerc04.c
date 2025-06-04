/****************************************************************************************************************************************************************
Autor....: João Victor Rantin Silvério
Data.....: 04.04.2025
Objetivo.: O objetivo do programa é calcular a média das notas pares entre três valores dados, desconsiderando as ímpares, e informar se nenhuma nota for par.
******************************************************************************************************************************************************************/
#include <stdio.h>

int main() {

    //Declaração de Variáveis
    int     nota1;
    int     nota2;
    int     nota3;
    float   media;
    int     soma = 0;
    int     contador = 0;

    //Entrada de Dados
    printf("\n=-=-=-=-=-=-=Dados=-=-=-=-=-=-=\n");
    printf("Digite a primeira nota: ");
    scanf("%d", &nota1);
    printf("Digite a segunda nota.: ");
    scanf("%d", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%d", &nota3);

    if (nota1 % 2 == 0) {
        soma = soma + nota1;
        contador = contador + 1;
    }
    
    if (nota2 % 2 == 0) {
        soma = soma + nota2;
        contador = contador + 1;
    }
    
    if (nota3 % 2 == 0) {
        soma = soma + nota3;
        contador = contador + 1;
    }

    //Saída de Dados
    if (contador > 0) {
        media = (float)soma / contador;
        printf("\n=-=-=-=-=-=-=Resultado=-=-=-=-=-=-=\n");
        printf("A media e: %.1f\n", media);
    } else {
        printf("NENHUMA NOTA PAR!");
    }

    return 0;
}