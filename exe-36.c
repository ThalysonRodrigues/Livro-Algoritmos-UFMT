#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#define INITIAL 0
#define MAXIMUM 10

int main()
{
    int i, j, pontos;
    int limite = INITIAL, aprovados = INITIAL;

    char gabarito[MAXIMUM], prova[MAXIMUM];
    int  matricula[100];
    float nota[100];

    printf("\nDigite o gabarito:\n\n A, B, C, D ou E\n\n");
    for (i = INITIAL; i < MAXIMUM; i++)
    {
        printf("\nQuestao %d: ", i + 1);
        gabarito[i] = toupper(getche());
    }
    printf("\n\n");

    for (i = INITIAL; i < 100; i++)
    {
        nota[i] = 0;
        printf("\nNumero da matricula: ");
        scanf("%d", &matricula[i]);
        if (matricula[i] < 0)
            break;

        pontos = INITIAL;
        for (j = INITIAL; j < MAXIMUM; j++)
        {
            printf("\nQuestao %d: ", j + 1);
            if (gabarito[j] == toupper(getche()))
            {
                pontos++;
            }
        }
        nota[i] = pontos;
        limite++;
    }

    for (i = 0; i < limite; i++)
    {
        if (nota[i] >= 5)
            aprovados++;
    }

    for (i = INITIAL; i < limite; i++)
    {
        printf("\n\nAluno %d", matricula[i]);
        printf("\n\nNota: %0.2f", nota[i]);
    }
    printf("\n\nPercentual aprovacao: %d%%", (aprovados * 100)/ limite);

    return 0;
}
