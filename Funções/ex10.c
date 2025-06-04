/*************************************************************************************************************************
Autor.....: João Victor Rantin Silvério
Data......: 01.06.2025
Objetivo..: Fazer um programa que leia as notas de um aluno e retorne sua média com o seu respectivo conceito(A, B, C ou D).
**************************************************************************************************************************/
//Bibliotecas
#include <stdio.h>
#include <windows.h>
//Função para calcular a média e retornar os conceitos
float calculaMedia(float n1, float n2, float n3) {
    //Declaração de Variáveis
    float media;    //Variável que armazena o valor da média do aluno

    //Cálculo
    media = (n1 + n2 + n3) / 3;

    //Verifica a nota e da seu respectivo conceito
    if (media >= 0 && media <= 49) {
        printf("A media do aluno eh.: %.1f\n.", media);  //Mostra a média do aluno
        printf("O seu conceito eh...: D.");    //Mostra seu respectivo conceito
    } else if(media >= 50 && media <= 69) {
        printf("A media do aluno eh.: %.1f\n.", media);  //Mostra a média do aluno
        printf("O seu conceito eh...: C.");    //Mostra seu respectivo conceito
    } else if(media >= 70 && media <= 89) {
        printf("A media do aluno eh.: %.1f\n.", media);  //Mostra a média do aluno
        printf("O seu conceito eh...: B.");    //Mostra seu respectivo conceito
    } else if(media >= 90 && media <= 100) {
        printf("A media do aluno eh.: %.1f\n.", media);  //Mostra a média do aluno
        printf("O seu conceito eh...: A.");    //Mostra seu respectivo conceito
    } else {
        printf("Nao foi possivel calcular a media, Digite valores validos!");   //Se a média não for entre 0 e 100
    }

    return media;   //Retorna o valor da média e seu respectivo conceito
}
//Programa principal
int main() {
    //Declaração de Variáveis
    float nota1;    //Variável que armazena a primeira nota informada pelo usuário(a)
    float nota2;    //Variável que armazena a segunda nota informada pelo usuário(a)
    float nota3;    //Variável que armazena a terceira nota informada pelo usuário(a)

    //Entrada de Dados
    system("cls");
    printf("Digite a nota do aluno(Primeiro bimestre).: ");
    scanf("%f", &nota1);    //Lê o valor informado pelo usuário(a)
    printf("Digite a nota do aluno(Segundo Bimestre)..:");
    scanf("%f", &nota2);    //Lê o valor informado pelo usuário(a)
    printf("Digite a nota do aluno(Terceiro bimestre).: ");
    scanf("%f", &nota3);    //Lê o valor informado pelo usuário(a)

    //Chamada da Função
    calculaMedia(nota1, nota2, nota3);

    return 0;
}