#include <stdio.h>

int main() {
    // Definindo tipos de dados
    int populacao1, populacao2, pontosturisticos1, pontosturisticos2;
    float area1, area2, pib1, pib2;

    // Leitura da primeira carta
    printf("Populacao: ");
    scanf("%d", &populacao1);
    printf("Area: ");
    scanf("%f", &area1);
    printf("PIB : ");
    scanf("%f", &pib1);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosturisticos1);

    // Leitura da segunda carta carta
    printf("Populacao: ");
    scanf("%d", &populacao2);
    printf("Area: ");
    scanf("%f", &area2);
    printf("PIB : ");
    scanf("%f", &pib2);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosturisticos2);

    // Imprimindo tudo 
    printf("\n---Informacoes das Cartas---\n");

    printf("\nCarta 1:\n");
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f \n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosturisticos1);

    printf("\nCarta 2:\n");
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f \n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosturisticos2);
    return 0;
}
