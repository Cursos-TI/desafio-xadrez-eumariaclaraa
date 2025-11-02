#include <stdio.h>

int main() {
    // ======== TORRE ========
    // Movimenta 5 casas para a direita (usando for)
    // A torre move-se apenas na horizontal ou vertical
    printf("Movimento da Torre (5 casas para a Direita):\n");

    for (int i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    printf("\n");

    // ======== BISPO ========
    // Movimenta 5 casas na diagonal (cima e direita)
    // O bispo move-se apenas em diagonais
    // Utilizando estrutura while
    printf("Movimento do Bispo (5 casas na Diagonal - Cima Direita):\n");

    int j = 1;
    while (j <= 5) {
        printf("Cima Direita\n");
        j++;
    }

    printf("\n");

    // ======== RAINHA ========
    // Movimenta 8 casas para a esquerda
    // A rainha pode se mover em qualquer direção
    // Utilizando estrutura do-while
    printf("Movimento da Rainha (8 casas para a Esquerda):\n");

    int k = 1;
    do {
        printf("Esquerda\n");
        k++;
    } while (k <= 8);

    return 0;
}
