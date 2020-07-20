#include <stdio.h>
#include <stdlib.h>

int main()
{
    int anoatual;
    int anonascimento;
    int idade;

    printf("Digite o ano atual: ");
    scanf("%d", &anoatual);

    printf("Digite o ano de nascimento: ");
    scanf("%d", &anonascimento);

    idade = (anoatual - anonascimento);

    printf("A idade é: %d", idade);
    system("pause");

    return 0;
}
