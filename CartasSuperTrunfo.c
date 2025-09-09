#include <stdio.h>
//Desafio do Supertrunfo (Amador)

int main() {

     //Variaveis da carta 1

    char estado1;
    char codigo1[10];
    char cidade1[20];
    int populaçao1;
    float area1;
    float pib1;
    int pontosturisticos1;

        //Variaveis da carta 2

    char estado2;
    char codigo2[10];
    char cidade2[20];
    int populaçao2;
    float area2;
    float pib2;
    int pontosturisticos2;

    //Entrada de Dados - carta 1

    printf("=== Cadastro da Carta 1 ===\n");
    
    printf("Digite o Estado (A-H):");
    scanf(" %c", &estado1);

    printf("Digite o Código da Carta (Ex: A01):");
    scanf("%s", &codigo1);

    printf("Digite o Nome da Cidade: ");
    scanf("%s", &cidade1); 

    printf("Digite a População:");
    scanf("%d", &populaçao1);

    printf("Digite a Área (km²):");
    scanf("%f", &area1);

    printf("Digite o PIB (Em Milhões):");
    scanf("%f", &pib1);

    printf("Digite o Número de Pontos Turisticos:");
    scanf("%d", &pontosturisticos1);

    //Entrada de Dados - carta 2

    printf("=== Cadastro da Carta 2 ===\n");
    
    printf("Digite o Estado (A-H):");
    scanf(" %c", &estado2);

    printf("Digite o Código da Carta (Ex: A01):");
    scanf("%s", &codigo2);

    printf("Digite o Nome da Cidade: ");
    scanf("%s", &cidade2); 

    printf("Digite a População:");
    scanf("%d", &populaçao2);

    printf("Digite a Área (km²):");
    scanf("%f", &area2);

    printf("Digite o PIB (Em Milhões):");
    scanf("%f", &pib2);

    printf("Digite o Número de Pontos Turisticos:");
    scanf("%d", &pontosturisticos2);

    //Exibição e Dados

    //Exibição da Carta 1
    printf("\n=============================\n");
    printf("=== carta 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Código da Carta: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populaçao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Numero de Pontos Turísticos: %d\n\n", pontosturisticos1);

    //Exibição da Carta 2
    
    printf("=== carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populaçao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Numero de Pontos Turísticos: %d\n", pontosturisticos2);



    return 0;
}
