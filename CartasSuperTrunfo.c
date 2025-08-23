#include <stdio.h>
#include <string.h>


int main() {
    //Declaração das variaveis da primeira carta do jogo

     char estado_1;
     char codigoCarta_1[5];
     char nomeCidade_1[30];
     unsigned long int populacao_1;
     float areaCidade_1;
     float pibCidade_1;
     int pontosTuristicos_1, opcao;
     float densidadePopulacional_1;
     float pibPerCapita_1;
     float superPoder_1;

    //Declaração das variaveis da segunda carta do jogo

     char estado_2;
     char codigoCarta_2[5];
     char nomeCidade_2[30];
     unsigned long int populacao_2;
     float areaCidade_2;
     float pibCidade_2;
     int pontosTuristicos_2;
     float densidadePopulacional_2;
     float pibPerCapita_2;
     float superPoder_2;

    // Cadastro da ptimeira carta do jogo
    
    printf("Digite os dados da primeira carta do jogo: \n");
    printf("\n");

    printf("Digite o estado:");
    scanf(" %c",&estado_1);

    printf("Digite o Codigo da carta:");
    scanf(" %s",codigoCarta_1);

    printf("digite o nome da cidade:");
    getchar();
    fgets(nomeCidade_1, sizeof(nomeCidade_1), stdin);
    nomeCidade_1[strcspn(nomeCidade_1, "\n")] = 0;

    printf("Digite a população da cidade:");
    scanf("%lu",&populacao_1);

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
    scanf(" %c",&estado_2);

    printf("Digite o Codigo da carta:");
    scanf("%s",codigoCarta_2);

    printf("digite o nome da cidade:");
    getchar();
    fgets(nomeCidade_2, sizeof(nomeCidade_2), stdin);
    nomeCidade_2[strcspn(nomeCidade_2, "\n")] = 0;

    printf("Digite a população da cidade:");
    scanf("%lu",&populacao_2);

    printf("Digite a área  da cidade:");
    scanf("%f",&areaCidade_2);

    printf("Digite o PIB da cidade:");
    scanf("%f",&pibCidade_2);

    printf("Digite a quantidade de pontos turisticos da cidade:");
    scanf("%d",&pontosTuristicos_2);

    //Calculo da densidade populacional e pib per capita da primeira carta

    densidadePopulacional_1 = (float)populacao_1 / areaCidade_1;
    pibPerCapita_1 = (pibCidade_1 * 1000000000.0) / populacao_1;

    //Calculo da densidade populacional e pib per capita da segunda carta

    densidadePopulacional_2 = (float)populacao_2 / areaCidade_2;
    pibPerCapita_2 = (pibCidade_2 * 1000000000.0) / populacao_2;

    //Calculo do super poder da primeira carta do jogo

    superPoder_1 = (float)populacao_1 + areaCidade_1 + pibCidade_1 + (float)pontosTuristicos_1 + pibPerCapita_1 + (1 / densidadePopulacional_1);


    //calculo do super poder da segunda carta do jogo

    superPoder_2 = (float)populacao_2 + areaCidade_2 + pibCidade_2 + (float)pontosTuristicos_2 + pibPerCapita_2 + (1 / densidadePopulacional_2);


    // Exibição dos Dados da primeira carta do jogo

    printf("\n");

    printf("Carta 1: \n");
    printf("\n");

    printf("Estado: %c \n", estado_1);

    printf("Código: %s \n", codigoCarta_1);

    printf("Nome da Cidade: %s \n", nomeCidade_1);

    printf("População: %lu \n", populacao_1);

    printf("Área: %.2f km² \n", areaCidade_1);

    printf("PIB: %.2f bilhões de reais \n", pibCidade_1);

    printf("Número de Pontos Turísticos: %d \n", pontosTuristicos_1);

    printf("Densidade Populacional: %.2f hab/km² \n", densidadePopulacional_1);

    printf("PIB per Capita: %.2f reais \n", pibPerCapita_1);

    //Exibição dos Dados da segunda carta do jogo

     printf("\n");

    printf("Carta 2: \n");
    printf("\n");

    printf("Estado: %c \n", estado_2);

    printf("Código: %s \n", codigoCarta_2);

    printf("Nome da Cidade: %s \n", nomeCidade_2);

    printf("População: %lu \n", populacao_2);

    printf("Área: %.2f km² \n", areaCidade_2);

    printf("PIB: %.2f bilhões de reais \n", pibCidade_2);

    printf("Número de Pontos Turísticos: %d \n", pontosTuristicos_2);

    printf("Densidade Populacional: %.2f hab/km² \n", densidadePopulacional_2);

    printf("PIB per Capita: %.2f reais \n", pibPerCapita_2);

    //Comparação das cartas do jogo

    printf("\n");
    
    printf("Escolha o atributo da carta que você quer comparar: \n");
    printf("Cidade carta 1: %s - Cidade carta 2: %s", nomeCidade_1, nomeCidade_2);

    printf("\n");

    printf("1. População \n");
    printf("2. Área \n");
    printf("3. PIB \n");
    printf("4. Número de pontos turisuicos \n");
    printf("5. Dencidade demográfica \n");
    printf("Escolha uma opção: ");
    scanf("%d",&opcao);

    printf("\n");
    
    switch (opcao)
    {
    case 1:
        if (populacao_1 > populacao_2){
            printf("Cidade carta 1: %s - Cidade carta 2: %s \n", nomeCidade_1, nomeCidade_2);
            printf("População da cidade 1: %lu \n", populacao_1);
            printf("População da cidade 2: %lu \n", populacao_2);
            printf("A carta 1 venceu!!! \n");
        } else if (populacao_2 > populacao_1){
            printf("Cidade carta 1: %s - Cidade carta 2: %s \n", nomeCidade_1, nomeCidade_2);
            printf("População da cidade 1: %lu \n", populacao_1);
            printf("População da cidade 2: %lu \n", populacao_2);
            printf("A carta 2 venceu!!! \n");
        } else {
            printf("Cidade carta 1: %s - Cidade carta 2: %s \n", nomeCidade_1, nomeCidade_2);
            printf("População da cidade 1: %lu \n", populacao_1);
            printf("População da cidade 2: %lu \n", populacao_2);
            printf("Empate!!! \n");
        }   
    break;
    case 2:
        if (areaCidade_1 > areaCidade_2){
            printf("Cidade carta 1: %s - Cidade carta 2: %s \n", nomeCidade_1, nomeCidade_2);
            printf("Área da cidade 1: %.2f \n", areaCidade_1);
            printf("Área da cidade 2: %.2f \n", areaCidade_2);
            printf("A carta 1 venceu!! \n!");
        } else if (areaCidade_2 > areaCidade_1){
            printf("Cidade carta 1: %s - Cidade carta 2: %s \n", nomeCidade_1, nomeCidade_2);
            printf("Área da cidade 1: %.2f \n", areaCidade_1);
            printf("Área da cidade 2: %.2f \n", areaCidade_2);
            printf("A carta 2 venceu!!! \n");
        } else {
            printf("Cidade carta 1: %s - Cidade carta 2: %s \n", nomeCidade_1, nomeCidade_2);
            printf("Área da cidade 1: %.2f \n", areaCidade_1);
            printf("Área da cidade 2: %.2f \n", areaCidade_2);
            printf("Empate!!! \n");
        }   
    break;
    case 3:
        if (pibCidade_1 > pibCidade_2){
            printf("Cidade carta 1: %s - Cidade carta 2: %s \n", nomeCidade_1, nomeCidade_2);
            printf("PIB da cidade 1: %.2f \n", pibCidade_1);
            printf("PIB da cidade 2: %.2f \n", pibCidade_2);
            printf("A carta 1 venceu!!! \n");
        } else if (pibCidade_2 > pibCidade_1){
            printf("Cidade carta 1: %s - Cidade carta 2: %s \n", nomeCidade_1, nomeCidade_2);
            printf("PIB da cidade 1: %.2f \n", pibCidade_1);
            printf("PIB da cidade 2: %.2f \n", pibCidade_2);
            printf("A carta 2 venceu!!! \n");
        } else {
            printf("Cidade carta 1: %s - Cidade carta 2: %s \n", nomeCidade_1, nomeCidade_2);
            printf("PIB da cidade 1: %.2f \n", pibCidade_1);
            printf("PIB da cidade 2: %.2f \n", pibCidade_2);
            printf("Empate!!! \n");
        }   
    break;
    case 4:
        if (pontosTuristicos_1 > pontosTuristicos_2){
            printf("Cidade carta 1: %s - Cidade carta 2: %s \n", nomeCidade_1, nomeCidade_2);
            printf("Pontos turisticos da cidade 1: %d \n", pontosTuristicos_1);
            printf("Pontos turisticos da cidade 2: %d \n", pontosTuristicos_2);
            printf("A carta 1 venceu!!! \n");
        } else if (pontosTuristicos_2 > pontosTuristicos_1){
            printf("Cidade carta 1: %s - Cidade carta 2: %s \n", nomeCidade_1, nomeCidade_2);
            printf("Pontos turisticos da cidade 1: %d \n", pontosTuristicos_1);
            printf("Pontos turisticos da cidade 2: %d \n", pontosTuristicos_2);
            printf("A carta 2 venceu!!! \n");
        } else {
            printf("Cidade carta 1: %s - Cidade carta 2: %s \n", nomeCidade_1, nomeCidade_2);
            printf("Pontos turisticos da cidade 1: %d \n", pontosTuristicos_1);
            printf("Pontos turisticos da cidade 2: %d \n", pontosTuristicos_2);
            printf("Empate!!! \n");
        }   
    break;
    case 5:
        if (densidadePopulacional_1 < densidadePopulacional_2){
            printf("Cidade carta 1: %s - Cidade carta 2: %s \n", nomeCidade_1, nomeCidade_2);
            printf("Densidade Demográfica da cidade 1: %.2f \n", densidadePopulacional_1);
            printf("Densidade Demográfica da cidade 2: %.2f \n", densidadePopulacional_2);
            printf("A carta 1 venceu!!! \n");
        } else if (densidadePopulacional_2 < densidadePopulacional_1){
            printf("Cidade carta 1: %s - Cidade carta 2: %s \n", nomeCidade_1, nomeCidade_2);
            printf("Densidade Demográfica da cidade 1: %.2f \n", densidadePopulacional_1);
            printf("Densidade Demográfica da cidade 2: %.2f \n", densidadePopulacional_2);
            printf("A carta 2 venceu!!! \n");
        } else {
            printf("Cidade carta 1: %s - Cidade carta 2: %s \n", nomeCidade_1, nomeCidade_2);
            printf("Densidade Demográfica da cidade 1: %.2f \n", densidadePopulacional_1);
            printf("Densidade Demográfica da cidade 2: %.2f \n", densidadePopulacional_2);
            printf("Empate!!! \n");
        }   
    break;
    default:
        printf("Opção Invalida!!!! \n");
    break;
    }


    return 0;
}
