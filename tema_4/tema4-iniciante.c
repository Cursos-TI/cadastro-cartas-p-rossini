

#include <stdio.h>

int main() {

    // MOVIMENTAÇÃO DAS PEÇAS - XADREZ

    // Var. Qtd de casas
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    int i;

    // TORRE - usando FOR
    // Move 5 casas para a direita

    printf("Movimento da Torre:\n");

    for (i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    printf("\n");


    // BISPO - usando WHILE
    // Move 5 casas na diagonal
    // (Cima + Direita)

    printf("Movimento do Bispo:\n");

    i = 1;

    while (i <= casasBispo) {
        printf("Cima Direita\n");
        i++;
    }

    printf("\n");


    // RAINHA - usando DO-WHILE
    // Move 8 casas para a esquerda

    printf("Movimento da Rainha:\n");

    i = 1;

    do {
        printf("Esquerda\n");
        i++;
    } while (i <= casasRainha);


    return 0;
}