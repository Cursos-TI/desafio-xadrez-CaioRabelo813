#include <stdio.h>

int main() {
    int i;

    // Movimento da Torre usando for
    printf("Movimento da Torre:\n");
    for (i = 0; i < 5; i++) {
        printf("Direita\n");
    }

    // Movimento do Bispo usando while
    printf("\nMovimento do Bispo:\n");
    int j = 0;
    while (j < 5) {
        printf("Cima Direita\n");
        j++;
    }

    // Movimento da Rainha usando do-while
    printf("\nMovimento da Rainha:\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < 8);

    // Movimento do Cavalo usando for + while (loops aninhados)
    printf("\nMovimento do Cavalo:\n");
    const int casasBaixo = 2;
    const int casasEsquerda = 1;

    // Loop externo com for para as duas casas pra baixo
    for (int m = 0; m < casasBaixo; m++) {
        printf("Baixo\n");
    }

    // Loop interno com while para uma casa à esquerda
    int n = 0;
    while (n < casasEsquerda) {
        printf("Esquerda\n");
        n++;
    }

    return 0;
}

