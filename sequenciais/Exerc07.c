/************************************************************************************************************************************************
Autor....: João Victor Rantin Silvério
Data.....: 03.04.2025
Objetivo.: Ler o nome e o sexo de uma pessoa e exibir uma saudação formal personalizada ("ILMO SR." ou "ILMA SRA.") seguida do nome informado.
*************************************************************************************************************************************************/
#include <stdio.h>

int main() {

    //Declaração de Variáveis
    char    nome[40];
    char    sexo[15];

    //Entrada de Dados
    printf("\n=-=-=-=-=-=-=-=-=Dados=-=-=-=-=-=-=-=-=\n");
    printf("Digite seu nome: ");
    fflush(stdin);
    fgets(nome, 40, stdin);
    printf("Digite seu sexo(m/f): ");
    fflush(stdin);
    fgets(sexo, 15, stdin);

    //saída de Dados
    printf("\n=-=-=-=-=-=-=-=-=Resultado=-=-=-=-=-=-=-=-=\n");
    if (sexo[0] == 'm') {
        printf("ILMO. SR\n");
        printf("%s", nome);
    } else if (sexo[0] == 'f') {
        printf("ILMA. SRA\n");
        printf("%s", nome);
    } 

    return 0;
}