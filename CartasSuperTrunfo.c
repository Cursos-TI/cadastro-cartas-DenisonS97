#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado[1];
  char codigo[4];
  char nomeCidade[50];
  unsigned long int populacao;
  float area;
  double pib;
  int pontosTuristicos;
  
   printf("---Cadrasto de carta Super Trunfo---\n");

  // Área para entrada de dados
   printf("Dijite o Estado (A-H):" );
   scanf("%s", &estado); 

   printf("Dijite o código da Carta (ex: A01): ");
   scanf("%f", &codigo);

   printf("Nome da Cidade: ");
   scanf("%[^\n]s", nomeCidade ); //lê nome com espaços
    

   printf("População: ");
   scanf("%1u", &populacao);

   printf("Àrea (km²): ");
   scanf("%f", &area);

   printf("Número de Pontos Turisticos: ");
   scanf("%1u", &pontosTuristicos);


  // Área para exibição dos dados da cidade

return 0;
} 
