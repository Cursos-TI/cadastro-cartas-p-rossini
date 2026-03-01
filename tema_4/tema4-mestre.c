#include <stdio.h>

// =============================================
// FUNÇÕES RECURSIVAS
// =============================================

// -------- TORRE (recursivo) --------
// Move para a direita N casas
void moverTorre(int casas) {

    // Caso base: quando chegar a 0, para a recursão
    if (casas == 0) {
        return;
    }

    printf("Direita\n");

    // Chamada recursiva diminuindo 1 casa
    moverTorre(casas - 1);
}


// -------- RAINHA (recursivo) --------
// Move para a esquerda N casas
void moverRainha(int casas) {

    if (casas == 0) {
        return;
    }

    printf("Esquerda\n");

    moverRainha(casas - 1);
}


// -------- BISPO (recursivo + loops aninhados) --------
// Movimento diagonal (Cima + Direita)
void moverBispo(int casas) {

    if (casas == 0) {
        return;
    }

    // Loop externo (vertical)
    for (int i = 1; i <= 1; i++) {

        // Loop interno (horizontal)
        for (int j = 1; j <= 1; j++) {

            printf("Cima\n");
            printf("Direita\n");
        }
    }

    moverBispo(casas - 1);
}


// =============================================
// PROGRAMA PRINCIPAL
// =============================================

int main() {

    // Quantidade de casas definidas no código
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);

    printf("\n");

    printf("Movimento do Bispo:\n");
    moverBispo(casasBispo);

    printf("\n");

    printf("Movimento da Rainha:\n");
    moverRainha(casasRainha);

    printf("\n");

    // =============================================
    // CAVALO - Loops complexos aninhados
    // Movimento em L (2 Cima + 1 Direita)
    // =============================================

    printf("Movimento do Cavalo:\n");

    int movimentosVerticais = 2;
    int movimentosHorizontais = 1;

    // Loop externo controla vertical
    for (int i = 1; i <= movimentosVerticais; i++) {

        printf("Cima\n");

        // Quando terminar os 2 movimentos verticais,
        // entra no movimento horizontal
        if (i == movimentosVerticais) {

            int j = 1;

            // Loop interno controla horizontal
            while (j <= movimentosHorizontais) {

                printf("Direita\n");

                // Exemplo de controle de fluxo
                if (j == movimentosHorizontais) {
                    break;
                }

                j++;
            }
        }
    }

    return 0;
}
