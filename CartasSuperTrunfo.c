#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    //Declaração das variaveis da primeira carta do jogo

     char estado_1;
     char codigoCarta_1[5];
     char nomeCidade_1[30];
     int populacao_1;
     float areaCidade_1;
     float pibCidade_1;
     int pontosTuristicos_1;

    //Declaração das variaveis da segunda carta do jogo

     char estado_2;
     char codigoCarta_2[5];
     char nomeCidade_2[30];
     int populacao_2;
     float areaCidade_2;
     float pibCidade_2;
     int pontosTuristicos_2;

    // Cadastro da ptimeira carta do jogo
    
    printf("Digite os dados da primeira carta do jogo: \n");
    printf("\n");

    printf("Digite o estado:");
    scanf("%c",&estado_1);

    printf("Digite o Codigo da carta:");
    scanf("%s",&codigoCarta_1);

    printf("digite o nome da cidade:");
    scanf("%s",&nomeCidade_1);

    printf("Digite a população da cidade:");
    scanf("%d",&populacao_1);

    printf("Digite a área  da cidade:");
    scanf("%f",&areaCidade_1);

    printf("Digite o PIB da cidade:");
    scanf("%f",&pibCidade_1);

    printf("Digite a quantidade de pontos turisticos da cidade:");
    scanf("%d",&pontosTuristicos_1);
    
    //Cadastro da segunda carta do jogo

    printf("\n");

    printf("Digite os dados da segunda carta do jogo: \n");
    printf("\n");

    printf("Digite o estado:");
    scanf("%c",&estado_2);

    printf("Digite o Codigo da carta:");
    scanf("%s",&codigoCarta_2);

    printf("digite o nome da cidade:");
    scanf("%s",&nomeCidade_2);

    printf("Digite a população da cidade:");
    scanf("%d",&populacao_2);

    printf("Digite a área  da cidade:");
    scanf("%f",&areaCidade_2);

    printf("Digite o PIB da cidade:");
    scanf("%f",&pibCidade_2);

    printf("Digite a quantidade de pontos turisticos da cidade:");
    scanf("%d",&pontosTuristicos_2);

    // Exibição dos Dados da primeira carta do jogo

    printf("\n");

    printf("Carta 1: \n");
    printf("\n");

    printf("Estado: %c \n", estado_1);

    printf("Código: %s \n", codigoCarta_1);

    printf("Nome da Cidade: %s \n", nomeCidade_1);

    printf("População: %d \n", populacao_1);

    printf("Área: %.2f km² \n", areaCidade_1);

    printf("PIB: %.2f bilhões de reais \n", pibCidade_1);

    printf("Número de Pontos Turísticos: %d \n", pontosTuristicos_1);

    //Exibição dos Dados da segunda carta do jogo

     printf("\n");

    printf("Carta 2: \n");
    printf("\n");

    printf("Estado: %c \n", estado_2);

    printf("Código: %s \n", codigoCarta_2);

    printf("Nome da Cidade: %s \n", nomeCidade_2);

    printf("População: %d \n", populacao_2);

    printf("Área: %.2f km² \n", areaCidade_2);

    printf("PIB: %.2f bilhões de reais \n", pibCidade_2);

    printf("Número de Pontos Turísticos: %d \n", pontosTuristicos_2);


    
    return 0;
}
