#include <stdio.h>

int main() {
    // Definindo tipos de dados
    unsigned long int populacao1, populacao2;
    int pontosturisticos1, pontosturisticos2;
    float area1, area2, pib1, pib2;
    float densidade1, densidade2, pibPerCapita1, pibPerCapita2;
    float superPoder1, superPoder2;
    char estado1[2], estado2[2];   
    char cidade1[3], cidade2[3];   
    char codigo1[5], codigo2[5];
    char cidadeNome1[50], cidadeNome2[50]; 

    // Leitura da primeira carta
    printf("Digite o estado da primeira carta (A-H): ");
    scanf("%1s", estado1);
    printf("Digite o codigo da cidade da primeira carta (01-04): ");
    scanf("%2s", cidade1);
    printf("Digite o nome da cidade da primeira carta : ");
    scanf("%s", cidadeNome1);

    // Atribuição manual 
    codigo1[0] = estado1[0];
    codigo1[1] = cidade1[0];
    codigo1[2] = cidade1[1];
    codigo1[3] = '\0';

    printf("Populacao: ");
    scanf("%lu", &populacao1);
    printf("Area: ");
    scanf("%f", &area1);
    printf("PIB : ");
    scanf("%f", &pib1);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosturisticos1);

    // Leitura da segunda carta
    printf("\nDigite o estado da segunda carta (A-H): ");
    scanf("%1s", estado2);
    printf("Digite a cidade da segunda carta (01-04): ");
    scanf("%2s", cidade2);
    printf("Digite o nome da cidade da segunda carta (uma palavra): ");
    scanf("%s", cidadeNome2);
    
    // Atribuição manual2
    codigo2[0] = estado2[0];
    codigo2[1] = cidade2[0];
    codigo2[2] = cidade2[1];
    codigo2[3] = '\0';

    printf("Populacao: ");
    scanf("%lu", &populacao2);
    printf("Area: ");
    scanf("%f", &area2);
    printf("PIB : ");
    scanf("%f", &pib2);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosturisticos2);

    // Calculando densidade e PIB per capita
    densidade1 = (float)populacao1 / area1;
    densidade2 = (float)populacao2 / area2;

    pibPerCapita1 = pib1 / (float)populacao1;
    pibPerCapita2 = pib2 / (float)populacao2;

    // Calculando Super Poder (densidade invertida)
    superPoder1 = (float)populacao1 + area1 + pib1 + pontosturisticos1 +
                  pibPerCapita1 + (1.0f / densidade1);
    superPoder2 = (float)populacao2 + area2 + pib2 + pontosturisticos2 +
                  pibPerCapita2 + (1.0f / densidade2);

    // Imprimindo tudo 
    printf("\n---Informacoes das Cartas---\n");

    printf("\nCarta %s:\n", codigo1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade1);
    printf("PIB per capita: %.6f bilhoes de reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\nCarta %s:\n", codigo2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade2);
    printf("PIB per capita: %.6f bilhoes de reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // Comparação População
    printf("\n---Resultado da Comparacao---\n");
    if (populacao1 > populacao2) {
        printf("Vencedora: Carta %s \n", codigo1);
    } else if (populacao2 > populacao1) {
        printf("Vencedora: Carta %s \n", codigo2);
    } else {
        printf("Empate! Ambas com Populacao %lu\n", populacao1);
    }

    return 0;
}
