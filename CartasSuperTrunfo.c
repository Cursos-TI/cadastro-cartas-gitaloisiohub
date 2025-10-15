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
  int carta1, carta2;


  //Área para entrada de dados

  printf("Digite a populacao: \n");
  scanf("%d", &populacao);

  printf("Digite a area\n");
  scanf("%f", &area);

  printf("Digite o pib: \n");
  scanf("%f", &pib);

  printf("Digite o numero de pontos turisticos: \n");
  scanf("%d", &numero);

    printf("Digite a carta1: \n");
    scanf("%d", &carta1);

    printf("Digite a carta2: \n");
    scanf("%d", &carta2);

    // Densidade populacional: população / pela área
  //PIB per Capita: PIB total dividido pela população

  densidadepopulacional = (populacao / area);
  printf("A densidade populacional é: %.2f\n", densidadepopulacional);

  pibpercapita = (pib / populacao);
  printf("Pib per capta é: %.2f\n", pibpercapita);

  if(carta1 > carta2){
    printf("Carta 1 venceu!\n");
  }else {
    printf("Carta 2 derrotada!\n");
  }



  

return 0;

} 
