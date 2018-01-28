#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define INITIATE 0

int main()
{
    char frase[50];
    int contVogal = INITIATE;
    int contConsoante = INITIATE;  // Contadores inicio 0
    int contCaractere = INITIATE;

    int i;

    printf("\nDigite uma frase: ");
    gets(frase);

    for (i = INITIATE; i < strlen(frase); i++) // laço FOR até tamanho de frase
    {
        if ((frase[i] == 'a') || (frase[i] == 'e') || // Vogais
            (frase[i] == 'i') || (frase[i] == 'o') ||
            (frase[i] == 'u'))
        {
            contVogal++;
        }
        if ((frase[i] >= 'a') && (frase[i] <= 'z') && // Consoantes
            (frase[i] != 'a') && (frase[i] != 'e') &&
            (frase[i] != 'i') && (frase[i] != 'o') &&
            (frase[i] != 'u'))
        {
            contConsoante++;
        }
        if ((frase[i] < 'a') || (frase[i] > 'z'))     // Caractes não letras
        {
            contCaractere++;
        }
    }

    printf("\nVogais: %d", contVogal);
    printf("\nConsoantes: %d", contConsoante);
    printf("\nCaracteres, nao letras: %d", contCaractere);
    return 0;
}
