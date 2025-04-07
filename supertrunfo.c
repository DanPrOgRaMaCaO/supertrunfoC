#include <stdio.h>

    int main() {
    char Estado = 'A';
    char Codigo[20] = "A01";
    char Nome[30] = "São Paulo";
    int Populacao = 12325000;
    float Area = 1521.11;
    float PIB = 699.28;
    int Turisticos = 50;

    char estado = 'B';
    char codigo[20] = "B02";
    char nome[30] = "Rio de Janeiro";
    int populacao = 6748000;
    float area = 1200.25;
    float pib = 300.50;
    int turisticos = 30;

    printf("Estado: %c\n", Estado);
    printf("Código: %s\n", Codigo);
    printf("Nome: %s\n", Nome);
    printf("População: %d de pessoas\n", Populacao);
    printf("Área (em km²): %f km²\n", Area);    
    printf("PIB: %f bilhões de reais\n", PIB);
    printf("Número de pontos de turísticos: %d\n", Turisticos);

    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome: %s\n", nome);
    printf("População: %d de pessoas\n", populacao);
    printf("Área (em km²): %.2f km²\n", area);    
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de pontos de turísticos: %d\n", turisticos);
}