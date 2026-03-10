#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado1[1];
  char codigo1[4];
  char nomeCidade1[50];
  unsigned long int populacao1;
  float area1;
  double pib1;
  int pontosTuristicos1;
  
   printf("---Cadrasto de carta Super Trunfo---\n");

  // Área para entrada de dados
   printf("Dijite o Estado (A-H):" );
   scanf("%s", &estado1); 

   printf("Dijite o código da Carta (ex: A01): ");
   scanf("%f", &codigo1);

   printf("Nome da Cidade: ");
   scanf("%[^\n]s", nomeCidade1); //lê nome com espaços
    

   printf("População: ");
   scanf("%1u", &populacao1);

   printf("Àrea (km²): ");
   scanf("%f", &area1);

   printf("Número de Pontos Turisticos: ");
   scanf("%lu", &pontosTuristicos1);


  // Área para exibição dos dados da cidade
   
return 0;
} 
