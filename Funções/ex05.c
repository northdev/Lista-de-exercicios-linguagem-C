/*****************************************************************************************
Autor.....: João Victor Rantin Silvério
Data......: 30.05.2025
Objetivo..: Fazer um programa que calcule o peso ideal masculino e o peso ideal feminino.
*****************************************************************************************/
//Bibliotecas
#include <stdio.h>
#include <windows.h>
//Função que calcula o peso ideal masculino
float pesoHomem(float altura) {
    return (72.7 * altura) - 58;
}
//Função que calcula o peso ideal feminino
float pesoMulher(float altura) {
    return (62.1 * altura) - 44.7;
}
//Programa principal
int main() {
    //Declaração de Variáveis
    char    sexo;
    float   altura;
    float   pesoIdeal;
    //Entrada de Dados (Sexo)
    system("cls");
    printf("M- Masculino\n");
    printf("F- Feminino\n");
    printf("\n\n");
    printf("Digite seu sexo..............: ");
    scanf("%c", &sexo);
    //Entrada de Dados (Altura)
    printf("Digite sua altura(em metros).: ");
    scanf("%f", &altura);
    //Saída de Dados
    switch(sexo) {
        case 'M':
        case 'm':
            pesoIdeal = pesoHomem(altura);
            printf("O peso ideal e.......: Kg %.1f\n", pesoIdeal);
            break;

        case 'F':
        case 'f':
            pesoIdeal = pesoMulher(altura);
            printf("O peso ideal e........: Kg %.1f\n", pesoIdeal);
            break;

        default:
            break;
    }

    return 0;
}