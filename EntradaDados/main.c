#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declarar as variáveis
    int idade, ano;
    float altura;
    char nome[30];

    //Mensagem para o usuário
    printf("Digite o seu nome: ");
    scanf("%s", nome); //Leitura do nome do usuário

    printf("Digite a sua idade: ");
    scanf("%d", &idade); /*Leitura da idade*/

    printf("Digite a altura do usuário: ");
    scanf("%f", &altura);

    /*Processamento dos dados*/

    ano = (2020 - idade);

    /*Saida dos dados*/
    printf("\nO nome: %s", nome);
    printf("\nA idade: %d", idade);
    printf("\nA altura: %f.2", altura);
    printf("\nO ano de nascimento: %d", ano);

    return 0;
}
