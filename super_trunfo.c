#include <stdio.h>

int main() {
    // ===== CARTAS PRÉ-DEFINIDAS =====
    char pais1[] = "Brasil";
    unsigned long int populacao1 = 203000000;
    float area1 = 8515767.04;
    float pib1 = 10.9;
    int pontos1 = 100;
    float densidade1 = (float)populacao1 / area1;

    char pais2[] = "Argentina";
    unsigned long int populacao2 = 46044703;
    float area2 = 2780400.00;
    float pib2 = 3.4;
    int pontos2 = 60;
    float densidade2 = (float)populacao2 / area2;

    int atributo1, atributo2;
    float valor1_c1 = 0, valor1_c2 = 0;
    float valor2_c1 = 0, valor2_c2 = 0;
    
    char *nome_attr1 = "";
    char *nome_attr2 = "";

    printf("=== SUPER TRUNFO - NIVEL MESTRE ===\n");

    // ===== PRIMEIRO ATRIBUTO =====
    printf("\nEscolha o PRIMEIRO atributo:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("Opcao: ");
    scanf("%d", &atributo1);

    switch (atributo1) {
        case 1: valor1_c1 = populacao1; valor1_c2 = populacao2; nome_attr1 = "Populacao"; break;
        case 2: valor1_c1 = area1; valor1_c2 = area2; nome_attr1 = "Area"; break;
        case 3: valor1_c1 = pib1; valor1_c2 = pib2; nome_attr1 = "PIB"; break;
        case 4: valor1_c1 = pontos1; valor1_c2 = pontos2; nome_attr1 = "Pontos Turisticos"; break;
        case 5: valor1_c1 = densidade1; valor1_c2 = densidade2; nome_attr1 = "Densidade Demografica"; break;
        default: printf("Opcao invalida!\n"); return 1;
    }

    // ===== SEGUNDO ATRIBUTO (DINÂMICO) =====
    printf("\nEscolha o SEGUNDO atributo (diferente do primeiro):\n");

    for(int i = 1; i <= 5; i++) {
        if(i != atributo1) {
            switch(i) {
                case 1: printf("1 - Populacao\n"); break;
                case 2: printf("2 - Area\n"); break;
                case 3: printf("3 - PIB\n"); break;
                case 4: printf("4 - Pontos Turisticos\n"); break;
                case 5: printf("5 - Densidade Demografica\n"); break;
            }
        }
    }

    printf("Opcao: ");
    scanf("%d", &atributo2);

    if(atributo2 == atributo1) {
        printf("Erro: voce escolheu o mesmo atributo!\n");
        return 1;
    }

    switch (atributo2) {
        case 1: valor2_c1 = populacao1; valor2_c2 = populacao2; nome_attr2 = "Populacao"; break;
        case 2: valor2_c1 = area1; valor2_c2 = area2; nome_attr2 = "Area"; break;
        case 3: valor2_c1 = pib1; valor2_c2 = pib2; nome_attr2 = "PIB"; break;
        case 4: valor2_c1 = pontos1; valor2_c2 = pontos2; nome_attr2 = "Pontos Turisticos"; break;
        case 5: valor2_c1 = densidade1; valor2_c2 = densidade2; nome_attr2 = "Densidade Demografica"; break;
        default: printf("Opcao invalida!\n"); return 1;
    }

    // ===== COMPARAÇÕES INDIVIDUAIS E EXIBIÇÃO =====
    printf("\n===== RESULTADO DA BATALHA =====\n");
    
    // Comparação Atributo 1
    printf("\n1. %s:\n", nome_attr1);
    printf("%s: %.2f\n", pais1, valor1_c1);
    printf("%s: %.2f\n", pais2, valor1_c2);
    if (valor1_c1 == valor1_c2) {
        printf("Resultado: Empate neste atributo!\n");
    } else {
        int venceu_c1 = (atributo1 == 5) ? (valor1_c1 < valor1_c2) : (valor1_c1 > valor1_c2);
        printf("Vencedor: %s\n", venceu_c1 ? pais1 : pais2);
    }

    // Comparação Atributo 2
    printf("\n2. %s:\n", nome_attr2);
    printf("%s: %.2f\n", pais1, valor2_c1);
    printf("%s: %.2f\n", pais2, valor2_c2);
    if (valor2_c1 == valor2_c2) {
        printf("Resultado: Empate neste atributo!\n");
    } else {
        int venceu_c1 = (atributo2 == 5) ? (valor2_c1 < valor2_c2) : (valor2_c1 > valor2_c2);
        printf("Vencedor: %s\n", venceu_c1 ? pais1 : pais2);
    }

    // ===== SOMA DOS ATRIBUTOS =====
    float soma1 = valor1_c1 + valor2_c1;
    float soma2 = valor1_c2 + valor2_c2;

    printf("\n===== SOMA FINAL =====\n");
    printf("%s - Soma: %.2f\n", pais1, soma1);
    printf("%s - Soma: %.2f\n", pais2, soma2);

    if (soma1 == soma2) {
        printf("Resultado Final: Empate!\n");
    } else {
        printf("VENCEDOR FINAL: %s\n", (soma1 > soma2) ? pais1 : pais2);
    }

    return 0;
}