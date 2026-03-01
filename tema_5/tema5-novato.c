#include <stdio.h>

int main() {

    // Tamanho fixo do tabuleiro
    int tabuleiro[10][10];

    int i, j;

    // ============================
    // Inicializa tudo com 0
    // ============================

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // ============================
    // Navios (tamanho 3)
    // ============================

    int tamanhoNavio = 3;

    // Coordenadas fixas
    int linhaH = 2;
    int colunaH = 1;

    int linhaV = 5;
    int colunaV = 7;

    // ============================
    // Verifica se cabe no tabuleiro
    // ============================

    if (colunaH + tamanhoNavio > 10) {
        printf("Navio horizontal fora do tabuleiro\n");
        return 1;
    }

    if (linhaV + tamanhoNavio > 10) {
        printf("Navio vertical fora do tabuleiro\n");
        return 1;
    }

    // ============================
    // Coloca navio horizontal
    // ============================

    for (i = 0; i < tamanhoNavio; i++) {

        if (tabuleiro[linhaH][colunaH + i] == 0) {
            tabuleiro[linhaH][colunaH + i] = 3;
        } else {
            printf("Sobreposição detectada\n");
            return 1;
        }
    }

    // ============================
    // Coloca navio vertical
    // ============================

    for (i = 0; i < tamanhoNavio; i++) {

        if (tabuleiro[linhaV + i][colunaV] == 0) {
            tabuleiro[linhaV + i][colunaV] = 3;
        } else {
            printf("Sobreposição detectada\n");
            return 1;
        }
    }

    // ============================
    // Mostra o tabuleiro
    // ============================

    printf("\nTABULEIRO:\n\n");

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}