#include <stdio.h> 

int main (){
    printf("Desafio Super Trunfo\n");
    char letra=' ' ;
    int populacao, pontosturisticos;
    char carta[3], cidade[30];
    float area, pib;

    char letra2=' ' ;
    int populacao2, pontosturisticos2;
    char carta2[3], cidade2[30];
    float area2, pib2;

    printf("Digite a letra da cidade:");
    scanf("%c", &letra);

    printf("Digite o código da carta:");
    scanf("%s", &carta);

    printf("Digite o nome da cidade:");
    scanf("%s", &cidade);

    printf("Digite a população da cidade:");
    scanf("%d", &populacao);

    printf("Digite a área da cidade:");
    scanf("%f", &area);

    printf("Digite o PIB da cidade:");
    scanf("%f", &pib);

    printf("Digite os Pontos Turísticos da cidade:");
    scanf("%d", &pontosturisticos);
 
    printf("Digite a letra da cidade 02:");
    scanf("%c", &letra2);

    printf("Digite o nome da cidade:");
    scanf("%s", &cidade2);

    printf("Digite a população da cidade:");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade:");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade:");
    scanf("%f", &pib2);

    printf("Digite os Pontos Turísticos da cidade:");
    scanf("%d", &pontosturisticos2);

    printf("Cidade: 01\n");

    printf("Estado: %c\n", letra);

    printf("Código: %s\n", carta);

    printf("Nome da cidade: %s\n", cidade);

    printf("População: %d\n", populacao);

    printf("Área: %f\n", area);

    printf("PIB: %f\n", pib);

    printf("Pontos Turísticos: %d\n", pontosturisticos);

    printf("Cidade: 2\n");

    printf("Estado: %c\n", letra2);

    printf("Código: %s\n", carta2);

    printf("Nome da cidade: %s\n", cidade2);

    printf("População: %d\n", populacao2);

    printf("Área: %f\n", area2);

    printf("PIB: %f\n", pib2);

    printf("Pontos Turísticos: %d\n", pontosturisticos2);

    return 0;
}