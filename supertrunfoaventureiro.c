#include <stdio.h>

int main() {
    char Estado = 'A';
    char Codigo[20] = "A01";
    char Nome[30] = "São Paulo";
    int Populacao = 12325000;
    float Area = 1521.11;
    double PIB = 699000000000.28;
    int Turisticos = 50;

    float DensidadepopulacionalSP = Populacao / Area; // 8102.64 hab/km²
    float PIBpercapitaSP = PIB / Populacao; // 56714.00 R$

    char estado = 'B';
    char codigo[20] = "B02";
    char nome[30] = "Rio de Janeiro";
    int populacao = 6748000;
    float area = 1200.25;
    double pib = 300000000000.50;
    int turisticos = 30;

    float DensidadepopulacionalRJ = populacao / area; // 5622.16 hab/km²
    float PIBpercapitaRJ = pib / populacao; // 44457.62 R$

    printf("Estado: %c\n", Estado);
    printf("Código: %s\n", Codigo);
    printf("Nome: %s\n", Nome);
    printf("População: %d de pessoas\n", Populacao);
    printf("Área (em km²): %.2f km²\n", Area);    
    printf("PIB: %.2f R$\n", PIB);
    printf("Número de pontos de turísticos: %d\n", Turisticos);

    printf("A densidade populacional de São Paulo é: %.2f hab/km²\n", DensidadepopulacionalSP);
    printf("O PIB per capita de São Paulo %.2f R$\n", PIBpercapitaSP);

    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome: %s\n", nome);
    printf("População: %d de pessoas\n", populacao);
    printf("Área (em km²): %.2f km²\n", area);    
    printf("PIB: %.2f R$\n", pib);
    printf("Número de pontos de turísticos: %d\n", turisticos);
    
    printf("A densidade populacional do Rio de Janeiro é: %.2f hab/km²\n", DensidadepopulacionalRJ);
    printf("O PIB per capita do Rio de Janeiro é: %.2f R$\n", PIBpercapitaRJ);

    return 0;
}