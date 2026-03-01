

#include <stdio.h>

int main() {

    // MOVIMENTO DO CAVALO - XADREZ

    // Quantidade de casas (definido no código)
    int casasBaixo = 2;
    int casasEsquerda = 1;

    int i;

    printf("Movimento do Cavalo:\n");

    // Loop FOR (movimento principal - vertical)
    for (i = 1; i <= casasBaixo; i++) {

        // Move duas casas para baixo
        printf("Baixo\n");

        // Quando terminar as duas casas para baixo,
        // entra no segundo loop (aninhado)
        if (i == casasBaixo) {

            int j = 1;

            // Loop WHILE (movimento perpendicular - horizontal)
            while (j <= casasEsquerda) {
                printf("Esquerda\n");
                j++;
            }
        }
    }

    return 0;
}