#include <stdio.h>

int main (){
char estado1[2], estado2[2], codigo1[4], codigo2[4], cidade1[40], cidade2[40];
int pop1, pop2, turis1, turis2;
float area1, area2, pib1, pib2;

    printf("Voce irá digitar os dados das duas cartas em sequencia!\n");
    printf("=======================================================\n");
    printf("Digite o ESTADO da carta.(Escolha entre A-H)\nPrimeira carta:  ");
    scanf(" %1s", estado1);
    printf("Segunda carta: ");
    scanf(" %s", estado2);
    printf("=======================================================\n");
    printf("Digite o CODIGO da carta, com dois digitos:\nPrimeira carta: ");
    scanf(" %s", codigo1);
    printf("Segunda carta: ");
    scanf(" %s", codigo2);
    printf("=======================================================\n");
    printf("Qual o nome da cidade?\nPrimeira carta: ");
    scanf(" %s", cidade1);
    printf("Segunda carta: ");
    scanf(" %s", cidade2);
    printf("=======================================================\n");
    printf("O numero de habitantes.\nPrimeira carta: ");
    scanf("%d", &pop1);
    printf("Segunda carta: ");
    scanf("%d", &pop2);
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

    /*Exibição dos dados das cartas cadastradas*/
    printf("=======================================================\n");
    printf("======Segue abaixo os dados das cartas cadastradas=====\n");
    printf("=======================================================\n");
    printf("===============Dados da primeira carta=================\n");
    printf("=======================================================\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s%s\n",estado1, codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d\n",pop1);
    printf("Área: %.2f km²\n",area1);
    printf("PIB: R$ %.2f bilhões\n",pib1);
    printf("Pontos turisticos: %d\n",turis1);
    printf("=======================================================\n");
    printf("================Dados da segunda carta=================\n");
    printf("=======================================================\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s%s\n",estado2, codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n",pop2);
    printf("Área: %.2f km²\n",area2);
    printf("PIB: R$ %.2f bilhões\n",pib2);
    printf("Pontos turisticos: %d\n",turis2);
    printf("=======================================================\n");
    printf("=======================================================\n");
    return 0;
}