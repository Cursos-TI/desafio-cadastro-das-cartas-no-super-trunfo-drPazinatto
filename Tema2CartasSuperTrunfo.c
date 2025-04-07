#include <stdio.h>
#include <string.h>
#include <stdlib.h> 

// Definição de uma estrutura para representar os dados de um país (carta)
typedef struct {
    char estado[3];
    char codigo[4];
    char nome[40];
    unsigned long int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadeDemografica;
    float pibPerCapita;
} Carta;

// Função para ler os dados de uma carta
void lerCarta(Carta *carta, int numeroCarta) {
    printf("===============Dados da %dª carta===============\n", numeroCarta);
    printf("Digite o ESTADO da carta (Escolha entre A-H): ");
    scanf(" %2s", carta->estado);
    printf("Digite o CODIGO da carta, com dois digitos: ");
    scanf(" %3s", carta->codigo);
    printf("Qual o nome da cidade? ");
    scanf(" %39s", carta->nome);
    printf("O numero de habitantes: ");
    scanf("%lu", &carta->populacao);
    printf("Qual o tamanho do cidade em área, em km²: ");
    scanf("%f", &carta->area);
    printf("Qual o PIB da cidade, em bilhões de reais: ");
    scanf("%f", &carta->pib);
    printf("Quantos pontos turisticos ele tem? ");
    scanf("%d", &carta->pontosTuristicos);
    printf("=======================================================\n");

    // Calcular densidade e PIB per capita ao ler os dados
    carta->densidadeDemografica = (carta->area > 0) ? (float)carta->populacao / carta->area : 0.0;
    carta->pibPerCapita = (carta->populacao > 0) ? carta->pib / carta->populacao : 0.0;
}

// Função para exibir os dados de uma carta
void exibirCarta(Carta carta, int numeroCarta) {
    printf("===============Dados da %dª carta=================\n", numeroCarta);
    printf("=======================================================\n");
    printf("Estado: %s\n", carta.estado);
    printf("Código: %s%s\n", carta.estado, carta.codigo);
    printf("Nome do país: %s\n", carta.nome);
    printf("População: %lu\n", carta.populacao);
    printf("Área: %.2f km²\n", carta.area);
    printf("PIB: R$ %.2f \n", carta.pib);
    printf("Pontos turisticos: %d\n", carta.pontosTuristicos);
    printf("Densidade populacional: %.2f habitantes/km²\n", carta.densidadeDemografica);
    printf("Pib PerCapita: R$ %.2f \n", carta.pibPerCapita);
    printf("=======================================================\n");
}

// Função para comparar as cartas com base no atributo escolhido
void compararAtributo(Carta carta1, Carta carta2, int escolha) {
    printf("\nComparando por: ");
    switch (escolha) {
        case 1:
            printf("População\n");
            printf("%s: %lu\n", carta1.nome, carta1.populacao);
            printf("%s: %lu\n", carta2.nome, carta2.populacao);
            if (carta1.populacao > carta2.populacao) {
                printf("%s vence!\n", carta1.nome);
            } else if (carta2.populacao > carta1.populacao) {
                printf("%s vence!\n", carta2.nome);
            } else {
                printf("Empate!\n");
            }
            break;
        case 2:
            printf("Área\n");
            printf("%s: %.2f km²\n", carta1.nome, carta1.area);
            printf("%s: %.2f km²\n", carta2.nome, carta2.area);
            if (carta1.area > carta2.area) {
                printf("%s vence!\n", carta1.nome);
            } else if (carta2.area > carta1.area) {
                printf("%s vence!\n", carta2.nome);
            } else {
                printf("Empate!\n");
            }
            break;
        case 3:
            printf("PIB\n");
            printf("%s: R$ %.2f bilhões\n", carta1.nome, carta1.pib);
            printf("%s: R$ %.2f bilhões\n", carta2.nome, carta2.pib);
            if (carta1.pib > carta2.pib) {
                printf("%s vence!\n", carta1.nome);
            } else if (carta2.pib > carta1.pib) {
                printf("%s vence!\n", carta2.nome);
            } else {
                printf("Empate!\n");
            }
            break;
        case 4:
            printf("Pontos Turísticos\n");
            printf("%s: %d\n", carta1.nome, carta1.pontosTuristicos);
            printf("%s: %d\n", carta2.nome, carta2.pontosTuristicos);
            if (carta1.pontosTuristicos > carta2.pontosTuristicos) {
                printf("%s vence!\n", carta1.nome);
            } else if (carta2.pontosTuristicos > carta1.pontosTuristicos) {
                printf("%s vence!\n", carta2.nome);
            } else {
                printf("Empate!\n");
            }
            break;
        case 5:
            printf("Densidade Demográfica\n");
            printf("%s: %.2f habitantes/km²\n", carta1.nome, carta1.densidadeDemografica);
            printf("%s: %.2f habitantes/km²\n", carta2.nome, carta2.densidadeDemografica);
            if (carta1.densidadeDemografica < carta2.densidadeDemografica) {
                printf("%s vence!\n", carta1.nome);
            } else if (carta2.densidadeDemografica < carta1.densidadeDemografica) {
                printf("%s vence!\n", carta2.nome);
            } else {
                printf("Empate!\n");
            }
            break;
        default:
            printf("Opção inválida!\n");
    }
    printf("=======================================================\n");
}

int main() {
    Carta carta1, carta2;
    int escolha;
    char continuar = 's';

    printf("Bem-vindo ao Super Trunfo de Países!\n");
    printf("=======================================================\n");

    // Leitura dos dados das duas cartas
    lerCarta(&carta1, 1);
    lerCarta(&carta2, 2);

    // Exibição dos dados das cartas cadastradas
    printf("======Segue abaixo os dados das cartas cadastradas=====\n");
    exibirCarta(carta1, 1);
    exibirCarta(carta2, 2);

    // Menu interativo para comparação
    while (continuar == 's' || continuar == 'S') {
        printf("\nEscolha o atributo para comparar as cartas:\n");
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Pontos Turísticos\n");
        printf("5 - Densidade Demográfica\n");
        printf("0 - Sair\n");
        printf("Sua escolha: ");
        scanf("%d", &escolha);
        printf("=======================================================\n");

        switch (escolha) {
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
                compararAtributo(carta1, carta2, escolha);
                break;
            case 0:
                continuar = 'n';
                printf("Obrigado por jogar!\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
                printf("=======================================================\n");
        }
    }

    return 0;
}