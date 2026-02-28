#include <stdio.h>
int main(){
    char estado[3];
    char codigo[10];
    int populacao,pontos_turisticos;
    char nome_cidade[100];
    float area,pib;

    char estado2[3];
    char codigo2[10];
    char nome_cidade2[100];
    int populacao2;
    float area2, pib2;
    int pontos_turisticos2;

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

    printf("\nCarta 1:\n");
    printf("ESTADO: %s \n", estado);
    printf("CODIGO: %s \n", codigo);
    printf("NOME DA CIDADE: %s", nome_cidade);
    printf("POPULACAO: %d \n", populacao);
    printf("AREA: %.2f km2\n", area);
    printf("PIB: %.2f bilhoes de reais\n", pib);
    printf("NUMERO DE PONTOS TURISTICOS: %d \n", pontos_turisticos);

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s", nome_cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos2);

    return 0;

}
