#include <stdio.h>

int main() {

    // ===== CARTA 1 =====
    char estado1;
    char codigo1[5];
    char nome1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontos1;

    float densidade1;
    float pibPerCapita1;
    float superPoder1;

    // ===== CARTA 2 =====
    char estado2;
    char codigo2[5];
    char nome2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontos2;

    float densidade2;
    float pibPerCapita2;
    float superPoder2;

    // =============================
    // ENTRADA CARTA 1
    // =============================

    printf("=== Cadastro da Carta 1 ===\n");

    printf("Estado: ");
    scanf(" %c", &estado1);

    printf("Codigo: ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nome1);

    printf("Populacao: ");
    scanf("%lu", &populacao1);

    printf("Area: ");
    scanf("%f", &area1);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib1);

    printf("Pontos Turisticos: ");
    scanf("%d", &pontos1);

    // Cálculos Carta 1
    densidade1 = (float)populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000.0) / (float)populacao1;

    superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontos1 + pibPerCapita1 + (1.0 / densidade1);


    // =============================
    // ENTRADA CARTA 2
    // =============================

    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Estado: ");
    scanf(" %c", &estado2);

    printf("Codigo: ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nome2);

    printf("Populacao: ");
    scanf("%lu", &populacao2);

    printf("Area: ");
    scanf("%f", &area2);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib2);

    printf("Pontos Turisticos: ");
    scanf("%d", &pontos2);

    // Cálculos Carta 2
    densidade2 = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000.0) / (float)populacao2;

    superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontos2 + pibPerCapita2 + (1.0 / densidade2);


    // =============================
    // COMPARAÇÃO
    // =============================

    printf("\n===== Comparacao de Cartas =====\n");

    printf("Populacao: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Area: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", pontos1 > pontos2);

    
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2);

    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);

    return 0;
}