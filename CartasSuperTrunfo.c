//Aluna: Leila Martins Nunes Barcellos
//Matrícula: 202503772843
//Polo: Polo: POLO VILARINHO VN - BELO HORIZONTE
//1º Semestre do Curso Análise e Desenvolvimento De Sistemas

#include <stdio.h>


// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("Desafio Super Trunfo\n");

    //declaração de variáveis da Carta 1:
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;


    //declaração de variáveis da Carta 2:
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

    //leitura da Carta 1:

    printf("Cadastro da Carta 1\n");

    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado1);
    

    printf("Digite o Código da Carta (ex. A01): ");
    scanf(" %3s", codigo1);
    getchar(); 

    printf("Digite o nome da cidade: ");
    scanf(" %s", cidade1);

    printf("Digite a população da cidade: ");
    scanf(" %d", &populacao1);

    printf("Digite a área da cidade (Em km²): ");
    scanf(" %f", &area1);
    getchar();

    printf("Digite o PIB da cidade (Em bilhões de reais): ");
    scanf(" %f", &pib1);

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf(" %d", &pontos_turisticos1);

    //leitura da Carta 2:

    printf("Cadastro da Carta 2\n");

    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o Código da Carta (ex. A01): ");
    scanf(" %3s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %s", cidade2);

    printf("Digite a população da cidade: ");
    scanf(" %d", &populacao2);

    printf("Digite a área da cidade (Em km²): ");
    scanf(" %f", &area2);

    printf("Digite o PIB da cidade (Em bilhões de reais): ");
    scanf(" %f", &pib2);

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf(" %d", &pontos_turisticos2);

    //imprimir na tela os dados da carta 1

    printf("Dados da Carta 1:\n");

    printf(" Estado: %c\n", estado1);
    printf(" Código: %3s\n", codigo1);
    printf(" Cidade: %s\n", cidade1);
    printf(" População: %d\n", populacao1);
    printf(" Área: %.2f\n", area1);
    printf(" Pib: %.2f\n", pib1);
    printf(" Pontos turísticos: %d\n", pontos_turisticos1);

    //imprimir na tela os dados da carta 2

    printf("Dados da Carta 2:\n");

    printf(" Estado: %c\n", estado2);
    printf(" Código: %3s\n", codigo2);
    printf(" Cidade: %s\n", cidade2);
    printf(" População: %d\n", populacao2);
    printf(" Área: %.2f\n", area2);
    printf(" Pib: %.2f\n", pib2);
    printf(" Pontos turísticos: %d\n", pontos_turisticos2);


    return 0;
}
