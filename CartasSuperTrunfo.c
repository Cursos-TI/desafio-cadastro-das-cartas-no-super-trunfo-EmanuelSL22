#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

   int carta1;

   char estado = 'A';
   char codigo[10];
   char nome[20];
   int populaçao;
   float area;
   float pib;
   int pontoturistico;

   printf("Digite o Estado: \n");
   scanf("%c", &estado);

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

   printf("Estado: %c\n", estado);
   printf("Código da carta: %s\n", codigo);
   printf("Nome da cidade: %s\n", nome);
   printf("População: %d\n", populaçao);
   printf("Área: %.2f Km²\n", area);
   printf("PIB: %.2f bilhões de reais\n", pib);
   printf("Número de pontos turísticos: %d\n", pontoturistico);

   int carta2;

   char estado2 = 'B';
   char codigo2[10];
   char nome2[20];
   int populaçao2;
   float area2;
   float pib2;
   int pontoturistico2;

   printf("Digite o Estado: \n");
   scanf("%c", &estado2);

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
   
   printf("Estado: %c\n", estado2);
   printf("Código da carta: %s\n", codigo2);
   printf("Nome da cidade: %s\n", nome2);
   printf("População: %d\n", populaçao2);
   printf("Área: %.2f Km²\n", area2);
   printf("PIB: %.2f bilhões de reais\n", pib2);
   printf("Número de pontos turísticos: %d\n", pontoturistico2);


  

    

    
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
