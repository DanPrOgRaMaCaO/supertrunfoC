#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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

    int resultado1, resultado2;
    char PrimeiroAtributo, SegundoAtributo;
    int Populacao1, Populacao2, Area1, Area2, PIB1, PIB2, PontosTuristicos1, PontosTuristicos2, DensidadePopulacional1, DensidadePopulacional2;

    srand(time(0));
    Populacao1 = 1; rand() % 100 + 1;
    Populacao2= 0; rand() % 100 + 1;
    Area1 = 1; rand() % 100 + 1;
    Area2 = 0; rand() % 100 + 1;
    PIB1 = 1; rand() % 100 + 1;
    PIB2 = 0; rand() % 100 + 1;
    PontosTuristicos1 = 1; rand() % 100 + 1;
    PontosTuristicos2 = 0; rand() % 100 + 1;
    DensidadePopulacional1 = 0; rand() % 100 + 1;
    DensidadePopulacional2 = 1; rand() % 100 + 1;

    //Inicio do jogo
    printf("*Bem-vindo ao jogo Super Trunfo*\n");
    printf("Escolha o primeiro atributo.\n");
    printf("P. População\n");
    printf("A. Área\n");
    printf("B. PIB\n");
    printf("T. Numero de pontos turísticos\n");
    printf("D. Densidade populacional\n");   
    scanf("%c", &PrimeiroAtributo);

    switch (PrimeiroAtributo)
    {
    case 'P':
    case 'p':
        printf("Você escolheu a opção: população.\n");
        resultado1 = Populacao1 > Populacao2 ? 1 : 0;
    break;
    case 'A':
    case 'a':
        printf("Você escolheu a opção: área.\n");
        resultado1 = Area1 > Area1 ? 1 : 0;
    break;
    case 'B':
    case 'b':
        printf("Você escolheu a opção: PIB.\n");
        resultado1 = PIB1 > PIB2 ? 1 : 0;
    break;
    case 'T':
    case 't':
        printf("Você escolheu a opção: numero de pontos turísticos.\n");
        resultado1 = PontosTuristicos1 > PontosTuristicos2 ? 1 : 0;
    break;
    case 'D':
    case 'd':
        printf("Você escolheu a opção: densidade populacional.\n");
        resultado1 = 1 / DensidadePopulacional1 > 1 / DensidadePopulacional2? 1 : 0;
    break;
    default:
        printf("Opção inválida. Tente novamente.\n");
        break;
    }


    printf("Escolha o segundo atributo.\n");
    printf("Atenção: Escolha um atributo diferente do primeiro\n");
    printf("P. População\n");
    printf("A. Área\n");
    printf("B. PIB\n");
    printf("T. Numero de pontos turísticos\n");
    printf("D. Densidade populacional\n");
    scanf("%s", &SegundoAtributo); 

    if (PrimeiroAtributo == SegundoAtributo)
    {
        printf("Você escolheu o mesmo atributo!\n");
    } else {
        switch (SegundoAtributo)
    {
        case 'P':
        case 'p':
            printf("Você escolheu a opção: população.\n");
            resultado2 = Populacao1 > Populacao2 ? 1 : 0;
        break;
        case 'A':
        case 'a':
            printf("Você escolheu a opção: área.\n");
            resultado2 = Area1 > Area2 ? 1 : 0;
        break;
        case 'B':
        case 'b':
            printf("Você escolheu a opção: PIB.\n");
            resultado2 = PIB1 > PIB2 ? 1 : 0;
        break;
        case 'T':
        case 't':
            printf("Você escolheu a opção: numero de pontos turísticos.\n");
            resultado2 = PontosTuristicos1 > PontosTuristicos2 ? 1 : 0;
        break;
        case 'D':
        case 'd':
            printf("Você escolheu a opção: densidade populacional.\n");
            resultado2 = 1 / DensidadePopulacional1 > 1 / DensidadePopulacional2 ? 1 : 0;
        break;
        default:
            printf("Opção inválida. Tente novamente.\n");
        break;
        }
        
        if (resultado1 && resultado2){
            printf("### Você venceu ###\n");
        } else if ( resultado1 != resultado2){
            printf("### Empate ###");
        } else {
            printf("### Você perdeu ###\n");
        }
    }

    return 0;
}