#include <stdio.h>

// Função recursiva para a Torre
void movimento_torre(int casas_restantes) {
    if (casas_restantes == 0) return;  // Caso base

    printf("Direita\n");  // Movimento da Torre para a direita
    movimento_torre(casas_restantes - 1);  // Recursão
}

// Função recursiva para o Bispo
void movimento_bispo(int casas_restantes) {
    if (casas_restantes == 0) return;  // Caso base

    printf("Cima Direita\n");  // Movimento do Bispo na diagonal
    movimento_bispo(casas_restantes - 1);  // Recursão
}

// Função recursiva para a Rainha
void movimento_rainha(int casas_restantes) {
    if (casas_restantes == 0) return;  // Caso base

    printf("Esquerda\n");  // Movimento da Rainha para a esquerda
    movimento_rainha(casas_restantes - 1);  // Recursão
}

// Função para o movimento do Cavalo (utilizando loops complexos)
void movimento_cavalo() {
    int i, j;
    
    // O Cavalo se move 2 casas para cima e 1 casa para a direita
    for (i = 0; i < 2; i++) {
        printf("Cima\n");  // Movimento para cima
    }
    for (j = 0; j < 1; j++) {
        printf("Direita\n");  // Movimento para a direita
    }
}

int main() {
    // Testando os movimentos das peças
    
    // Movimento da Torre (5 casas para a direita)
    printf("Movimento da Torre:\n");
    movimento_torre(5);
    printf("\n");

    // Movimento do Bispo (5 casas na diagonal Cima Direita)
    printf("Movimento do Bispo:\n");
    movimento_bispo(5);
    printf("\n");

    // Movimento da Rainha (8 casas para a esquerda)
    printf("Movimento da Rainha:\n");
    movimento_rainha(8);
    printf("\n");

    // Movimento do Cavalo (2 casas para cima e 1 para a direita)
    printf("Movimento do Cavalo:\n");
    movimento_cavalo();
    printf("\n");

    return 0;
}

