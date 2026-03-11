#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

 int main() {
  // Declaração de varíaveis para duas cartas (Carta 1 e Carta 2)---
  char estado1, estado2;
  char codigo1[4], codigo2[4];
  char nomeCidade1[50], nomeCidade2[50];
  unsigned long int populacao1, populacao2;
  float area1, area2, pib1, pib2;
  int pontosTuristicos1, pontosTuristicos2;

   // Cadastro da Carta (Carta 1)---
   printf("--- Cadrasto de Carta 1 ---\n");
    
   // Leitura dos Dados (Carta 1)---
   printf("Dijite os dados da Carta 1:\n");
   printf("Estado (A-H): ");
   scanf(" %c", &estado1); 

   printf("Código (ex: A01): ");
   scanf("%s", &codigo1); 

   printf("Nome da Cidade: ");
   scanf("%[^\n]s", nomeCidade1); // Lê nomes com espaços

   printf("População: ");
   scanf("%lu", &populacao1);

   printf("Àrea (km²): ");
   scanf("%2.f", &area1); 

   printf("PIB: "); 
   scanf("%2.f", &pib1);

   printf("Pontos Turisticos: ");
   scanf("%d\n", &pontosTuristicos1);

   // Cadrasto da Carta (Carta 2)---
   printf("\n--- Cadrsto da Carta 2 ---\n");

   // Leitura dos Dados (Carta 2)---
   printf("Dijite os dados da Carta 2:\n");
   printf("Estado (A-H): ");
   scanf(" %c", &estado2);

   printf("Código (ex: A02): ");
   scanf("%s", &codigo2);

   printf("Nome da Cidade: ");
   scanf("%[^\n]s", nomeCidade2);

   printf("População: ");
   scanf("%lu", &populacao2);

   printf("Àrea (km²): ");
   scanf("%2.f", &area2);

   printf("PIB: ");
   scanf("%2.f", &pib2);

   printf("Pontos Turisticos: ");
   scanf("%d", &pontosTuristicos2);


  //Exibição Carta 1
   printf("Carta 1: \n");

   // Lê e Exibe o Estado e Código Dijitado.
   printf("Estado: %c - Código: %s\n", estado1, codigo1);
   // Lê e Exibe o Nome da Cidade Dijitada.
   printf("Cidade: %s\n", nomeCidade1);
   // Lê e Exibe a População e Àrea Dijitada.
   printf("População: %lu - Área: %2.f km²\n", populacao1, area1);
   // Lê  e Exibe o PIB e Pontos Turísticos Dijitados.
   printf("PIB: %2.f - Pontos Turísticos: %d\n", pib1, pontosTuristicos1);
   // Exibição Carta 2.
   printf("Carta 2: \n");
   // Lê e Exibe o Estado e Código Dijitado.
   printf("Estado: %c - Código: %s\n", estado2, codigo2);
   // Lê e Exibe o Nome da Cidade Dijitada.
   printf("Cidade: %s\n", nomeCidade2);
   // Lê e Exibe a População e Àrea Dijitada.
   printf("População: %lu - Área: %2.f km²\n", populacao2, area2);
   // Lê  e Exibe o PIB e Pontos Turísticos Dijitados.
   printf("PIB: %2.f - Pontos Turísticos: %d\n", pib2, pontosTuristicos2);



return 0;
} 
