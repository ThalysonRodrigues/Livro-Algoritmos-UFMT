#include <stdio.h>
#include <stdlib.h>
#define LINHA 7  // Definindo tamanho dos indices
#define COLUNA 6

int somaLinhaColunaMatriz(int [LINHA][COLUNA]);  // Prototipo da função

int main(void) {

    int i, j;
    int iMatriz[LINHA][COLUNA];

    printf("Digite a matriz: \n");
    for (i = 0; i < LINHA; i++) {
        for (j = 0; j < COLUNA; j++) {
            printf("Lin <%i> Col <%i> : ", i+1, j+1); 
            scanf("%i", &iMatriz[i][j]); }
    }

    printf("A soma da linha 5 e coluna 3 e: %i\n", somaLinhaColunaMatriz(iMatriz));
    system("pause");

    return 0;
}

int somaLinhaColunaMatriz(int iMatriz[LINHA][COLUNA]) {
    int iSoma = 0;
    int i, j;
    for (i = 0; i < LINHA; i++) {
        for (j = 0; j < COLUNA; j++) {
            if (i == 4)  // Se linha for igual a 4 soma recebe valor
                iSoma += iMatriz[i][j]; 
            if (j == 2)  // Se coluna for igual a 2 soma recebe valor
                iSoma += iMatriz[i][j]; 
            if ((i == 4) && (j == 2)) { // Se linha e coluna estiverem em mesmo indice sub. esse valor 
                iSoma = iSoma - iMatriz[i][j];
        }
    }
    return iSoma;
}
