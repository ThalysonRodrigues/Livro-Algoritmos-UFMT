#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

main()
{
    char nome1[20], nome2[20], textoEscrita[80], textoLeitura[80];
    FILE *arquivo1;
    FILE *arquivo2;

    printf("\nNome do arquivo: ");
    gets(nome1);
    strcpy(nome2, nome1); // Copia o nome para o segundo arquivo de mesmo nome .out

    if ((arquivo1 = fopen((strcat(nome1, ".txt")), "wt"))  == NULL) // Concatena nome+".txt"
        printf("\nNao foi possivel escrever no arquivo!\n");
    else
    {
        printf("\nDigite um texto[LIM 80 C]:\n");
        gets(textoEscrita);
        fputs(textoEscrita, arquivo1); // Escreve em arquivo01
    }

    fclose(arquivo1);

    if ((arquivo1 = fopen(nome1, "rt"))  == NULL)
        printf("\nNao foi possivel ler no arquivo!\n");
    else
    {
        fgets(&textoLeitura, sizeof(textoLeitura), arquivo1); // Leitura arquivo01
    }

    fclose(arquivo1);

    if ((arquivo2 = fopen((strcat(nome2, ".out")), "wt"))  == NULL) // Concatena nome+".out"
        printf("\nNao foi possivel escrever no arquivo!\n");
    else
        fputs(strupr(textoLeitura), arquivo2); // Escreve em maiusculo no arquivo02

    fclose(arquivo2);

    printf("\n\nTexto do arquivo .TXT:\n"); // Saida
    printf("\n%s", textoEscrita);
    printf("\n\nTexto do arquivo .OUT:\n");
    printf("\n%s", textoLeitura);

    getchar();
}
