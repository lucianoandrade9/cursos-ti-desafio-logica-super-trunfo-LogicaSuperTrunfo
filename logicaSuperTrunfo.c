#include <stdio.h>
#include <string.h>

struct Carta {
    char estado[50];
    char codigo[10];
    char nomecidade[50];
    int populacao;
    float area;
    float pib;
    int pontosturisticos;
    float densidadepopulacional;
    float pibPerCapita;
};

int main() {
    struct Carta carta1 = {
        .estado = "SP",
        .codigo = "001",
        .nomecidade = "São Paulo",
        .populacao = 12300000,
        .area = 1521.11,
        .pib = 750000000000.0,
        .pontosturisticos = 25
    };

    struct Carta carta2 = {
        .estado = "RJ",
        .codigo = "002",
        .nomecidade = "Rio de Janeiro",
        .populacao = 6718903,
        .area = 1182.3,
        .pib = 360000000000.0,
        .pontosturisticos = 30
    };

    carta1.densidadepopulacional = carta1.populacao / carta1.area;
    carta2.densidadepopulacional = carta2.populacao / carta2.area;

    carta1.pibPerCapita = carta1.pib / carta1.populacao;
    carta2.pibPerCapita = carta2.pib / carta2.populacao;

    printf("Comparação de cartas (PIB per capita):\n\n");
    printf("carta 1 - %s (%s): R$ %.2f\n", carta1.nomecidade, carta1.estado, carta1.pibPerCapita);
    printf("carta 2 - %s (%s): R$ %.2f\n", carta2.nomecidade, carta2.estado, carta2.pibPerCapita);

    if (carta1.pibPerCapita > carta2.pibPerCapita) {
        printf("\nresultado: carta1 (%s) venceu\n", carta1.nomecidade);
    } else if (carta2.pibPerCapita > carta1.pibPerCapita) {
        printf("\nresultado: carta2 (%s) venceu\n", carta2.nomecidade);
    } else {
        printf("\nresultado: empate!\n");
    }

    return 0;
}
