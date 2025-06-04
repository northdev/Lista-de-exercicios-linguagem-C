/*************************************************************************************************
Autor.....: João Victor Rantin Silvério
Data......: 30.05.2025
Objetivo..: Fazer um programa que leia a idade em anos, meses e dias e mostra-la somente em dias.
**************************************************************************************************/
//Bibliotecas
#include <stdio.h>
#include <windows.h>

//Função que converte a idade da pessoa para dias
int calcula_idade(int a, int m, int d) {
    return (a * 365) + (m * 30) + d;
}
//Programa Principal
int main() {
    //Declaração de Variáveis
    int anos;   //Variável que armazena anos
    int meses;  //Variável que armazena os meses
    int dias;   //Variável que armazena os dias
    int result; //Variável que armazena o resultado

    //Entrada de Dados
    system("cls");  //Limpa a tela do CMD
    printf("Digite sua idade(anos): ");
    scanf("%d", &anos);     //Lê o valor informado pelo usuário(Anos)
    printf("Digite sua idade(meses): ");
    scanf("%d", &meses);    //Lê o valor informado pelo usuário(Meses)
    printf("Digite sua idade(dias): ");
    scanf("%d", &dias);     //Lê o valor informado pelo usuário(Dias)
    
    //Chamada da função
    result = calcula_idade(anos, meses, dias);

    //Saída de Dados
    printf("Sua idade em dias e: %d dias.\n", result);

    return 0;
}