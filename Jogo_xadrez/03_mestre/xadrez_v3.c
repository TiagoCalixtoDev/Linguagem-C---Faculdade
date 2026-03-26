#include <stdio.h>

    // TORRE - move para a direita
    void recursive_torre (int casasTorre) {
        if (casasTorre > 0) {
            recursive_torre(casasTorre - 1);
            printf("Direita\n");
        }
    }
    // BISPO - move na diagonal
    void recursive_bispo ( int casasBispo ) {
        if (casasBispo > 0) {
            recursive_bispo(casasBispo -1);
            printf("Cima\n");
            printf("Direita\n");
        }
    }
    // RAINHA - move para a esquerda
    void recursive_rainha ( int casasRainha) {
        if(casasRainha > 0) {
            recursive_rainha(casasRainha - 1);
            printf("Esquerda\n");
        }
    }
    // CAVALO - movimento em L, 2 casas para baixo + 1 para esquerda
   void recursive_cavalo ( int baixo, int esquerda) {
        if (baixo > 0) {
            recursive_cavalo (baixo - 1, esquerda);
            printf("Baixo\n");
        } 
        if (baixo == 0 && esquerda > 0) {
            recursive_cavalo(baixo, esquerda -1);
            printf("Esquerda\n");
        }
        }
    // APENAS UM INT MAIN, PARA TODAS AS PEÇAS.
   int main () {
    printf("***Movimento da Torre***\n");
    recursive_torre(5);

    printf("\n***Movimento do Bispo***\n");
    recursive_bispo(5);

    printf("\n***Movimento da Rainha***\n");
    recursive_rainha(8);

    printf("\n***Movimento do Cavalo***\n");
    recursive_cavalo(2, 1);
         
    return 0;
}
