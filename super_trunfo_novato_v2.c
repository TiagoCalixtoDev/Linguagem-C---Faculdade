#include <stdio.h>
int main(){
    char estado[3];
    char codigo[10];
    unsigned long int populacao;
    int pontos_turisticos;
    char nome_cidade[100];
    float area,pib;
    float dens_populacional,pib_capita;

    char estado2[3];
    char codigo2[10];
    char nome_cidade2[100];
    unsigned long int populacao2;
    int pontos_turisticos2;
    float area2, pib2;
    float dens_populacional2,pib_capita2;

    printf("\n=== CARTA 1 ===\n");

    printf("Qual o seu estado? \n");
    scanf("%s", estado);

    printf("Qual o codigo? \n");
    scanf("%s", codigo);

    getchar();

    printf("Digite o nome da cidade: \n");
    fgets(nome_cidade, sizeof(nome_cidade), stdin);

    printf("Qual o numero de habitantes? \n");
    scanf("%lu", &populacao);

    printf("Qual a area em quilometros quadrados? \n");
    scanf("%f", &area);

    printf("Qual o PIB da cidade? \n");
    scanf("%f", &pib);

    printf("Qual a quantidade de pontos turisticos? \n");
    scanf("%d", &pontos_turisticos);

    dens_populacional = (populacao / area);

    pib_capita = (pib * 1000000000) / populacao;

    
    printf("\n=== CARTA 2 ===\n");

    printf("Qual o seu estado? \n");
    scanf("%s", estado2);

    printf("Qual o codigo? \n");
    scanf("%s", codigo2);

    getchar();

    printf("Digite o nome da cidade: \n");
    fgets(nome_cidade2, sizeof(nome_cidade2), stdin);

    printf("Qual o numero de habitantes? \n");
    scanf("%lu", &populacao2);

    printf("Qual a area? \n");
    scanf("%f", &area2);

    printf("Qual o PIB? \n");
    scanf("%f", &pib2);

    printf("Quantidade de pontos turisticos? \n");
    scanf("%d", &pontos_turisticos2);

    dens_populacional2 = (populacao2 / area2);

    pib_capita2 = (pib2 * 1000000000) / populacao2;

    

    printf("\nCarta 1:\n");
    printf("ESTADO: %s \n", estado);
    printf("CODIGO: %s \n", codigo);
    printf("NOME DA CIDADE: %s", nome_cidade);
    printf("POPULACAO: %lu \n", populacao);
    printf("AREA: %.2f km2 \n", area);
    printf("PIB: %.2f bilhoes de reais \n", pib);
    printf("QUANTIDADE DE PONTOS TURISTICOS: %d \n", pontos_turisticos);
    printf("A DENSIDADE POPULACIONAL É: %f \n", dens_populacional);
    printf("O PIB PER CAPITA É: %f \n", pib_capita);

    printf("\nCarta 2: \n");
    printf("ESTADO: %s \n", estado2);
    printf("CODIGO: %s \n", codigo2);
    printf("NOME DA CIDADE: %s", nome_cidade2);
    printf("POPULACAO: %lu \n", populacao2);
    printf("AREA: %.2f km2 \n", area2);
    printf("PIB: %.2f bilhoes \n", pib2);
    printf("QUANTIDADE DE PONTOS TURISTICOS: %d \n", pontos_turisticos2);
    printf("A DENSIDADE POPULACIONAL É: %f \n", dens_populacional2);
    printf("O PIB PER CAPITA É: %f \n", pib_capita2);

    printf("\n Comparação de cartas (Atributo população): \n");

    printf("Carta 1 - %s (%s): %lu\n", nome_cidade, estado, populacao);
    printf("Carta 2 - %s (%s): %lu\n", nome_cidade2, estado2, populacao2);

    if (populacao > populacao2) {
        printf("Carta 1 venceu! \n", populacao);
    } else {
        printf("Carta 2 venceu! \n", populacao2);
    }
    

    printf("\n Comparação de cartas (Atributo Área): \n");

    printf("Carta 1 - %s (%s): %.2f\n", nome_cidade, estado, area);
    printf("Carta 2 - %s (%s): %.2f\n", nome_cidade2, estado2, area2);

    if (area > area2) {
        printf("Carta 1 venceu! \n", area);
    } else {
        printf("Carta 2 venceu! \n", area2);
    }

    printf("\n Comparação de cartas (Atributo PIB): \n");

    printf("Carta 1 - %s (%s): %.2f\n", nome_cidade, estado, pib);
    printf("Carta 2 - %s (%s): %.2f\n", nome_cidade2, estado2, pib2);

    if (pib > pib2) {
        printf("Carta 1 venceu! \n", pib);
    } else {
        printf("Carta 2 venceu! \n", pib2);
    }

    printf("\nComparação de cartas (Atributo Pontos Turisticos): \n");

    printf("Carta 1 - %s (%s): %d\n", nome_cidade, estado, pontos_turisticos);
    printf("Carta 2 - %s (%s): %d\n", nome_cidade2, estado2, pontos_turisticos2);

    if (pontos_turisticos > pontos_turisticos2) {
        printf("Carta 1 venceu! \n", pontos_turisticos);
    } else {
        printf("Carta 2 venceu! \n", pontos_turisticos2);
    }

    printf("\nComparação de cartas (Atributo Densidade Populacional): \n");

    printf("Carta 1 - %s (%s): %.2f\n", nome_cidade, estado, dens_populacional);
    printf("Carta 2 - %s (%s): %.2f\n", nome_cidade2, estado2, dens_populacional2);

    if (dens_populacional < dens_populacional2) {
        printf("Carta 1 venceu! \n", dens_populacional);
    } else {
        printf("Carta 2 venceu! \n", dens_populacional2);
    }

}
    

   
  