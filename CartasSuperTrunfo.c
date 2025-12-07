#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado, codigo[20], cidade[20];
    int turismo;
    float area, pib, densidade, capita, superPoder;
    unsigned int populacao;

  // Área para definição das variáveis para armazenar as propriedades das cidades
  //cidade 2clear
    char estado2, codigo2[20], cidade2[20];
    int turismo2;
    float area2, pib2, densidade2, capita2, superPoder2;
    unsigned int populacao2;
  // Área para entrada de dados
  // carta 1
    printf("Carta 1\n");
    printf("Insira uma letra de A a H: \n");
    scanf(" %c", &estado);
    printf("Insira o codigo da carta: \n");
    scanf(" %s", &codigo);
    printf("Insira o nome da cidade: \n");
    scanf(" %s", &cidade);
    printf("Insira o numero de habitantes: \n");
    scanf("%u", &populacao);
    printf("Insira a Area: \n");
    scanf("%f", &area);
    printf("Insira o PIB: \n");
    scanf("%f", &pib);
    printf("Insira o numero de pontos turisticos: \n");
    scanf("%d", &turismo);

    //Parte 2
    //Adicionando os calculos do nivel intermediario
    //Dividindo a populacao pela area
    densidade = populacao / area;
    //dividindo pib pela populacao
    capita = pib / populacao;

    //parte 3
    //super poder
    superPoder = populacao + turismo + area + pib + (1 /densidade) + capita;
    


  // Área para exibição dos dados da cidade
  //carta 1
    printf("Dados da Carta 1\n");
    printf("Estado: %c \n", estado);
    printf("Codigo: %s \n", codigo);
    printf("Cidade: %s \n", cidade);
    printf("Populacao: %u \n", populacao);
    printf("Area: %f \n", area);
    printf("PIB: %f \n", pib);
    printf("Pontos Turisticos: %d \n", turismo);
    
    //saida da densidade
    printf("Densidade pupulacional: %f \n", densidade);
    //saida do pib per capita
    printf("PIB per Capita: %f \n", capita);

  // Área para entrada de dados
  // carta 2
    printf("Carta 2: \n");
    printf("Insira uma letra de A a H: \n");
    scanf(" %c", &estado2);
    printf("Insira o codigo da carta: \n");
    scanf(" %s", &codigo2);
    printf("Insira o nome da cidade: \n");
    scanf(" %s", &cidade2);
    printf("Insira o numero de habitantes: \n");
    scanf("%u", &populacao2);
    printf("Insira a Area: \n");
    scanf("%f", &area2);
    printf("Insira o PIB: \n");
    scanf("%f", &pib2);
    printf("Insira o numero de pontos turisticos: \n");
    scanf("%d", &turismo2);

    //Adicionando os calculos do nivel intermediario
    //Dividindo a populacao pela area
    densidade2 = populacao / area;
    //dividindo pib pela populacao
    capita2 = pib / populacao;

    //parte 3
    //super poder
    superPoder2 = populacao2 + turismo2 + area2 + pib2 + (1 / densidade2) + capita2;
   
  // Área para exibição dos dados da cidade
  //carta 2
    printf("Dados da Carta 2\n");
    printf("Estado: %c \n", estado2);
    printf("Codigo: %s \n", codigo2);
    printf("Cidade: %s \n", cidade2);
    printf("Populacao: %u \n", populacao2);
    printf("Area: %f \n", area2);
    printf("PIB: %f \n", pib2);
    printf("Pontos Turisticos: %d \n", turismo2);
    
    //saida da densidade
    printf("Densidade pupulacional: %f \n", densidade2);
    //saida do pib per capita
    printf("PIB per Capita: %f \n", capita2);

    //parte3
    //comparacao
    printf("Populacao: Carta 1 venceu %d \n", populacao > populacao2);
    printf("Area: Carta 1 venceu %d \n", area > area2);
    printf("PIB: Carta 1 venceu %d \n", pib > pib2);
    printf("Pontos Turisticos: Carta 1 venceu %d \n", turismo > turismo2);
    printf("Densidade: Carta 1 venceu %d \n", densidade < densidade2);
    printf("PIB per Capita: Carta 1 venceu %d \n", capita > capita2);
    printf("Super Poder: Carta 1 venceu %d \n", superPoder > superPoder2);
    
    //comparacao com if
    printf("O atributo escolhido foi: Area\n");
    if(area > area2){
      printf("A carta 1 venceu!\n %.2f", area);
    }else{
      printf("A carta 2 venceu!\n %.2f", area2);
    }

return 0;
} 
