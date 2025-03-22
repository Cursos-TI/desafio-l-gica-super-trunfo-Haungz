#include <stdio.h>

int main() {

    // Declaração de variáveis da carta 01
    char estado[4]; 
    char codigoDaCarta[5];
    char nomeDaCidade[50] = "";
    unsigned long int populacao;
    int pontosTuristicos;
    float area, pib, densidadePopulacional, pibPerCapita,superPoder, inversoDaDensidade;

    // Declaração de variáveis da carta 02
    char estado2[4];
    char codigoDaCarta2[5];
    char nomeDaCidade2[50] = "";
    unsigned long int populacao2;
    int pontosTuristicos2;
    float area2, pib2, densidadePopulacional2, pibPerCapita2,superPoder2, inversoDaDensidade2;

    // Solicitação de informações para a carta 01
    printf("Desafio Super Trunfo - Países\n");
    printf("Cadastro da carta 01\n");

    printf("Digite o estado (Ex: SP, RJ, MG): ");
    scanf("%s", &estado);

    printf("Digite o codigo da carta (Estado + numero de 01 a 04): ");
    scanf("%s", &codigoDaCarta);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", &nomeDaCidade);

    printf("Digite a populacao: ");
    scanf("%lu", &populacao);

    printf("Digite a area (em km²): ");
    scanf("%f", &area);

    printf("Digite o PIB: ");
    scanf("%f", &pib);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos);

    // Solicitação de informações para a carta 02
    printf("Cadastro da carta 02\n");

    printf("Digite o estado (Ex: SP, RJ, MG): ");
    scanf("%s", &estado2);

    printf("Digite o codigo da carta (Estado + numero de 01 a 04): ");
    scanf("%s", &codigoDaCarta2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", &nomeDaCidade2);

    printf("Digite a populacao: ");
    scanf("%lu", &populacao2);

    printf("Digite a area (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculo da densidade populacional e PIB per capita da carta 01
    densidadePopulacional = (float) populacao / area;
    pibPerCapita = (float) pib / populacao;

    // Cálculo da densidade populacional e PIB per capita da carta 02
    densidadePopulacional2 = (float) populacao2 / area2;
    pibPerCapita2 = (float) pib2 / populacao2;

    // Cálculo do inverso da densidade populacional e superpoder da carta 01 (menor densidade é melhor)
    inversoDaDensidade = 1 / densidadePopulacional;
    superPoder = (float) populacao + area + pib + pontosTuristicos + pibPerCapita + inversoDaDensidade;

    // Cálculo do inverso da densidade populacional e superpoder da carta 02
    inversoDaDensidade2 = 1 / densidadePopulacional2;
    superPoder2 = (float) populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + inversoDaDensidade2;

    // Informações da carta 01
    printf("\nInformações da carta 01:\n");
    printf("Estado: %s\n", estado);
    printf("Código da Carta: %s\n", codigoDaCarta);
    printf("Nome da Cidade: %s\n", nomeDaCidade);
    printf("População: %lu\n", populacao);
    printf("Área: %.2fkm²\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidadePopulacional);
    printf("PIB per capita: %.2f\n", pibPerCapita);
    printf("Inverso da Densidade: %.2f\n", inversoDaDensidade);
    printf("SuperPoder: %.2f\n", superPoder);

    // Informações da carta 02
    printf("\nInformações da carta 02:\n");
    printf("Estado: %s\n", estado2);
    printf("Código da Carta: %s\n", codigoDaCarta2);
    printf("Nome da Cidade: %s\n", nomeDaCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2fkm²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidadePopulacional2);
    printf("PIB per capita: %.2f\n", pibPerCapita2);
    printf("Inverso da Densidade: %.2f\n", inversoDaDensidade2);
    printf("SuperPoder: %.2f\n", superPoder2);

    // Comparação das cartas (por enquanto apenas um exemplo simples)
    printf("\nComparação das cartas (Atributo: Super Poder):\n");
    printf("Carta 01 - %s (%s): %.2f\n", nomeDaCidade, estado, superPoder);
    printf("Carta 02 - %s (%s): %.2f\n", nomeDaCidade2, estado2, superPoder2);
    if (superPoder > superPoder2) {
        printf("Resultado: Carta 01 (%s) venceu!\n,", nomeDaCidade);
    } else if (superPoder < superPoder2) {
        printf("Resultado: Carta 02 (%s) venceu!\n,", nomeDaCidade2);
    } else {
        printf("O atributo das cartas é igual!\n");
    }

    return 0;
}