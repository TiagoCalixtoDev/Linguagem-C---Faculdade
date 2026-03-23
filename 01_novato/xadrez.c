#include <stdio.h>

int main() {
    int casasTorre;
    int casasBispo = 0;
    int contadorRainha = 0;

    // Movimento da Torre: 5 casas para a direita usando for //
    printf("***Movimento da Torre***\n");
    for (casasTorre = 0; casasTorre < 5; casasTorre++) {
        printf("Direita\n");
    }

    // Movimento do Bispo: 5 casas na diagonal (cima + direita) usando while //
    printf("***Movimento do Bispo***\n");
    while (casasBispo < 5) {
        printf("Cima\n");
        printf("Direita\n");
        casasBispo++;
    }

    // Movimento da Rainha: 8 casas para a esquerda usando do-while //
    printf("***Movimento da Rainha***\n");
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha < 8);

    return 0;
}
