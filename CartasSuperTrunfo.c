#include <stdio.h>


 int main() {

  // declarando as variáveis da primeira carta
    char estado1; // Letra do estado (A-H)
    char codigo1[4]; // Código da carta (ex: A01)
    char nome1[50]; // Nome da cidade
    unsigned long int populacao1; // População
    float area1; // Área em km²
    float pib1; // PIB em bilhões
    int pontos_turisticos1; // Número de pontos turísticos
  
    // declarando as variáveis da segunda carta
    char estado2; // Letra do estado (A-H)
    char codigo2[4]; // Código da carta (ex: A01)
    char nome2[50]; // Nome da cidade
    unsigned long int populacao2; // População
    float area2; // Área em km²
    float pib2; // PIB em bilhões
    int pontos_turisticos2; // Número de pontos turísticos

    // recebendo os dados da primeira carta
    printf("Digite o estado da cidade(A-H): ");
    scanf(" %c", &estado1);

    printf("Digite o código da carta (exemplo: A01): ");
    scanf(" %s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %s", nome1);

    printf("Digite a população da cidade: ");
    scanf(" %lu.2f", &populacao1);

    printf("Digite a área da cidade (km²): ");
    scanf(" %f.2f", &area1);

    printf("Digite o PIB da cidade (bilhões de reais): ");
    scanf(" %f.2f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &pontos_turisticos1);
   
    // recebendo os dados da segunda carta
    printf("Digite o estado da cidade(A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta (exemplo: A01): ");
    scanf(" %s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %s", nome2);

    printf("Digite a população da cidade: ");
    scanf(" %lu.2f", &populacao2);

    printf("Digite a área da cidade (km²): ");
    scanf(" %f.2f", &area2);

    printf("Digite o PIB da cidade (bilhões de reais): ");
    scanf(" %f.2f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &pontos_turisticos2);

return 0;
} 
