#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int converteLetra(char *);  // Prototipo da funcao

int main()
{
    char letra;
    int teste;

    printf("\nDigite uma letra: ");
    letra = getchar();

    teste = converteLetra(&letra);

    if (teste == 0)
        printf("\nNao foi possivel a conversao!\n");
    else
        printf("\nMaiscula: %c\n", letra);

    return 0;
}

int converteLetra(char *letra)
{
    if ((*letra < 'a') || (*letra > 'z'))
        return 0;
    else if ((*letra >= 'a') && (*letra <= 'z'))
    {
        *letra = toupper(*letra);
        return 1;
    }
}
