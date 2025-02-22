#include <stdio.h>

#define TAMANHO_NAVIO_VERTICAL 4
#define TAMANHO_NAVIO_HORIZONTAL 5

int main() {
    int tabuleiro[10][10] = {0}; // Tabuleiro 10x10 inicializado com 0
    int navioVerticalX = 2, navioVerticalY = 3; // Coordenadas iniciais do navio vertical
    int navioHorizontalX = 5, navioHorizontalY = 6; // Coordenadas iniciais do navio horizontal

    // Posiciona o navio vertical
    for (int i = 0; i < TAMANHO_NAVIO_VERTICAL; i++) {
        tabuleiro[navioVerticalX + i][navioVerticalY] = 1;
    }

    // Posiciona o navio horizontal
    for (int i = 0; i < TAMANHO_NAVIO_HORIZONTAL; i++) {
        tabuleiro[navioHorizontalX][navioHorizontalY + i] = 1;
    }

    // Exibe as coordenadas do navio vertical
    printf("Coordenadas do Navio Vertical:\n");
    for (int i = 0; i < TAMANHO_NAVIO_VERTICAL; i++) {
        printf("(%d, %d)\n", navioVerticalX + i, navioVerticalY);
    }

    // Exibe as coordenadas do navio horizontal
    printf("Coordenadas do Navio Horizontal:\n");
    for (int i = 0; i < TAMANHO_NAVIO_HORIZONTAL; i++) {
        printf("(%d, %d)\n", navioHorizontalX, navioHorizontalY + i);
    }

    return 0;
}
