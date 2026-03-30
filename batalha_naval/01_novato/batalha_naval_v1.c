#include <stdio.h>

int main () {
    char linha [10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'} ;

    
    int tabuleiro [10] [10];
    // INICIALIZA TUDO COM 0
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++) {
            tabuleiro [i][j] = 0;
        } 
    }
    // POSIÇÃO DOS NAVIOS
    tabuleiro[2][4] = 3;
    tabuleiro[2][5] = 3;
    tabuleiro[2][6] = 3;

    tabuleiro[5][7] = 3;
    tabuleiro[6][7] = 3;
    tabuleiro[7][7] = 3;

    // MOSTRA O TABULEIRO
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);

        }
        printf("\n");
    }
    
}
