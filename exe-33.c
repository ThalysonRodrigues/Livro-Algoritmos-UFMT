#include <stdio.h>
#include <stdlib.h>
#define TAM 10

int main()
{
    int vetor[TAM];
    int i;
    int contador = 0;

    printf("Preencha o vetor:\n");

    for (i = 0; i < TAM; i ++)
    {
        scanf("%d", &vetor[i]); // Vetor carregado
    }

    for (i = 0; i < TAM; i++)
    {
        if (vetor[9] == vetor[i]) // comparacao no mesmo vetor entre o ultimo indice(9) e o restante do vetor
        {
            contador++; // condicao satisfeita contador recebe o valor de + 1
        }
    }

    printf("O numero %d apareceu %d vezes", vetor[9], contador);
}
