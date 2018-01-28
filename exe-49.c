#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
    char nome[30];
    char fone[15];

}registro;

int main()
{
    int tam, i;

    printf("\nDigite a quantidade de cadastros: ");
    scanf("%d", &tam);

    registro reg[tam]; // Declaracao de vetor apos inserir a quantidade de indices

    for (i = 0; i < tam; i++)
    {
        printf("\nNome (%d): ", i + 1);
        fflush(stdin);
        gets(reg[i].nome);
        printf("\nFone(DDD): ");
        gets(reg[i].fone);
    }

    for (i = 0; i < tam; i++)
    {
        if (reg[i].fone[0] == '6' && reg[i].fone[1] == '6')
        {
            puts(reg[i].nome);
            puts(reg[i].fone);
        }
    }

    return 0;
}
