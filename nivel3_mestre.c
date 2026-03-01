#include <stdio.h>

int main() {
  // Área para definição das variáveis
  // 1ª Carta
  char estado1; 
  char codigo1[4];
  char cidade1[30];
  unsigned long int populacao1;
  float area1;
  float pib1;
  int pontosTuristicos1;

  // 2ª Carta
  char estado2; 
  char codigo2[4];
  char cidade2[30];
  unsigned long int populacao2;
  float area2;
  float pib2;
  int pontosTuristicos2;
 
  // Entrada de dados - Carta 1
  printf("\n=== Dados da Carta 1 ===\n");
  printf("Digite o Estado [A-H]: ");
  scanf(" %c", &estado1);
  printf("Digite o código da Carta: ");
  scanf("%s", codigo1);
  printf("Digite a cidade: ");
  scanf("%s", cidade1);
  printf("Digite a população: ");
  scanf("%lu", &populacao1);
  printf("Digite a área (km²): ");
  scanf("%f", &area1);
  printf("Digite o PIB (em bilhões): ");
  scanf("%f", &pib1);
  printf("Digite o número de pontos turísticos: ");
  scanf("%d", &pontosTuristicos1);

  // Entrada de dados - Carta 2
  printf("\n=== Dados da Carta 2 ===\n");
  printf("Digite o Estado [A-H]: ");
  scanf(" %c", &estado2);
  printf("Digite o código da Carta: ");
  scanf("%s", codigo2);
  printf("Digite a cidade: ");
  scanf("%s", cidade2);
  printf("Digite a população: ");
  scanf("%lu", &populacao2);
  printf("Digite a área (km²): ");
  scanf("%f", &area2);
  printf("Digite o PIB (em bilhões): ");
  scanf("%f", &pib2);
  printf("Digite o número de pontos turísticos: ");
  scanf("%d", &pontosTuristicos2);

  // ===== Cálculos (Nível Avançado) =====

  // Densidade Populacional
  float densidade1 = (float)populacao1 / area1;
  float densidade2 = (float)populacao2 / area2;

  // PIB per Capita
  float pibPerCapita1 = (float)pib1 / populacao1;
  float pibPerCapita2 = (float)pib2 / populacao2;

  // Super Poder
  float superPoder1 = (float)populacao1 +
                      area1 +
                      pib1 +
                      (float)pontosTuristicos1 +
                      pibPerCapita1 +
                      (1.0f / densidade1);

  float superPoder2 = (float)populacao2 +
                      area2 +
                      pib2 +
                      (float)pontosTuristicos2 +
                      pibPerCapita2 +
                      (1.0f / densidade2);

  // ===== Exibição dos dados =====

  printf("\n=== Dados da Carta 1 ===\n");
  printf("Estado: %c\n", estado1);
  printf("Código: %s\n", codigo1);
  printf("Cidade: %s\n", cidade1);
  printf("População: %lu\n", populacao1);
  printf("Área: %.2f km²\n", area1);
  printf("PIB: %.2f bilhões\n", pib1);
  printf("Pontos Turísticos: %d\n", pontosTuristicos1);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
  printf("PIB per Capita: %.6f\n", pibPerCapita1);
  printf("Super Poder: %.2f\n", superPoder1);

  printf("\n=== Dados da Carta 2 ===\n");
  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Cidade: %s\n", cidade2);
  printf("População: %lu\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f bilhões\n", pib2);
  printf("Pontos Turísticos: %d\n", pontosTuristicos2);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
  printf("PIB per Capita: %.6f\n", pibPerCapita2);
  printf("Super Poder: %.2f\n", superPoder2);

  // ===== Comparação das Cartas =====

  printf("\n=== Comparação de Cartas ===\n");

  int rPop = populacao1 > populacao2;
  int rArea = area1 > area2;
  int rPIB = pib1 > pib2;
  int rPontos = pontosTuristicos1 > pontosTuristicos2;
  int rDensidade = densidade1 < densidade2; // menor vence
  int rPibCapita = pibPerCapita1 > pibPerCapita2;
  int rSuper = superPoder1 > superPoder2;

  printf("População: Carta %d venceu (%d)\n", rPop ? 1 : 2, rPop);
  printf("Área: Carta %d venceu (%d)\n", rArea ? 1 : 2, rArea);
  printf("PIB: Carta %d venceu (%d)\n", rPIB ? 1 : 2, rPIB);
  printf("Pontos Turísticos: Carta %d venceu (%d)\n", rPontos ? 1 : 2, rPontos);
  printf("Densidade Populacional: Carta %d venceu (%d)\n", rDensidade ? 1 : 2, rDensidade);
  printf("PIB per Capita: Carta %d venceu (%d)\n", rPibCapita ? 1 : 2, rPibCapita);
  printf("Super Poder: Carta %d venceu (%d)\n", rSuper ? 1 : 2, rSuper);

  return 0;
}