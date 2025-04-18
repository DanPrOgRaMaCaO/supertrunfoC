#include <stdio.h>

int main() {
    char EstadoSP = 'A';
    char CodigoSP[20] = "A01";
    char NomeSP[30] = "São Paulo";
    int PopulacaoSP = 12325000;
    float AreaSP = 1521.11;
    long double PIBsp = 699000000000.28;
    int PontosTuristicosSP = 50;

    char EstadoRJ = 'B';
    char CodigoRJ[20] = "B02";
    char NomeRJ[30] = "Rio de Janeiro";
    int PopulacaoRJ = 6748000;
    float AreaRJ = 1200.25;
    long double PIBrj = 300000000000.50;
    int PontosTuristicosRJ = 30;

    // Informações da carta 1
    printf("Estado: %c\n", EstadoSP);
    printf("Código: %s\n", CodigoSP);
    printf("Nome: %s\n", NomeSP);
    printf("População: %d de pessoas\n", PopulacaoSP);
    printf("Área (em km²): %.2f km²\n", AreaSP);    
    printf("PIB: %.2Lf R$\n", PIBsp);
    printf("Número de pontos de turísticos: %d\n", PontosTuristicosSP);
    printf("\n");
 
     
    // Informações da carta 2
    printf("Estado: %c\n", EstadoRJ);
    printf("Código: %s\n", CodigoRJ);
    printf("Nome: %s\n", NomeRJ);
    printf("População: %d de pessoas\n", PopulacaoRJ);
    printf("Área (em km²): %.2f km²\n", AreaRJ);    
    printf("PIB: %.2Lf R$\n", PIBrj);
    printf("Número de pontos de turísticos: %d\n", PontosTuristicosRJ);
    printf("\n");

    return 0;
 }