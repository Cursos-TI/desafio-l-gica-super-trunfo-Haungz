#include <stdio.h>
#include <stdlib.h>

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

    // Escolha do primeiro atributo para comparação
    int escolha;
    printf("\n Escolha o atributo para comparação: \n");
    printf("1. População\n 2. Área\n 3. PIB\n 4. Número de Pontos Turísticos\n 5. PIB per capita\n 6. Densidade Populacional (menor valor ganha)\n 7. Super Poder\n");
    scanf("%d", &escolha);

    // Mudança de variáveis de acordo com o atributo escolhido
    float atributo1, atributo2;
    const char *atributoNome;

    switch (escolha) {
    case 1:
        atributoNome = "População";
        atributo1 = populacao;
        atributo2 = populacao2;
        break;
    case 2:
        atributoNome = "Área";
        atributo1 = area;
        atributo2 = area2;
        break;
    case 3:
        atributoNome = "PIB";
        atributo1 = pib;
        atributo2 = pib2;
        break;
    case 4:
        atributoNome = "Número de Pontos Turísticos";
        atributo1 = pontosTuristicos;
        atributo2 = pontosTuristicos2;
        break;
    case 5:
        atributoNome = "PIB per capita";
        atributo1 = pibPerCapita;
        atributo2 = pibPerCapita2;
        break;
    case 6:
        atributoNome = "Densidade Populacional";
        atributo1 = inversoDaDensidade;             // aqui utilizo a variavel inversoDaDensidade pois o menor valor ganha
        atributo2 = inversoDaDensidade2;
        break;
    case 7:
        atributoNome = "Super Poder";
        atributo1 = superPoder;
        atributo2 = superPoder2;
        break;
    default:
        printf("Escolha inválida!\n");
        exit(1);
    }

    // Mudança de variáveis de acordo com o segundo atributo escolhido
    int escolha2;
    printf("\n Escolha o segundo atributo para comparação: \n");
    printf("Atenção: O segundo atributo não pode ser o mesmo que o primeiro!\n");
    printf("1. População\n 2. Área\n 3. PIB\n 4. Número de Pontos Turísticos\n 5. PIB per capita\n 6. Densidade Populacional (menor valor ganha)\n 7. Super Poder\n");
    scanf("%d", &escolha2);

    // Comparação com base na escolha do segundo atributo
    float segundoAtributo1, segundoAtributo2;
    const char *atributoNome2;    

    if (escolha == escolha2) {
        printf("Escolha inválida! O segundo atributo não pode ser o mesmo que o primeiro!\n");
        exit(1);
    } else {
        switch (escolha2) {
        case 1:
            atributoNome2 = "População";
            segundoAtributo1 = populacao;
            segundoAtributo2 = populacao2;
            break;
        case 2:
            atributoNome2 = "Área";
            segundoAtributo1 = area;
            segundoAtributo2 = area2;
            break;
        case 3:
            atributoNome2 = "PIB";
            segundoAtributo1 = pib;
            segundoAtributo2 = pib2;
            break;
        case 4:
            atributoNome2 = "Número de Pontos Turísticos";
            segundoAtributo1 = pontosTuristicos;
            segundoAtributo2 = pontosTuristicos2;
            break;
        case 5:
            atributoNome2 = "PIB per capita";
            segundoAtributo1 = pibPerCapita;
            segundoAtributo2 = pibPerCapita2;
            break;
        case 6:
            atributoNome2 = "Densidade Populacional";
            segundoAtributo1 = inversoDaDensidade;
            segundoAtributo2 = inversoDaDensidade2;
            break;
        case 7:
            atributoNome2 = "Super Poder";
            segundoAtributo1 = superPoder;
            segundoAtributo2 = superPoder2;
            break;
        default:
            printf("Escolha inválida!\n");
            exit(1);
        }
    }

    // Declaração do vencedor da primeira rodada
    int pontuacaoCarta1 = 0;
    int pontuacaoCarta2 = 0;

    printf("\nComparação das cartas (Primeiro atributo: %s):\n", atributoNome);
    if (escolha == 6) {        // tive que colocar esse if pois a densidade não é um atributo que pode ser comparado junto com os demais, já que o menor valor é quem ganha
        printf("Carta 01 - %s (%s): %.2f\n", nomeDaCidade, estado, densidadePopulacional);
        printf("Carta 02 - %s (%s): %.2f\n", nomeDaCidade2, estado2, densidadePopulacional2);
    } else {
        printf("Carta 01 - %s (%s): %.2f\n", nomeDaCidade, estado, atributo1);
        printf("Carta 02 - %s (%s): %.2f\n", nomeDaCidade2, estado2, atributo2);
    }

    if (atributo1 > atributo2) {
        printf("Resultado: Carta 01 (%s) venceu a rodada!\n", nomeDaCidade);
        pontuacaoCarta1++;
    } else if (atributo1 < atributo2) {
        printf("Resultado: Carta 02 (%s) venceu a rodada!\n", nomeDaCidade2);
        pontuacaoCarta2++;
    } else {
        printf("Resultado: Empate! O atributo das cartas é igual!\n");
    }

    // Comparação do segundo atributo escolhido
    printf("\nComparação das cartas (Segundo atributo: %s):\n", atributoNome2);
    if (escolha2 == 6) {
        printf("Carta 01 - %s (%s): %.2f\n", nomeDaCidade, estado, densidadePopulacional);
        printf("Carta 02 - %s (%s): %.2f\n", nomeDaCidade2, estado2, densidadePopulacional2);
    } else {
        printf("Carta 01 - %s (%s): %.2f\n", nomeDaCidade, estado, segundoAtributo1);
        printf("Carta 02 - %s (%s): %.2f\n", nomeDaCidade2, estado2, segundoAtributo2);
    }

    if (segundoAtributo1 > segundoAtributo2) {
        printf("Resultado: Carta 01 (%s) venceu a rodada!\n", nomeDaCidade);
        pontuacaoCarta1++;
    } else if (segundoAtributo1 < segundoAtributo2) {
        printf("Resultado: Carta 02 (%s) venceu a rodada!\n", nomeDaCidade2);
        pontuacaoCarta2++;
    } else {
        printf("Resultado: Empate! O atributo das cartas é igual!\n");
    }

    printf("\nResultado Final:\n");
    printf("Carta 01 (%s) - Pontuação: %d\n", nomeDaCidade, pontuacaoCarta1);
    printf("Carta 02 (%s) - Pontuação: %d\n", nomeDaCidade2, pontuacaoCarta2);

    if (pontuacaoCarta1 > pontuacaoCarta2) {
        printf("Carta 01 (%s) venceu a partida!\n", nomeDaCidade);
    } else if (pontuacaoCarta1 < pontuacaoCarta2) {
        printf("Carta 02 (%s) venceu a partida!\n", nomeDaCidade2);
    } else {
        printf("Empate! As cartas possuem a mesma pontuação!\n");
    }
    
    return 0;
}