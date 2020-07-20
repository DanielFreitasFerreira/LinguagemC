#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    //Criando a variável ponteiro para o arquivo
    FILE *pont_arq;
    char palavra[30]; //Variável do tipo string

    //Abrindo o arquivo com tipo de abertura w
    pont_arq = fopen("Arquivo_palavra.txt", "w");

    //Testando se o arquivo foi realmente criado
    if(pont_arq == NULL) {
        printf("Erro na abertura do arquivo!");
        return 1;
    }
    else {
        printf("Escreva uma palavra para testar gravação do arquivo: ");
        scanf("%s", palavra);

        //Usando fprintf para armazenar a string no arquivo
        fprintf(pont_arq, "%s \n", palavra);

        //Fechando arquivo
        fclose(pont_arq);

        //Mensagem para o usuário
        printf("O arquivo foi criado com sucesso!\n");
    }

    system("pause");
    return(0);
}
