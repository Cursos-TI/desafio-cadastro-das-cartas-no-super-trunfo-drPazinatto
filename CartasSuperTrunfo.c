#include <stdio.h>

int main() {
    char estado1[3], estado2[3], codigo1[4], codigo2[4], cidade1[40], cidade2[40];
    unsigned long int pop1, pop2;
    int turis1, turis2;
    float area1, area2, pib1, pib2, dens1, dens2, capita1, capita2;

    printf("Voce irá digitar os dados das duas cartas em sequencia!\n");
    printf("=======================================================\n");
    printf("Digite o ESTADO da carta.(Escolha entre A-H)\nPrimeira carta:  ");
    scanf(" %2s", estado1);
    printf("Segunda carta: ");
    scanf(" %2s", estado2);
    printf("=======================================================\n");
    printf("Digite o CODIGO da carta, com dois digitos:\nPrimeira carta: ");
    scanf(" %3s", codigo1);
    printf("Segunda carta: ");
    scanf(" %3s", codigo2);
    printf("=======================================================\n");
    printf("Qual o nome da cidade?\nPrimeira carta: ");
    scanf(" %39s", cidade1);
    printf("Segunda carta: ");
    scanf(" %39s", cidade2);
    printf("=======================================================\n");
    printf("O numero de habitantes.\nPrimeira carta: ");
    scanf("%lu", &pop1);
    printf("Segunda carta: ");
    scanf("%lu", &pop2);
    printf("=======================================================\n");
    printf("Qual o tamanho da cidade em área, em km².\nPrimeira carta: ");
    scanf("%f", &area1);
    printf("Segunda carta: ");
    scanf("%f", &area2);
    printf("=======================================================\n");
    printf("Qual o PIB da cidade, em bilhões de reais.\nPrimeira carta: ");
    scanf("%f", &pib1);
    printf("Segunda carta: ");
    scanf("%f", &pib2);
    printf("=======================================================\n");
    printf("Quantos pontos turisticos ela tem?\nPrimeira carta: ");
    scanf("%d", &turis1);
    printf("Segunda carta: ");
    scanf("%d", &turis2);

    /*Calculo de densidade populacional*/
    dens1 = (float)pop1 / area1;
    dens2 = (float)pop2 / area2;
    /*Calculo de renda per capita*/
    capita1 = pib1 / pop1;
    capita2 = pib2 / pop2;

    /*Exibição dos dados das cartas cadastradas*/
    printf("=======================================================\n");
    printf("======Segue abaixo os dados das cartas cadastradas=====\n");
    printf("=======================================================\n");
    printf("===============Dados da primeira carta=================\n");
    printf("=======================================================\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s%s\n", estado1, codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %lu\n", pop1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f \n", pib1);
    printf("Pontos turisticos: %d\n", turis1);
    printf("Densidade populacional: %.2f habitantes/km²\n", dens1);
    printf("Pib PerCapita: R$ %.2f \n", capita1);
    printf("=======================================================\n");
    printf("================Dados da segunda carta=================\n");
    printf("=======================================================\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s%s\n", estado2, codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %lu\n", pop2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f \n", pib2);
    printf("Pontos turisticos: %d\n", turis2);
    printf("Densidade populacional: %.2f habitantes/km²\n", dens2);
    printf("Pib PerCapita: R$ %.2f \n", capita2);
    printf("=======================================================\n");
    printf("=======================================================\n");

    // Comparação de cartas
    printf("\nComparacao de cartas:\n");
    if (pop1 > pop2) {
        printf("População: %s\n", cidade1);
    } else {
        printf("População: %s\n", cidade2);
    }
    if (area1 > area2) {
        printf("Área: %s\n", cidade1);
    } else {
        printf("Área: %s\n", cidade2);
    }
    if (pib1 > pib2) {
        printf("PIB: %s\n", cidade1);
    } else {
        printf("PIB: %s\n", cidade2);
    }
    if (turis1 > turis2) {
        printf("Pontos Turísticos: %s\n", cidade1);
    } else {
        printf("Pontos Turísticos: %s\n", cidade2);
    }
    if (dens1 < dens2) {
        printf("Densidade Populacional: %s\n", cidade1); // Menor densidade vence
    } else {
        printf("Densidade Populacional: %s\n", cidade2);
    }
    if (capita1 > capita2) {
        printf("PIB Per Capita: %s\n", cidade1);
    } else {
        printf("PIB Per Capita: %s\n", cidade2);
    }

    // Super Poder
    float superPoder1 = (float)estado1[0] + codigo1[0] + cidade1[0] + pop1 + area1 + pib1 + turis1 + (1 / dens1);
    float superPoder2 = (float)estado2[0] + codigo2[0] + cidade2[0] + pop2 + area2 + pib2 + turis2 + (1 / dens2);

    if (superPoder1 > superPoder2) {
        printf("Super Poder: %s\n", cidade1);
    } else {
        printf("Super Poder: %s\n", cidade2);
    }

    return 0;
}