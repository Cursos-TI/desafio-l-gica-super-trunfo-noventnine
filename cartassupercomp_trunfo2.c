#include <stdio.h>

int main() {
    // Declaração das variáveis
    char estado1[] = "Amazonas";
    char codigo1[] = "A01";
    char nomeCidade1[] = "Manaus";
    int populacao1 = 1400000;
    float area1 = 11401.0;
    float pib1 = 53.0;
    int pontosTuristicos1 = 110;

    char estado2[] = "Acre";
    char codigo2[] = "A02";
    char nomeCidade2[] = "Rio Branco";
    int populacao2 = 343000;
    float area2 = 152.5;
    float pib2 = 2.3;
    int pontosTuristicos2 = 53;

    // Cálculo dos indicadores
    float densidade1 = populacao1 / area1;
    float pibPerCapita1 = (pib1 / populacao1) * 1000; // Convertendo para milhares

    float densidade2 = populacao2 / area2;
    float pibPerCapita2 = (pib2 / populacao2) * 1000; // Convertendo para milhares

    // Exibição das informações
    printf("\n=== Informações das Cartas ===\n");

    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f mil reais\n", pibPerCapita1);

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f mil reais\n", pibPerCapita2);

    // Comparação de PIB per Capita
    printf("\n=== Comparação: PIB per Capita ===\n");
    printf("Carta 1 - %s: %.2f mil reais\n", nomeCidade1, pibPerCapita1);
    printf("Carta 2 - %s: %.2f mil reais\n", nomeCidade2, pibPerCapita2);

    if (pibPerCapita1 > pibPerCapita2) {
        printf("\nResultado: A Carta 1 (%s) venceu!\n", nomeCidade1);
    } else if (pibPerCapita2 > pibPerCapita1) {
        printf("\nResultado: A Carta 2 (%s) venceu!\n", nomeCidade2);
    } else {
        printf("\nResultado: Empate!\n");
    }

    return 0;
}