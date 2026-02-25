#include <stdio.h>

int main() {
    // ===== CARTA 1 (Pré-definida no código) =====
    // Agora Estado é uma string (vetor de char) para caber "SP"
    char estado1[3] = "SP";
    char codigo1[5] = "A01";
    char nome1[50] = "São Paulo";
    unsigned long int populacao1 = 12300000;
    float area1 = 1521.11;
    float pib1 = 699.28;
    int pontos1 = 50;

    // Cálculos da Carta 1
    float densidade1 = (float)populacao1 / area1;
    float pibPerCapita1 = (pib1 * 1000000000.0) / (float)populacao1;

    // ===== CARTA 2 (Pré-definida no código) =====
    char estado2[3] = "RJ";
    char codigo2[5] = "B02";
    char nome2[50] = "Rio de Janeiro";
    unsigned long int populacao2 = 6000000;
    float area2 = 1200.25;
    float pib2 = 300.50;
    int pontos2 = 30;

    // Cálculos da Carta 2
    float densidade2 = (float)populacao2 / area2;
    float pibPerCapita2 = (pib2 * 1000000000.0) / (float)populacao2;

    // =============================
    // COMPARAÇÃO (ATRIBUTO: POPULAÇÃO)
    // =============================
    printf("Comparacao de cartas (Atributo: Populacao):\n\n");
    
    // Imprimindo exatamente no formato do exemplo do professor
    printf("Carta 1 - %s (%s): %lu\n", nome1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %lu\n", nome2, estado2, populacao2);

    // Lógica de decisão usando if-else
    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}