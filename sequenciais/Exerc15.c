/*******************************************************************************************************************
Autor....: João Victor Rantin Silvério
Data.....: 04.04.2025
Objetivo.: Exibir um menu com opções de cálculo de áreas (círculo, retângulo, trapézio ou triângulo), 
ler os dados necessários conforme a opção escolhida, calcular a área correspondente e exibir o resultado formatado.
**********************************************************************************************************************/
#include <stdio.h>

int main() {

    //Declaração de Variáveis
    char    opcao;
    float   raio;
    float   area;
    float   altura;
    float   base;
    float   base_menor;
    float   base_maior;

    //Imprime as Opções.
    printf("\nQue area deseja calcular?\n");
    printf("A- Calculo da area do circulo\n");
    printf("B- Calculo da area do retangulo\n");
    printf("C- Calculo da area do trapezio\n");
    printf("D- Calculo da area do retangulo\n");

    //Entrada de Dados.
    printf("\nDigite sua opcao: ");
    scanf("%c", &opcao);

    if (opcao == 'A') {
        //Entrada de Dados (Opção 1)
        printf("Digite o raio do circulo: ");
        scanf("%f", &raio);
        //Cálculo
        area = 3.14 * (raio * raio);
        //Saída de Dados 
        printf("A area do circulo e %.1f\n", area);
    } else if (opcao == 'B') {
        //Entrada de Dados (Opção 2)
        printf("Digite a altura do retangulo: ");
        scanf("%f", &altura);
        printf("Digite a medida da base: ");
        scanf("%f", &base);
        //Cálculo
        area = base * altura;
        //Saída de Dados
        printf("A area do retangulo e %.1f\n", area);
    } else if (opcao == 'C') {
        //Entrada de Dados (Opção 3)
        printf("Digite a medida da base maior: ");
        scanf("%f", &base_maior);
        printf("Digite a medida da base menor: ");
        scanf("%f", &base_menor);
        printf("Digite a medida da altura: ");
        scanf("%f", &altura);
        //Cálculo
        area = ((base_maior + base_menor) * altura) / 2;
        //Saída de Dados
        printf("A area do trapezio e %.1f\n", area);
    } else if (opcao == 'D') {
        //Entrada de Dados (Opção 4)
        printf("Digite a medida da base: ");
        scanf("%f", &base);
        printf("Digite a medida da altura: ");
        scanf("%f", &altura);
        //Cálculo
        area = (base * altura) / 2;
        //Saída de Dados
        printf("A area do triangulo e %.1f\n", area);
    } else {
        printf("Opcao invalida! Tente novamente");
    }


    return 0;
}