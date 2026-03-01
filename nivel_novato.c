#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas

int main() {
  // Área para definição das variáveis
  // 1ª Carta
  char estado1; 
  char codigo1[4];
  char cidade1[30];
  int populacao1;
  float area1;
  float pib1;
  int pontosTuristicos1;
  // 2ª Carta
  char estado2; 
  char codigo2[4];
  char cidade2[30];
  int populacao2;
  float area2;
  float pib2;
  int pontosTuristicos2; 

  // Entrada de dados - Carta 1
  printf("Digite o Estado [A-H]: ");
  scanf(" %c", &estado1);

  printf("Digite o código da Carta: ");
  scanf("%s", codigo1);

  printf("Digite a cidade: ");
  scanf("%s", cidade1);

  printf("Digite a população: ");
  scanf("%d", &populacao1);

  printf("Digite a área (km²): ");
  scanf("%f", &area1);

  printf("Digite o PIB (em bilhões): ");
  scanf("%f", &pib1);

  printf("Digite o número de pontos turísticos: ");
  scanf("%d", &pontosTuristicos1);

  // Entrada de dados - Carta 2
  printf("Digite o Estado [A-H]: ");
  scanf(" %c", &estado2);

  printf("Digite o código da Carta: ");
  scanf("%s", codigo2);

  printf("Digite a cidade: ");
  scanf("%s", cidade2);

  printf("Digite a população: ");
  scanf("%d", &populacao2);

  printf("Digite a área (km²): ");
  scanf("%f", &area2);

  printf("Digite o PIB (em bilhões): ");
  scanf("%f", &pib2);

  printf("Digite o número de pontos turísticos: ");
  scanf("%d", &pontosTuristicos2);

  // Exibição dos dados

  printf("\n=== Dados da Carta 1 ===\n");
  printf("Estado: %c\n", estado1);
  printf("Código: %s\n", codigo1);
  printf("Cidade: %s\n", cidade1);
  printf("População: %d\n", populacao1);
  printf("Área: %f km²\n", area1);
  printf("PIB: %f bilhões\n", pib1);
  printf("Pontos Turísticos: %d\n", pontosTuristicos1);

  printf("\n=== Dados da Carta 2 ===\n");
  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Cidade: %s\n", cidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %f km²\n", area2);
  printf("PIB: %f bilhões\n", pib2);
  printf("Pontos Turísticos: %d\n", pontosTuristicos2);

  return 0;
}

/*

#include <stdio.h>

int main(){

}

int numero;
float valor;
double valorMaior;
char letra;
char nome[50];   // string

%d -> inteiro (decimal)
%i -> inteiro (equivalente a %d)
%f -> número decimal (ponto flutuante)
%e -> decimal em notação científica
%c -> caractere único
%s -> string (texto)
\n -> pula linha 

*/