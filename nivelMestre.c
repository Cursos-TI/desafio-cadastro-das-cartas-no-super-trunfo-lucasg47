#include <stdio.h>
#include <string.h>

struct Cartas{
    char estado[10];
    char idCarta[10];
    char cidade[50];
    int pop;
    float area;
    float PIB;
    int nTuristicos;
    float densidadePOP;
    float PIBper;
    float super;
};

char atributosCarta[300];


int main(){

    printf("\n");
    printf("---------------------------------\n");
    printf("Cadastro de cartas\n");
    printf("Por favor digite as informacoes requisitadas abaixo\n");
    printf("Carta numero 1:\n");
    printf("---------------------------------\n");

    struct Cartas carta1;

    printf("Nome do estado: \n");
    scanf("%s", &carta1.estado);

    printf("Codigo da carta: \n");
    scanf("%s", &carta1.idCarta);

    printf("Nome da cidade: \n");
    getchar();
    fgets(carta1.cidade, sizeof(carta1.cidade), stdin);
    carta1.cidade[strcspn(carta1.cidade, "\n")] = '\0';

    printf("Populacao total: \n");
    scanf("%d", &carta1.pop);

    printf("Area total: \n");
    scanf("%f", &carta1.area);

    printf("Produto interno bruto: \n");
    scanf("%f", &carta1.PIB);

    printf("Numero de pontos turisticos: \n");
    scanf("%d", &carta1.nTuristicos);

    printf("\n");
    printf("---------------------------------\n");
    printf("\n");

    carta1.densidadePOP = carta1.pop / carta1.area;
    carta1.PIBper = carta1.PIB / carta1.pop;

    carta1.super = ((carta1.pop + carta1.area + carta1.PIB + carta1.nTuristicos + carta1.PIBper) - carta1.densidadePOP) / 6;

    printf("Construindo a carta com os dados enviados...");

    printf("\n");
    printf("---------------------------------\n");
    printf("\n");
    printf("Agora vamos incrementar a carta numero 2: \n");
    printf("\n");
    printf("---------------------------------\n");
    printf("\n");

    struct Cartas carta2;
    
    printf("Nome do estado: \n");
    scanf("%s", &carta2.estado);

    printf("Codigo da carta: \n");
    scanf("%s", &carta2.idCarta);

    printf("Nome da cidade: \n");
    getchar();
    fgets(carta2.cidade, sizeof(carta2.cidade), stdin);
    carta2.cidade[strcspn(carta2.cidade, "\n")] = '\0';

    printf("Populacao total: \n");
    scanf("%d", &carta2.pop);

    printf("Area total: \n");
    scanf("%f", &carta2.area);

    printf("Produto interno bruto: \n");
    scanf("%f", &carta2.PIB);

    printf("Numero de pontos turisticos: \n");
    scanf("%d", &carta2.nTuristicos);

    printf("\n");
    printf("---------------------------------\n");
    printf("\n");

    carta2.densidadePOP = carta2.pop / carta2.area;
    carta2.PIBper = carta2.PIB / carta2.pop;

    carta2.super = ((carta2.pop + carta2.area + carta2.PIB + carta2.nTuristicos + carta2.PIBper) - carta2.densidadePOP) / 6;

    printf("Construindo a carta com os dados enviados...");

    printf("\n");
    printf("|----------|\n");
    printf("| CARTA N1 |\n");
    printf("|----------|\n");
    printf("|-Estado: %s\n|-Codigo: %s\n|-Cidade: %s\n|-populacao: %d habitantes\n|-Area: %0.2f km2\n|-PIB: %0.2f R$\n|-Numero de pontos turisticos: %d\n|-Densidade populacional: %0.2f hab/km2\n|-PIB per capita: %0.2f R$\n|-Super poder: %0.2f",
        carta1.estado,carta1.idCarta,carta1.cidade,carta1.pop,carta1.area,carta1.PIB,carta1.nTuristicos,carta1.densidadePOP,carta1.PIBper,carta1.super);
    printf("\n");
    printf("|----------|\n");
    printf("| CARTA N2 |\n");
    printf("|----------|\n");
    printf("|-Estado: %s\n|-Codigo: %s\n|-Cidade: %s\n|-populacao: %d habitantes\n|-Area: %0.2f km2\n|-PIB: %0.2f R$\n|-Numero de pontos turisticos: %d\n|-Densidade populacional: %0.2f hab/km2\n|-PIB per capita: %0.2f R$\n|-Super poder: %0.2f",
        carta2.estado,carta2.idCarta,carta2.cidade,carta2.pop,carta2.area,carta2.PIB,carta2.nTuristicos,carta2.densidadePOP,carta2.PIBper,carta2.super);
    printf("\n");
    printf("---------------------------------\n");
    printf("\n");
    printf("Comparacao das cartas cadastradas: carta numero 1 e carta numero 2...\n");
    printf("---------------------------------\n");
    printf("\n");

    if (carta1.pop > carta2.pop){
        printf("Populacao: carta 1 venceu (1)\n");
    }else{
        printf("Populacao: carta 2 venceu (0)\n");
    }

    if (carta1.area > carta2.area){
        printf("Area: carta 1 venceu (1)\n");
    }else{
        printf("Area: carta 2 venceu (0)\n");
    }

    if (carta1.PIB > carta2.PIB){
        printf("PIB: carta 1 venceu (1)\n");
    }else{
        printf("PIB: carta 2 venceu (0)\n");
    }

    if (carta1.nTuristicos > carta2.nTuristicos){
        printf("Numero de pontos turisticos: carta 1 venceu (1)\n");
    }else{
        printf("Numero de pontos turisticos: carta 2 venceu (0)\n");
    }

    if (carta1.densidadePOP < carta2.densidadePOP){
        printf("Densidade populacional: carta 1 venceu (1)\n");
    }else{
        printf("Densidade populacional: carta 2 venceu (0)\n");
    }

    if (carta1.PIBper > carta2.PIBper){
        printf("PIB percapita: carta 1 venceu (1)\n");
    }else{
        printf("PIB percapita: carta 2 venceu (0)\n");
    }

    if (carta1.super > carta2.super){
        printf("Super poder: carta 1 venceu (1)\n");
    }else{
        printf("Super poder: carta 2 venceu (0)\n");
    }
    



    return 0;
};