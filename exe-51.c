#include <stdio.h>
#define MAX 10

int main()
{
    int i = 0;
    char nome[MAX][40];
    FILE *arquivo;

    do // Gravando no vetor
    {
        printf("\nNome %d: ", i + 1);
        gets(nome[i]);
        i++;
    } while (i != MAX);

    if ((arquivo = fopen("nomes.txt", "wt")) == NULL)
        printf("\nErro ao abrir arquivo!\n");
    else
    {
        for (i = 0; i < MAX; i++)
        {
            fprintf(arquivo, nome[i]);   // Gravando no arquivo o vetor criado
            fprintf(arquivo, "\n");      // Adiciona a quebra de linha no arquivo
        }
        printf("\n\nArquivo criado!\n");
    }
    fclose(arquivo);

    return 0;
}
