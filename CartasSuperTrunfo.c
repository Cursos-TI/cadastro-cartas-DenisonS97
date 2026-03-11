#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

 int main() {
  // Declaração de varíaveis para duas cartas (Carta 1 e Carta 2)---
  char estado1[2], estado2[2], codigo1[4], codigo2[4];
  char nome1[50], nome2[50];
  unsigned long int populacao1, populacao2;
  float area1, area2, pib1, pib2;
  int pontos1, pontos2;

   // Cadastro da Carta 1
   printf("--- Cadrasto de Carta 1 ---\n");
    
   // Leitura dos Dados (Carta 1)---
   printf("Dijite os dados da Carta 1:\n");

   printf("Estado (A-H): ");
   scanf("%c", estado1); 

   printf("Código: ");
   scanf("%s", codigo1); 

   printf("Nome da Cidade: ");
   scanf("%s", nome1); // Agora em lina própia

   printf("População: ");
   scanf("%lu", &populacao1); // Agora em linha própia

   printf("Àrea (km²): ");
   scanf("%f", &area1); 

   printf("PIB: "); 
   scanf("%f", &pib1);

   printf("Pontos Turisticos: ");
   scanf("%d", &pontos1);

   // Cadrasto da Carta 2---
   printf("\n--- Cadrsto da Carta 2 ---\n");
   printf("Estado (A-H): ");
   scanf("%c", estado2);

   printf("Código: ");
   scanf("%s", codigo2);

   printf("Nome da Cidade: ");
   scanf("%s", nome2); // Agora em linha própia

   printf("População: ");
   scanf("%lu", &populacao2); // Agora em linha própia

   printf("Àrea (km²): ");
   scanf("%f", &area2);

   printf("PIB: ");
   scanf("%f", &pib2);

   printf("Pontos Turisticos: ");
   scanf("%d", &pontos2);


  //Exibição dos Dados
   printf("Carta 1: %s  %s - %s", estado1, codigo1, nome1);
   printf("População: %lu\n, Àrea: %.2f\n, PIB: %.2f\n, Pontos: %d\n", populacao1, area1, pib1, pontos1);

   printf("\nCarta 2: %c   %s - %s\n",estado2, codigo2, nome2);
   printf("População: %lu, Àrea: %.2f, PIB: %.2f, Pontos: %d\n", populacao2, area2, pib2, pontos2);
   
return 0;
} 
