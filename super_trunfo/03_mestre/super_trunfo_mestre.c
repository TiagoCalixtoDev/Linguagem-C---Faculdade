#include <stdio.h>
int main(){
    char estado[3];
    char codigo[10];
    unsigned long int populacao;
    int pontos_turisticos;
    char nome_cidade[100];
    float area,pib;
    float dens_populacional,pib_capita;
    float super_poder;

    char estado2[3];
    char codigo2[10];
    char nome_cidade2[100];
    unsigned long int populacao2;
    int pontos_turisticos2;
    float area2, pib2;
    float dens_populacional2,pib_capita2;
    float super_poder2;

    int resultadoPopulacao;
    int resultadoArea;
    int resultadoPib;
    int resultadoPontos_turisticos;
    int resultadoDens_Populacional;
    int resultadoPib_capita;
    int resultadoSuper_poder;

    printf("\n=== CARTA 1 ===\n");

    printf("Qual o seu estado? \n");
    scanf("%s", &estado);

    printf("Qual o codigo? \n");
    scanf("%s", &codigo);

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

    dens_populacional = (float)(populacao / area);

    pib_capita = (pib * 1000000000) / populacao;

    super_poder = populacao + area + pib + pontos_turisticos + pib_capita + ((float)area / populacao);
    


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

    dens_populacional2 = (float)(populacao2 / area2);

    pib_capita2 = (pib2 * 1000000000) / populacao2;

    super_poder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + pib_capita2 + ((float)area2 / populacao2);

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

    resultadoPopulacao = populacao > populacao2;
    resultadoArea = area > area2;
    resultadoPib = pib > pib2;
    resultadoPontos_turisticos = pontos_turisticos > pontos_turisticos2;
    resultadoDens_Populacional = dens_populacional < dens_populacional2;
    resultadoPib_capita = pib_capita > pib_capita2;
    resultadoSuper_poder = super_poder > super_poder2;

    printf("\n------ COMPARAÇÃO DAS CARTAS -------\n");

    printf("População: Carta 1 venceu (%d)\n", resultadoPopulacao);
    printf("Área: Carta 1 venceu (%d)\n", resultadoArea);
    printf("PIB: Carta 1 venceu (%d)\n", resultadoPib);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", resultadoPontos_turisticos);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", resultadoDens_Populacional);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", resultadoPib_capita);
    printf("Super Poder: Carta 1 venceu (%d)\n", resultadoSuper_poder);
  
    return 0;

}