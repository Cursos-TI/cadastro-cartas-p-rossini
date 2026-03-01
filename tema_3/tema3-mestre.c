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

  // =====  Comparação com Dois Atributos =====

  int atributo1, atributo2;
  float valor1_c1 = 0, valor1_c2 = 0;
  float valor2_c1 = 0, valor2_c2 = 0;
  float soma1 = 0, soma2 = 0;

  printf("\n=== ESCOLHA DO PRIMEIRO ATRIBUTO ===\n");
  printf("1 - População\n");
  printf("2 - Área\n");
  printf("3 - PIB\n");
  printf("4 - Pontos Turísticos\n");
  printf("5 - Densidade Demográfica\n");
  printf("Escolha: ");
  scanf("%d", &atributo1);

  printf("\n=== ESCOLHA DO SEGUNDO ATRIBUTO ===\n");

  for (int i = 1; i <= 5; i++) {
    if (i != atributo1) {
      switch(i) {
        case 1: printf("1 - População\n"); break;
        case 2: printf("2 - Área\n"); break;
        case 3: printf("3 - PIB\n"); break;
        case 4: printf("4 - Pontos Turísticos\n"); break;
        case 5: printf("5 - Densidade Demográfica\n"); break;
      }
    }
  }

  printf("Escolha: ");
  scanf("%d", &atributo2);

  if (atributo1 == atributo2) {
    printf("Erro: Você escolheu o mesmo atributo duas vezes!\n");
    return 0;
  }

  // ===== Captura dos valores do Atributo 1 =====
  switch(atributo1) {
    case 1: valor1_c1 = populacao1; valor1_c2 = populacao2; break;
    case 2: valor1_c1 = area1; valor1_c2 = area2; break;
    case 3: valor1_c1 = pib1; valor1_c2 = pib2; break;
    case 4: valor1_c1 = pontosTuristicos1; valor1_c2 = pontosTuristicos2; break;
    case 5: valor1_c1 = densidade1; valor1_c2 = densidade2; break;
    default: printf("Opção inválida!\n"); return 0;
  }

  // ===== Captura dos valores do Atributo 2 =====
  switch(atributo2) {
    case 1: valor2_c1 = populacao1; valor2_c2 = populacao2; break;
    case 2: valor2_c1 = area1; valor2_c2 = area2; break;
    case 3: valor2_c1 = pib1; valor2_c2 = pib2; break;
    case 4: valor2_c1 = pontosTuristicos1; valor2_c2 = pontosTuristicos2; break;
    case 5: valor2_c1 = densidade1; valor2_c2 = densidade2; break;
    default: printf("Opção inválida!\n"); return 0;
  }

  // Regra diferent para densidade (menor vence)
  if (atributo1 == 5) {
    valor1_c1 = 1 / valor1_c1;
    valor1_c2 = 1 / valor1_c2;
  }

  if (atributo2 == 5) {
    valor2_c1 = 1 / valor2_c1;
    valor2_c2 = 1 / valor2_c2;
  }

  soma1 = valor1_c1 + valor2_c1;
  soma2 = valor1_c2 + valor2_c2;

  printf("\n=== RESULTADO FINAL ===\n");
  printf("%s - Soma: %.2f\n", cidade1, soma1);
  printf("%s - Soma: %.2f\n", cidade2, soma2);

  printf("\nVencedora: %s\n",
         (soma1 > soma2) ? cidade1 :
         (soma2 > soma1) ? cidade2 :
         "Empate!");




         

  return 0;
}

/* -> LEMBRAR

1) if / else
Usado para decidir algo.

if (condicao) {
    // executa se for verdadeira
} else {
    // executa se for falsa
}


2) switch / case
Usado para menu com várias opções.

switch(opcao) {
    case 1:
        // faz algo
        break;
    case 2:
        // faz outra coisa
        break;
    default:
        // opção inválida
}


3) Operadores de comparação
>   maior
<   menor
==  igual
!=  diferente


4) Operador ternário
Forma curta de if/else.

(condicao) ? valor1 : valor2;


5) for
Usado para repetir algo.

for (inicio; condição; incremento) {
    // repete
}

*/