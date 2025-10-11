#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
    // Área para definição das variáveis para armazenar as propriedades das cidades

  int populacao;
  float area;
  float pib;
  int numero;
  float densidadepopulacional;
  float pibpercapita;


  //Área para entrada de dados

  printf("Digite a populacao: \n");
  scanf("%d", &populacao);

  printf("Digite a area\n");
  scanf("%f", &area);

  printf("Digite o pib: \n");
  scanf("%f", &pib);

  printf("Digite o numero de pontos turisticos: \n");
  scanf("%d", &numero);

  densidadepopulacional = (populacao / area);
  printf("A densidade populacional é: %.2f", densidadepopulacional);

  pibpercapita = (pib / populacao);
  printf("Pib per capta é: %.2f", pibpercapita);

  
  // Densidade populacional: população / pela área
  //PIB per Capita: PIB total dividido pela população


  

return 0;

} 
