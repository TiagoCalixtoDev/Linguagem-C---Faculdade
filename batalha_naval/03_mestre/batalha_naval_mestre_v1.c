#include <stdio.h>

#define TAM 10 // TAMANHO DO TABULEIRO (10X10) 
#define H 5  // TAMANHO DAS HABILIDADES (5x5)

// 
void aplicarHabilidade(int tabuleiro[TAM][TAM], int habilidade[H][H], int origemLinha, int origemColuna) {
    int centro = H / 2; // PERMITE ALINHAR A HABILIDADE NO TABULEIRO

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < H; j++) {

            if (habilidade[i][j] == 1) { // ENQUANTO A HABILIDADE TEM "1" A ÁREA ESTÁ ATIVA.

                int linhaTab = origemLinha + (i - centro); // CENTRALIZA O EFEITO EM LINHA
                int colunaTab = origemColuna + (j - centro); // CENTRALIZA O EFEITO EM COLUNA

                // PARA NÃO SAIR DO TABULEIRO
                if (linhaTab >= 0 && linhaTab < TAM && colunaTab >= 0 && colunaTab < TAM) {

                    if (tabuleiro[linhaTab][colunaTab] == 0) { // "0" SE FOR ÁGUA
                        tabuleiro[linhaTab][colunaTab] = 5;  // A ANTIGIDA É MARCADA COM "5"
                    }
                }
            }
        }
    }
}

int main() {

    int tabuleiro[TAM][TAM]; // 10X10

    // SEMPRE COMEÇANDO COM ÁGUA
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // CRIANDO OS NAVIOS (mesmo do desafio aventureiro mas simplificado)
    for (int i = 0; i < 3; i++) tabuleiro[2][4 + i] = 3; // HORIZONTAL
    for (int i = 0; i < 3; i++) tabuleiro[5 + i][7] = 3; // VERTICAL
    for (int i = 0; i < 3; i++) tabuleiro[i][i] = 3; // DIAGONAL PRINCIPAL
    for (int i = 0; i < 3; i++) tabuleiro[i][9 - i] = 3; // DIAGONAL SECUNDÁRIA

    // MATRIZES DE HABILIDADE (todas começando zeradas)
    int cone[H][H] = {0};
    int cruz[H][H] = {0};
    int octaedro[H][H] = {0};

    int centro = H / 2;

    // CONE (forma um triângulo)
    for (int i = 0; i <= centro; i++) {
        for (int j = centro - i; j <= centro + i; j++) {
            cone[i][j] = 1;
        }
    }

    // CRUZ (linha horizontal e vertical no centro)
    for (int i = 0; i < H; i++) {
        cruz[centro][i] = 1;
        cruz[i][centro] = 1;
    }

    // OCTAEDRO  
    for (int i = 0; i < H; i++) {
        int dist = i - centro;
        if (dist < 0) dist = -dist; // DIST PARA CALCULAR A DISTÂNCIA ATÉ O CENTRO

        for (int j = dist; j < H - dist; j++) { 
            octaedro[i][j] = 1;
        }
    }

    int escolha;
    int linha, coluna;

    printf("Escolha a habilidade:\n"); // IMPLEMENTEI UM MENU, PARA A ESCOLHA DO USUÁRIO.
    printf("1 - Cone\n");
    printf("2 - Cruz\n");
    printf("3 - Octaedro\n");
    printf("Opcao: ");
    scanf("%d", &escolha);

    printf("Digite a linha (0 a 9): ");
    scanf("%d", &linha);

    printf("Digite a coluna (0 a 9): ");
    scanf("%d", &coluna);

    // CASO A OPÇÃO SEJA INCORRETA
    if (linha < 0 || linha >= TAM || coluna < 0 || coluna >= TAM) {
        printf("Posicao invalida!\n");
        return 1;
    }

    // APLICANDO AS HABILIDADES
    switch (escolha) {
        case 1:
            aplicarHabilidade(tabuleiro, cone, linha, coluna);
            break;
        case 2:
            aplicarHabilidade(tabuleiro, cruz, linha, coluna);
            break;
        case 3:
            aplicarHabilidade(tabuleiro, octaedro, linha, coluna);
            break;
        default:
            printf("Habilidade invalida!\n");
            return 1;
    }
    printf("\nLegendas (DEV):\n");
    printf("D = Navio\n");
    printf("E = habilidade\n");
    printf("V = Agua\n\n");

    // MOSTRA O TABULEIRO
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {

            if (tabuleiro[i][j] == 0)
                printf("V "); // ÁGUA ( . )
            else if (tabuleiro[i][j] == 3)
                printf("D "); // NAVIO ( N )
            else if (tabuleiro[i][j] == 5)
                printf("E "); // HABILIDADE ( * )
        }
        printf("\n");
    }

    return 0;
}
