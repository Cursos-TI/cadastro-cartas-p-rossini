

#include <stdio.h>

int main() {

    // ==============================
    // TABULEIRO 10x10
    // ==============================

    int tabuleiro[10][10];
    int i, j;

    // Inicializa tudo com 0 (água)
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // ==============================
    // TAMANHO FIXO DOS NAVIOS
    // ==============================

    int tamanhoNavio = 3;

    // ==============================
    // NAVIO 1 - HORIZONTAL
    // ==============================

    int linhaH = 1;
    int colunaH = 2;

    if (colunaH + tamanhoNavio > 10) {
        printf("Navio horizontal fora do tabuleiro\n");
        return 1;
    }

    for (i = 0; i < tamanhoNavio; i++) {

        if (tabuleiro[linhaH][colunaH + i] == 0) {
            tabuleiro[linhaH][colunaH + i] = 3;
        } else {
            printf("Sobreposição detectada\n");
            return 1;
        }
    }

    // ==============================
    // NAVIO 2 - VERTICAL
    // ==============================

    int linhaV = 4;
    int colunaV = 0;

    if (linhaV + tamanhoNavio > 10) {
        printf("Navio vertical fora do tabuleiro\n");
        return 1;
    }

    for (i = 0; i < tamanhoNavio; i++) {

        if (tabuleiro[linhaV + i][colunaV] == 0) {
            tabuleiro[linhaV + i][colunaV] = 3;
        } else {
            printf("Sobreposição detectada\n");
            return 1;
        }
    }

    // ==============================
    // NAVIO 3 - DIAGONAL PRINCIPAL
    // (linha e coluna aumentam)
    // ==============================

    int linhaD1 = 6;
    int colunaD1 = 2;

    if (linhaD1 + tamanhoNavio > 10 || colunaD1 + tamanhoNavio > 10) {
        printf("Navio diagonal 1 fora do tabuleiro\n");
        return 1;
    }

    for (i = 0; i < tamanhoNavio; i++) {

        if (tabuleiro[linhaD1 + i][colunaD1 + i] == 0) {
            tabuleiro[linhaD1 + i][colunaD1 + i] = 3;
        } else {
            printf("Sobreposição detectada\n");
            return 1;
        }
    }

    // ==============================
    // NAVIO 4 - DIAGONAL SECUNDÁRIA
    // (linha aumenta, coluna diminui)
    // ==============================

    int linhaD2 = 0;
    int colunaD2 = 9;

    if (linhaD2 + tamanhoNavio > 10 || colunaD2 - (tamanhoNavio - 1) < 0) {
        printf("Navio diagonal 2 fora do tabuleiro\n");
        return 1;
    }

    for (i = 0; i < tamanhoNavio; i++) {

        if (tabuleiro[linhaD2 + i][colunaD2 - i] == 0) {
            tabuleiro[linhaD2 + i][colunaD2 - i] = 3;
        } else {
            printf("Sobreposição detectada\n");
            return 1;
        }
    }

    // ==============================
    // MOSTRAR TABULEIRO
    // ==============================

    printf("\nTABULEIRO COMPLETO:\n\n");

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}