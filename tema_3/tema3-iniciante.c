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

  // ===== Comparação das Cartas (Atributo fixo: População) =====

  printf("\n=== Comparação de Cartas (Atributo: População) ===\n");

  printf("Carta 1 - %s (%c): %lu habitantes\n", cidade1, estado1, populacao1);
  printf("Carta 2 - %s (%c): %lu habitantes\n", cidade2, estado2, populacao2);

  if (populacao1 > populacao2) {
    printf("\nResultado: Carta 1 (%s) venceu!\n", cidade1);
  } else if (populacao2 > populacao1) {
    printf("\nResultado: Carta 2 (%s) venceu!\n", cidade2);
  } else {
    printf("\nResultado: Empate!\n");
  }

  return 0;
}