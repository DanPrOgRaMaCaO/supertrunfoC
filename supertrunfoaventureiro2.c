#include <stdio.h>

int main(){
    char EstadoSP = 'A';
    char CodigoSP[20] = "A01";
    char NomeSP[30] = "São Paulo";
    unsigned int PopulacaoSP = 12325000;
    float AreaSP = 1521.11;
    long double PIBsp = 699000000000.28;
    int PontosTuristicosSP = 50;

    char EstadoRJ = 'B';
    char CodigoRJ[20] = "B02";
    char NomeRJ[30] = "Rio de Janeiro";
    unsigned int PopulacaoRJ = 6748000;
    float AreaRJ = 1200.25;
    long double PIBrj = 300000000000.50;
    int PontosTuristicosRJ = 30;

    // Informações da carta 1
    printf("Carta 1\n");
    printf("Estado: %c\n", EstadoSP);
    printf("Código: %s\n", CodigoSP);
    printf("Nome: %s\n", NomeSP);
    printf("População: %u de pessoas\n", PopulacaoSP);
    printf("Área (em km²): %.2f km²\n", AreaSP);    
    printf("PIB: %.2Lf R$\n", PIBsp);
    printf("Número de pontos de turísticos: %d\n", PontosTuristicosSP);
    printf("\n");
    
    //Densidade populacional e PIB percapita de São Paulo
    float DensidadePopulacionalSP = PopulacaoSP / AreaSP; // 8102.64 hab/km²
    float PIBpercapitaSP = PIBsp / PopulacaoSP; // 56714.00 R$

    printf("A densidade populacional de São Paulo é: %.2f hab/km²\n", DensidadePopulacionalSP);
    printf("O PIB per capita de São Paulo %.2fR$\n", PIBpercapitaSP);
    printf("\n");

    // Informações da carta 2
    printf("Carta 2\n");
    printf("Estado: %c\n", EstadoRJ);
    printf("Código: %s\n", CodigoRJ);
    printf("Nome: %s\n", NomeRJ);
    printf("População: %u de pessoas\n", PopulacaoRJ);
    printf("Área (em km²): %.2f km²\n", AreaRJ);    
    printf("PIB: %.2Lf R$\n", PIBrj);
    printf("Número de pontos de turísticos: %d\n", PontosTuristicosRJ);
    printf("\n");
   
    //Densidade populacional e PIB percapita de São Paulo
    float DensidadePopulacionalRJ = PopulacaoRJ / AreaRJ; // 5622.16 hab/km²
    float PIBpercapitaRJ = PIBrj / PopulacaoRJ; // 44457.62 R$

    printf("A densidade populacional do Rio de Janeiro é: %.2f hab/km²\n", DensidadePopulacionalRJ);
    printf("O PIB per capita do Rio de Janeiro é: %.2fR$\n", PIBpercapitaRJ);
    printf("\n");

    // Comparação das cartas
    float SuperPoderSP = PopulacaoSP + AreaSP + PIBsp + PontosTuristicosSP + PIBpercapitaSP + 1 / DensidadePopulacionalSP;
    float SuperPoderRJ = PopulacaoRJ + AreaRJ + PIBrj + PontosTuristicosRJ + PIBpercapitaRJ + 1 / DensidadePopulacionalRJ;
    
    // "1" quando a carta 1 vencer/"0" quando a carta 2 vencer
    printf("População: (%d) = Carta 1 venceu\n", (PopulacaoSP > PopulacaoRJ));
    printf("Área (em km²): (%d) = Carta 1 venceu\n", (AreaSP > AreaRJ));
    printf("PIB: (%d) = Carta 1 venceu\n", (PIBsp > PIBrj));
    printf("Numero de pontos turísticos: (%d) = Carta 1 venceu\n", (PontosTuristicosSP > PontosTuristicosRJ));
    printf("PIB percapita: (%d) = Carta 1 venceu\n", (PIBpercapitaSP > PIBpercapitaRJ));
    printf("Densidade Populacional: (%d) = Carta 2 venceu\n", (1 / DensidadePopulacionalSP > 1 / DensidadePopulacionalRJ));
    printf("Super poder: (%d) = Carta 1 venceu\n", (SuperPoderSP > SuperPoderRJ));
    printf("\n");

    // Comparação de cartas
    printf("Comparação de cartas (atributo: população):\n");
    printf("Carta 1: São Paulo: %d\n", PopulacaoSP);
    printf("Carta 2: Rio de Janeiro %d\n", PopulacaoRJ);
    
    if(PopulacaoSP > PopulacaoRJ){
        printf("Carta 1 (São Paulo) venceu!\n");
    }else{
        printf("Carta 2 (Rio de Janeiro) venceu!\n");
    }
    printf("\n");

    // Menu interativo
    int EscolhaCarta1;

    printf("*Jogo Super Trunfo*\n");
    printf("Carta 1: %s\n", NomeSP);
    printf("Carta 2: %s\n", NomeRJ);
    printf("Escolha um atributo para fazer a comparação\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Numero de pontos turísticos\n");
    printf("5. Densidade populacional\n");
    scanf("%d", &EscolhaCarta1);
    
    switch (EscolhaCarta1)
    {
    case 1:
        printf("Atributo escolhido: População\n");
        printf("Carta 1: %u\n", PopulacaoSP);
        printf("Carta 2: %u\n", PopulacaoRJ);
        if (PopulacaoSP > PopulacaoRJ){
            printf("### Carta 1 venceu ###\n");
        } else if (PopulacaoSP < PopulacaoRJ){
            printf("### Carta 2 venceu ###\n");
        } else {("### Empate ###\n");}

        break;
        case 2:
        printf("Atributo escolhido: Área\n");
        printf("Carta 1: %.2f\n", AreaSP);
        printf("Carta 2: %.2f\n", AreaRJ);
        if (AreaSP > AreaRJ){
            printf("### Carta 1 venceu ###\n");
        } else if (AreaSP < AreaRJ){
            printf("### Carta 2 venceu ###\n");
        } else {("### Empate ###\n");}
        break;
        case 3:
        printf("Atributo escolhido: PIB\n");
        printf("Carta 1: %.2Lf\n", PIBsp);
        printf("Carta 2: %.2Lf\n", PIBrj);
        if (PIBsp > PIBrj){
            printf("### Carta 1 venceu ###\n");
        } else if (PIBsp < PIBrj){
            printf("### Carta 2 venceu ###\n");
        } else {("### Empate ###\n");}
        break;
        case 4:
        printf("Atributo escolhido: Numero de pontos turísticos\n");
        printf("Carta 1: %d\n", PontosTuristicosSP);
        printf("Carta 2: %d\n", PontosTuristicosRJ);
        if (PontosTuristicosSP > PontosTuristicosRJ){
            printf("### Carta 1 venceu ###\n");
        } else if (PontosTuristicosSP < PontosTuristicosRJ){
            printf("### Carta 2 venceu ###\n");
        } else {("### Empate ###\n");}
        break;
        case 5:
        printf("Atributo escolhido: Densidade populacional\n");
        printf("Carta 1: %.2f\n", DensidadePopulacionalSP);
        printf("Carta 2: %.2f\n", DensidadePopulacionalRJ);
        if (1 / DensidadePopulacionalSP > 1 / DensidadePopulacionalRJ){
            printf("### Carta 1 venceu ###\n");
        } else if (1 / DensidadePopulacionalSP < 1 / DensidadePopulacionalRJ){
            printf("### Carta 2 venceu ###\n");
        } else {("### Empate ###\n");}
        break;
    default:
        printf("Opção inválida.\n");
        break;
    }
}