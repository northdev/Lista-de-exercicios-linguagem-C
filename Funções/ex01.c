/************************************************************************************************
Autor.....: João Victor Rantin Silvério
Data......: 29.05.2025
Objetivo..: Fazer um programa que calcule a media aritmética, ponderada ou hamonica de um aluno.
************************************************************************************************/
//Bibliotecas
#include <stdio.h>
#include <windows.h>
//Função que calcula a média aritmética
void calcula_aritmetica() {
    //Declaração de Variáveis
    float nota1;    //Variável da primeira nota
    float nota2;    //Variável da segunda nota
    float nota3;    //Variável da terceira nota
    float media;    //Variável da média aritmética

    //Entrada de Dados
    printf("Digite a primeira nota.........: ");
    scanf("%f", &nota1);    //Le o valor informado pelo usuário
    printf("Digite a segunda nota..........: ");
    scanf("%f", &nota2);    //Le o valor informado pelo usuário
    printf("Digite a terceira nota.........: ");
    scanf("%f", &nota3);    //Le o valor informado pelo usuário

    //Cálculo da média aritmética
    media = (nota1 + nota2 + nota3) / 3;

    //Saída de Dados
    printf("A media aritmetica do aluno eh.: %.1f\n", media);

    system("pause");    //Espera o usuário apertar qualquer tecla para continuar
}
//Função que calcula a média ponderada
void calcula_ponderada() {
    //Declaração de Variáveis
    float nota1;    //Variável da primeira nota
    float nota2;    //Variável da segunda nota
    float nota3;    //Variável da Terceira nota
    float media;    //Variável da média ponderada

    //Entrada de Dados
    printf("Digite a primeira nota........: ");
    scanf("%f", &nota1);    //Lê o valor informado pelo usuário
    printf("Digite a segunda nota.........: ");
    scanf("%f", &nota2);    //Lê o valor informado pelo usuário
    printf("Digite a terceira nota........: ");
    scanf("%f", &nota3);    //Lê o valor informado pelo usuário

    //Cálculo da média ponderada
    media = ((nota1 * 5) + (nota2 * 3) + (nota3 * 2)) / (5 + 3 + 2);

    //Saída de Dados
    printf("A media ponderada do aluno eh.: %.1f\n", media);

    system("pause");    //Espera o usuário apertar qualquer tecla para continuar
}
//Função que calcula a média harmonica 
void calcula_harmonica() {
    //Declaração de Variáveis
    float nota1;    //Variável da primeira nota
    float nota2;    //Variável da segunda nota
    float nota3;    //Variável da terceira nota
    float media;    //Variável da média harmônica 

    //Entrada de Dados
    printf("Digite a primeira nota........: ");
    scanf("%f", &nota1);    //Lê o valor informado pelo usuário
    printf("Digite a segunda nota.........: ");
    scanf("%f", &nota2);    //Lê o valor informado pelo usuário
    printf("Digite a terceira nota........: ");
    scanf("%f", &nota3);    //Lê o valor informado pelo usuário

    //Cálculo da média harmonica
    media = 3 / ((1 / nota1) + (1 / nota2) + (1 / nota3));

    //Saída de Dados
    printf("A media harmonica do aluno eh.: %.1f\n", media);

    system("pause");    //Espera o usuário apertar qualquer tecla para continuar
}
//Programa principal
int main() {
    //Declaração de Variáveis
    char escolha;

    do {
        system("cls");  //Limpa a tela do CMD
        //Menu que mostra as opções de escolha
        printf("Menu de medias\n");
        printf("A- Media Aritimetica\n");
        printf("P- Media Ponderada\n");
        printf("H- Media Harmonica\n");
        printf("S- Sair do Progrma\n");

        printf("\n\n"); //Pula duas linhas

        //Entrada de Dados
        printf("Digite a sua escolha: ");
        scanf("%c", &escolha);  //Lê o valor informado pelo usuário

        switch (escolha) {
            case 'A':
            case 'a':
                calcula_aritmetica();
                break;
            case 'P':
            case 'p':
                calcula_ponderada();
                break;
            case 'H':
            case 'h':
                calcula_harmonica();
                break;
            default:
                break; 
        }

    } while (escolha != 'S' && escolha != 's');

    return 0;
}