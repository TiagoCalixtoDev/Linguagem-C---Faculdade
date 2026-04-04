#include <stdio.h>

#define TAM 10
#define NAVIO 3
#define TAM_NAVIO 3

int main () {

    int tabuleiro[TAM][TAM];

    // Inicializa com 0
    for (int i = 0; i < TAM; i++){
        for (int j = 0; j < TAM; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // NAVIO 1 - Horizontal
    for (int i = 0; i < TAM_NAVIO; i++) {
        tabuleiro[2][4 + i] = NAVIO;
    }

    // NAVIO 2 - Vertical
    for (int i = 0; i < TAM_NAVIO; i++) {
        tabuleiro[5 + i][7] = NAVIO;
    }

    // NAVIO 3 - Diagonal Principal
    for (int i = 0; i < TAM_NAVIO; i++) {
        tabuleiro[0 + i][0 + i] = NAVIO;
    }

    // NAVIO 4 - Diagonal Secundária
    for (int i = 0; i < TAM_NAVIO; i++) {
        tabuleiro[0 + i][9 - i] = NAVIO;
    }

    // Mostra o tabuleiro
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
