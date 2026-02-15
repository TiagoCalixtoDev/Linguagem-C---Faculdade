#include <stdio.h>
int main(){
    char estado[3];
    char codigo[10];
    int populacao,pontos_turisticos;
    char nome_cidade[100];
    float area,pib;
    float dens_populacional,pib_capita;

    char estado2[3];
    char codigo2[10];
    char nome_cidade2[100];
    int populacao2,pontos_turisticos2;
    float area2, pib2;
    float dens_populacional2,pib_capita2;

    printf("\n=== CARTA 1 ===\n");

    printf("Qual o seu estado? \n");
    scanf("%s", &estado);

    printf("Qual o codigo? \n");
    scanf("%s", &codigo);

    getchar();

    printf("Digite o nome da cidade: \n");
    fgets(nome_cidade, sizeof(nome_cidade), stdin);

    printf("Qual o numero de habitantes? \n");
    scanf("%d", &populacao);

    printf("Qual a area em quilometros quadrados? \n");
    scanf("%f", &area);

    printf("Qual o PIB da cidade? \n");
    scanf("%f", &pib);

    printf("Qual a quantidade de pontos turisticos? \n");
    scanf("%d", &pontos_turisticos);

    dens_populacional = (float)(populacao / area);

    pib_capita = (float)(pib / populacao);


    printf("\n=== CARTA 2 ===\n");

    printf("Qual o seu estado? \n");
    scanf("%s", estado2);

    printf("Qual o codigo? \n");
    scanf("%s", codigo2);

    getchar();

    printf("Digite o nome da cidade: \n");
    fgets(nome_cidade2, sizeof(nome_cidade2), stdin);

    printf("Qual o numero de habitantes? \n");
    scanf("%d", &populacao2);

    printf("Qual a area? \n");
    scanf("%f", &area2);

    printf("Qual o PIB? \n");
    scanf("%f", &pib2);

    printf("Quantidade de pontos turisticos? \n");
    scanf("%d", &pontos_turisticos2);

    dens_populacional2 = (float)(populacao2 / area2);

    pib_capita2 = (float)(pib2 / populacao2);

    printf("\nCarta 1:\n");
    printf("ESTADO: %s \n", estado);
    printf("CODIGO: %s \n", codigo);
    printf("NOME DA CIDADE: %s", nome_cidade);
    printf("POPULACAO: %d \n", populacao);
    printf("AREA: %.2f km2\n", area);
    printf("PIB: %.2f bilhoes de reais\n", pib);
    printf("QUANTIDADE DE PONTOS TURISTICOS: %d \n", pontos_turisticos);
    printf("A DENSIDADE POPULACIONAL É: %f\n", dens_populacional);
    printf("O PIB PER CAPITA É: %f\n", pib_capita);

    printf("\nCarta 2:\n");
    printf("ESTADO: %s\n", estado2);
    printf("CODIGO: %s\n", codigo2);
    printf("NOME DA CIDADE: %s", nome_cidade2);
    printf("POPULACAO: %d\n", populacao2);
    printf("AREA: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes\n", pib2);
    printf("QUANTIDADE DE PONTOS TURISTICOS: %d\n", pontos_turisticos2);
    printf("A DENSIDADE POPULACIONAL É: %f\n", dens_populacional2);
    printf("O PIB PER CAPITA É: %f\n", pib_capita2);

    


    return 0;

}