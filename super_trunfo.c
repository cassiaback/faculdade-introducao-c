#include <stdio.h>

int main() {
    // ===== CARTAS PRÉ-DEFINIDAS (PAÍSES) =====
    char pais1[50] = "Brasil";
    unsigned long int populacao1 = 203000000;
    float area1 = 8515767.04;
    float pib1 = 10.9; // Em trilhões
    int pontos1 = 100;
    float densidade1 = (float)populacao1 / area1;

    char pais2[50] = "Argentina";
    unsigned long int populacao2 = 46044703;
    float area2 = 2780400.00;
    float pib2 = 3.4; // Em trilhões
    int pontos2 = 60;
    float densidade2 = (float)populacao2 / area2;

    int opcao;

    // ===== MENU INTERATIVO =====
    printf("=== MENU DE BATALHA: SUPER TRUNFO ===\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("Digite a sua opcao: ");
    scanf("%d", &opcao);

    printf("\n=========================================\n");

    // ===== LÓGICA DE COMPARAÇÃO =====
    switch (opcao) {
        case 1:
            printf("Atributo: Populacao\n");
            printf("%s: %lu habitantes\n", pais1, populacao1);
            printf("%s: %lu habitantes\n", pais2, populacao2);
            
            // IF Aninhado (if dentro de else)
            if (populacao1 == populacao2) {
                printf("Resultado: Empate!\n");
            } else {
                if (populacao1 > populacao2) {
                    printf("Resultado: %s venceu!\n", pais1);
                } else {
                    printf("Resultado: %s venceu!\n", pais2);
                }
            }
            break;

        case 2:
            printf("Atributo: Area\n");
            printf("%s: %.2f km2\n", pais1, area1);
            printf("%s: %.2f km2\n", pais2, area2);
            
            if (area1 == area2) {
                printf("Resultado: Empate!\n");
            } else {
                if (area1 > area2) {
                    printf("Resultado: %s venceu!\n", pais1);
                } else {
                    printf("Resultado: %s venceu!\n", pais2);
                }
            }
            break;

        case 3:
            printf("Atributo: PIB\n");
            printf("%s: %.2f trilhoes\n", pais1, pib1);
            printf("%s: %.2f trilhoes\n", pais2, pib2);
            
            if (pib1 == pib2) {
                printf("Resultado: Empate!\n");
            } else {
                if (pib1 > pib2) {
                    printf("Resultado: %s venceu!\n", pais1);
                } else {
                    printf("Resultado: %s venceu!\n", pais2);
                }
            }
            break;

        case 4:
            printf("Atributo: Pontos Turisticos\n");
            printf("%s: %d\n", pais1, pontos1);
            printf("%s: %d\n", pais2, pontos2);
            
            if (pontos1 == pontos2) {
                printf("Resultado: Empate!\n");
            } else {
                if (pontos1 > pontos2) {
                    printf("Resultado: %s venceu!\n", pais1);
                } else {
                    printf("Resultado: %s venceu!\n", pais2);
                }
            }
            break;

        case 5:
            printf("Atributo: Densidade Demografica\n");
            printf("%s: %.2f hab/km2\n", pais1, densidade1);
            printf("%s: %.2f hab/km2\n", pais2, densidade2);
            
            // Regra Invertida: Vence quem tem MENOR densidade
            if (densidade1 == densidade2) {
                printf("Resultado: Empate!\n");
            } else {
                if (densidade1 < densidade2) { 
                    printf("Resultado: %s venceu!\n", pais1);
                } else {
                    printf("Resultado: %s venceu!\n", pais2);
                }
            }
            break;

        default:
            printf("Erro: Opcao invalida! Tente rodar o jogo novamente.\n");
            break;
    }

    printf("=========================================\n");

    return 0;
}