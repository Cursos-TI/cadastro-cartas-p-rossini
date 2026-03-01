

#include <stdio.h>

int main() {

    // =====================================
    // TABULEIRO 10x10
    // =====================================

    int tabuleiro[10][10];
    int i, j;

    // Inicializa com água (0)
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // =====================================
    // COLOCA DOIS NAVIOS SIMPLES
    // =====================================

    // Navio horizontal
    for (i = 0; i < 3; i++) {
        tabuleiro[2][3 + i] = 3;
    }

    // Navio vertical
    for (i = 0; i < 3; i++) {
        tabuleiro[6 + i][1] = 3;
    }

    // =====================================
    // MATRIZES DE HABILIDADE (5x5)
    // =====================================

    int cone[5][5];
    int cruz[5][5];
    int octaedro[5][5];

    // -------- CONE (aponta para baixo) --------
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {

            // Forma triangular expandindo para baixo
            if (j >= 2 - i && j <= 2 + i) {
                cone[i][j] = 1;
            } else {
                cone[i][j] = 0;
            }
        }
    }

    // -------- CRUZ --------
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {

            if (i == 2 || j == 2) {
                cruz[i][j] = 1;
            } else {
                cruz[i][j] = 0;
            }
        }
    }

    // -------- OCTAEDRO (losango) --------
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {

            // Distância do centro (2,2)
            if ((i - 2 <= 2 && i - 2 >= -2) &&
                (j - 2 <= 2 && j - 2 >= -2) &&
                ( (i-2 < 0 ? -(i-2) : (i-2)) +
                  (j-2 < 0 ? -(j-2) : (j-2)) ) <= 2) {

                octaedro[i][j] = 1;
            } else {
                octaedro[i][j] = 0;
            }
        }
    }

    // =====================================
    // SOBREPOR HABILIDADES NO TABULEIRO
    // =====================================

    // Ponto de origem no tabuleiro
    int origemLinha = 4;
    int origemColuna = 4;

    // Sobrepor CONE
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {

            int linhaTab = origemLinha + i - 2;
            int colunaTab = origemColuna + j - 2;

            if (linhaTab >= 0 && linhaTab < 10 &&
                colunaTab >= 0 && colunaTab < 10) {

                if (cone[i][j] == 1) {
                    tabuleiro[linhaTab][colunaTab] = 5;
                }
            }
        }
    }

    // Sobrepor CRUZ
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {

            int linhaTab = 7 + i - 2;
            int colunaTab = 7 + j - 2;

            if (linhaTab >= 0 && linhaTab < 10 &&
                colunaTab >= 0 && colunaTab < 10) {

                if (cruz[i][j] == 1) {
                    tabuleiro[linhaTab][colunaTab] = 5;
                }
            }
        }
    }

    // Sobrepor OCTAEDRO
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {

            int linhaTab = 1 + i - 2;
            int colunaTab = 8 + j - 2;

            if (linhaTab >= 0 && linhaTab < 10 &&
                colunaTab >= 0 && colunaTab < 10) {

                if (octaedro[i][j] == 1) {
                    tabuleiro[linhaTab][colunaTab] = 5;
                }
            }
        }
    }

    // =====================================
    // EXIBIR TABULEIRO
    // =====================================

    printf("\nTABULEIRO FINAL:\n\n");

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {

            if (tabuleiro[i][j] == 0) {
                printf("~ ");   // água
            } else if (tabuleiro[i][j] == 3) {
                printf("N ");   // navio
            } else if (tabuleiro[i][j] == 5) {
                printf("* ");   // área habilidade
            }
        }
        printf("\n");
    }

    return 0;
}