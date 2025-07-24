#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

   int carta1;

   char estado[30];
   char codigo[10];
   char nome[50];
   unsigned long int populaçao;
   float area;
   float pib;
   int pontoturistico;
   float Densidade;
   float Percapita;
   float superpoder;

   printf("Digite o Estado: \n");
   scanf("%s", &estado);

   printf("Digite o Código da carta: \n");
   scanf("%s", &codigo);

   printf("Digite o Nome: \n");
   scanf("%s", &nome);

   printf("Digite a População: \n");
   scanf("%d", &populaçao);

   printf("Digite a Área: \n");
   scanf("%f", &area);

   printf("Digite o PIB: \n");
   scanf("%f", &pib);

   printf("Digite o Número de pontos turísticos: \n");
   scanf("%d", &pontoturistico);

   printf("Carta1\n", carta1);

   printf("Estado: %s\n", estado);
   printf("Código da carta: %s\n", codigo);
   printf("Nome da cidade: %s\n", nome);
   printf("População: %d\n", populaçao);
   printf("Área: %.2f Km²\n", area);
   printf("PIB: %.2f bilhões de reais\n", pib);
   printf("Número de pontos turísticos: %d\n", pontoturistico);

   Densidade = (populaçao / area);
   Percapita = (populaçao / pib);

   printf("Densidade populacional: %.2f hab.Km²\n", Densidade);
   printf("PIB Per Capita: %.2f reais\n", Percapita);

   int carta2;

   char estado2[30];
   char codigo2[10];
   char nome2[50];
   unsigned long int populaçao2;
   float area2;
   float pib2;
   int pontoturistico2;
   float densidade2;
   float percapita2;
   float superpoder2;

   printf("Digite o Estado: \n");
   scanf("%s", &estado2);

   printf("Digite o Código da carta: \n");
   scanf("%s", &codigo2);

   printf("Digite o Nome da Cidade: \n");
   scanf("%s", &nome2);

   printf("Digite a População: \n");
   scanf("%d", &populaçao2);

   printf("Digite a Área: \n");
   scanf("%f", &area2);

   printf("Digite o PIB: \n");
   scanf("%f", &pib2);

   printf("Digite o Número de pontos turísticos: \n");
   scanf("%d", &pontoturistico2);

   printf("Carta2\n", carta2);
   
   printf("Estado: %s\n", estado2);
   printf("Código da carta: %s\n", codigo2);
   printf("Nome da cidade: %s\n", nome2);
   printf("População: %d\n", populaçao2);
   printf("Área: %.2f Km²\n", area2);
   printf("PIB: %.2f bilhões de reais\n", pib2);
   printf("Número de pontos turísticos: %d\n", pontoturistico2);

   densidade2 = (populaçao2 / area2);
   percapita2 = (populaçao2 / pib2);

   printf("Densidade populacional: %.2f hab.Km²\n", densidade2);
   printf("PIB Per Capita: %.2f reais\n", percapita2);

   superpoder = (populaçao + area + pib + Percapita / Densidade);
   superpoder2 = (populaçao2 + area2 + pib2 + percapita2 / densidade2);

   printf("População: %d\n", populaçao > populaçao2);
   printf("Área: %d\n", area > area2);
   printf("PIB: %d\n", pib > pib2);
   printf("Número de pontos turísticos: %d\n", pontoturistico > pontoturistico2);
   printf("Densidade populacional: %d hab.Km²\n", Densidade < densidade2);
   printf("PIB Per Capiata: %d reais\n", Percapita > percapita2);
   printf("Super Poder: %d", superpoder > superpoder2);


  

    

    
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
