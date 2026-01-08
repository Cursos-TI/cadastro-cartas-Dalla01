#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado1;
  char codigo1[4];
  char nome_cidade1[50];
  int populacao1;
  float area1;
  float PIB1;
  int pts_turisticos1;
  float densidade1;
  float pib_per_capta1;

  char estado2;
  char codigo2[4];
  char nome_cidade2[50];
  int populacao2;
  float area2;
  float PIB2;
  int pts_turisticos2;
  float densidade2 = (populacao2/area2);
  float pib_per_capta2 = (PIB2 * 1000000000/populacao2);

  // Área para entrada de dados
  // Entrada de dados da carta 1
  printf("Cadastro da carta 1: \n");
  printf("Digite a letra do estado, entre A e H: \n");
  scanf(" %c", &estado1);
  printf("Digite o código da carta, por exemplo A01: \n");
  scanf("%s", codigo1);
  printf("Digite o nome da cidade: \n");
  scanf(" %49[^\n]", nome_cidade1);
  printf("Digite o tamanho da população: \n");
  scanf("%d", &populacao1);
  printf("Digite o tamanho da área da cidade: \n");
  scanf("%f", &area1);
  printf("Digite o PIB da cidade em bilhões de reais: \n");
  scanf("%f", &PIB1);
  printf("Digite o número de pontos turísticos: \n");
  scanf("%d", &pts_turisticos1);
  densidade1 = ((float)populacao1/area1);
  pib_per_capta1 = (PIB1 * 1000000000/populacao1);

  // Entrada de dados da carta 2
  printf("Cadastro da carta 2: \n");
  printf("Digite a letra do estado, entre A e H: \n");
  scanf(" %c", &estado2);
  printf("Digite o código da carta, por exemplo A01: \n");
  scanf("%s", codigo2);
  printf("Digite o nome da cidade: \n");
  scanf(" %49[^\n]", nome_cidade2);
  printf("Digite o tamanho da população: \n");
  scanf("%d", &populacao2);
  printf("Digite o tamanho da área da cidade: \n");
  scanf("%f", &area2);
  printf("Digite o PIB da cidade em bilhões de reais: \n");
  scanf("%f", &PIB2);
  printf("Digite o número de pontos turísticos: \n");
  scanf("%d", &pts_turisticos2);

  densidade2 = ((float)populacao2/area2);
  pib_per_capta2 = (PIB2 * 1000000000/populacao2);

  // Área para exibição dos dados da cidade
  // Exibição carta 01
  printf("Dados cadastrados da carta 01: \n");
  printf("Estado: %c \n", estado1);
  printf("Código: %s \n", codigo1);
  printf("Nome da cidade: %s \n", nome_cidade1);
  printf("População: %d \n", populacao1);
  printf("Área: %.2f Km² \n", area1);
  printf("PIB: %.2f bilhões de reais \n", PIB1);
  printf("Número de pontos turísticos: %d \n", pts_turisticos1);
  printf("Densidade populacional: %.2f hab/Km² \n", densidade1);
  printf("PIB per Capita: %.2f reais/hab \n", pib_per_capta1);
  printf(" \n");

  // Exibição carta 02
  printf("Dados cadastrados da carta 02: \n");
  printf("Estado: %c \n", estado2);
  printf("Código: %s \n", codigo2);
  printf("Nome da cidade: %s \n", nome_cidade2);
  printf("População: %d \n", populacao2);
  printf("Área: %.2f Km² \n", area2);
  printf("PIB: %.2f bilhões de reais \n", PIB2);
  printf("Número de pontos turísticos: %d \n", pts_turisticos2);
  printf("Densidade populacional: %.2f hab/Km² \n", densidade2);
  printf("PIB per Capita: %.2f reais/hab \n", pib_per_capta2);

return 0;
} 
