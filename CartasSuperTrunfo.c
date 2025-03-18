#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    // Declaração de variáveis da carta 01
    char estado[4]; 
    char codigoDaCarta[5];
    char nomeDaCidade[50] = "";
    int populacao, pontosTuristicos;
    float area, pib;

    // Declaração de variáveis da carta 02
    char estado2[4];
    char codigoDaCarta2[5];
    char nomeDaCidade2[50] = "";
    int populacao2, pontosTuristicos2;
    float area2, pib2;

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
    scanf("%d", &populacao);

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
    scanf("%d", &populacao2);

    printf("Digite a area (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // Informações da carta 01
    printf("\nInformações da carta 01:\n");
    printf("Estado: %s\n", estado);
    printf("Código da Carta: %s\n", codigoDaCarta);
    printf("Nome da Cidade: %s\n", nomeDaCidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2fkm²\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos);

    // Informações da carta 02
    printf("\nInformações da carta 02:\n");
    printf("Estado: %s\n", estado2);
    printf("Código da Carta: %s\n", codigoDaCarta2);
    printf("Nome da Cidade: %s\n", nomeDaCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2fkm²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
