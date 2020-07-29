#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, antecessor, sucessor;

    printf("Digite um número: ");
    scanf("%d", &numero);

    antecessor = (numero - 1);
    sucessor = (numero + 1);

    printf("O seu antecessor é: %d\n", antecessor);
    printf("O seu sucessor é: %d", sucessor);

    return 0;
}
