#include <stdio.h>

int main() {

    // ===== CARTA 1 =====
    char estado1;
    char codigo1[5];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    // Novas variáveis adicionadas
    float densidade1;
    float pibPerCapita1;

    printf("=== Cadastro da Carta 1 ===\n");

    printf("Estado (A a H): ");
    scanf(" %c", &estado1);

    printf("Codigo da Carta (ex: A01): ");
    scanf(" %s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("Populacao: ");
    scanf(" %d", &populacao1);

    printf("Area (em km2): ");
    scanf(" %f", &area1);

    printf("PIB (em bilhoes): ");
    scanf(" %f", &pib1);

    printf("Numero de Pontos Turisticos: ");
    scanf(" %d", &pontosTuristicos1);

    // Cálculos da Carta 1
    densidade1 = (float) populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000.0) / (float) populacao1;


    // ===== CARTA 2 =====
    char estado2;
    char codigo2[5];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    // Novas variáveis adicionadas
    float densidade2;
    float pibPerCapita2;

    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Estado (A a H): ");
    scanf(" %c", &estado2);

    printf("Codigo da Carta (ex: B02): ");
    scanf(" %s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Populacao: ");
    scanf(" %d", &populacao2);

    printf("Area (em km2): ");
    scanf(" %f", &area2);

    printf("PIB (em bilhoes): ");
    scanf(" %f", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf(" %d", &pontosTuristicos2);

    // Cálculos da Carta 2
    densidade2 = (float) populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000.0) / (float) populacao2;


    // ===== EXIBICAO DOS DADOS =====
    printf("\n===== CARTA 1 =====\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    // Exibindo os novos cálculos formatados com duas casas decimais
    printf("Densidade Populacional: %.2f hab/km2\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    printf("\n===== CARTA 2 =====\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    // Exibindo os novos cálculos formatados com duas casas decimais
    printf("Densidade Populacional: %.2f hab/km2\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    return 0;
}