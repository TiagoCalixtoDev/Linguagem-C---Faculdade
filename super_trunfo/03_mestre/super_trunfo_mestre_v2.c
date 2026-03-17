#include <stdio.h>
# include <stdlib.h>
# include <time.h>

int main () {
    int resultado1, resultado2;
    char primeiroAtributo, segundoAtributo;
    int ataque1, ataque2, defesa1, defesa2, recuo1, recuo2;
    float valor1_carta1, valor1_carta2;
    float valor2_carta1, valor2_carta2;

    // GERAR UM NÚMERO ALEATÓRIO.
    srand(time(0));
    ataque1 = rand () % 100 + 1 ; // RAND () % 100 + 1; //NÚMERO ENTRE 1 E 100
    ataque2 = rand () % 100 + 1 ;
    
    defesa1 = rand () % 100 + 1 ; // RAND () % 100 + 1; //NÚMERO ENTRE 1 E 100
    defesa2 = rand () % 100 + 1 ;
     
    recuo1 = rand () % 100 + 1 ; // RAND () % 100 + 1; //NÚMERO ENTRE 1 E 100
    recuo2 = rand () % 100 + 1 ; 

    // INICIO DO JOGO
    printf("Bem-vindo ao jogo!\n");
    printf("Escolha o primeiro atributo.\n");
    printf("A. Ataque\n");
    printf("D. Defesa\n");
    printf("R. Recuo\n");

    printf("Escolha a comparação: ");
    scanf(" %c", &primeiroAtributo);

    switch (primeiroAtributo)
    {
    case 'A':
    case 'a':
        printf("Você escolheu a opção ataque!\n");
        valor1_carta1 = ataque1;
        valor1_carta2 = ataque2;
        break;
    case 'D':
    case 'd':
        printf("Você escolheu a opção defesa!\n");
        valor1_carta1 = defesa1;
        valor1_carta2 = defesa2;
        break;
    case 'R':
    case 'r':
        printf("Você escolheu recuo!\n");
        valor1_carta1 = recuo1;
        valor1_carta2 = recuo2;
        break;
    default:
        printf("Opção Inválida!\n");
        return 0;
        break;
    }
    printf("Escolha o segundo atributo. \n");
    printf("Atenção você deve escolher um atributo diferente do primeiro.\n");
    printf("A. Ataque\n");
    printf("D. Defesa\n");
    printf("R. Recuo\n");

    printf("Escolha a comparação: ");
    scanf(" %c", &segundoAtributo);

    if (primeiroAtributo == segundoAtributo)
    {
        printf("Você escolheu o mesmo atributo.\n");
        return 0;
    } else {
        switch (segundoAtributo)
        {
        case 'A':
        case 'a':
            printf("Você escolheu a opção ataque!\n");
            valor2_carta1 = ataque1;
            valor2_carta2 = ataque2;
            break;
        case 'D':
        case 'd':
            printf("Você escolheu a opção defesa!\n");
            valor2_carta1 = defesa1;
            valor2_carta2 = defesa2;
            break;
        case 'R':
        case 'r':
            printf("Você escolheu recuar.\n");
            valor2_carta1 = recuo1;
            valor2_carta2 = recuo2;
            break;
        default:
            printf("opção inválida!");
            return 0;
            break;
        }
        float soma_carta1 = valor1_carta1 + valor2_carta1;
        float soma_carta2 = valor1_carta2 + valor2_carta2;
        (soma_carta1 > soma_carta2) ? printf("Carta 1 venceu!\n") : (soma_carta2 > soma_carta1) ? printf("Carta 2 venceu!\n") : printf("Empate!\n");

        printf("Valores da Carta 1: %.2f e %.2f\n", valor1_carta1, valor2_carta1);
        printf("Valores da Carta 2: %.2f e %.2f\n", valor1_carta2, valor2_carta2);

        printf("Carta 1: %.2f\n", soma_carta1);
        printf("Carta 2: %.2f\n", soma_carta2);

        
        
        
    
    }
}