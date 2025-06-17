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

    printf("Construindo a carta com os dados enviados...");

    printf("\n");
    printf("|----------|\n");
    printf("| CARTA N1 |\n");
    printf("|----------|\n");
    printf("|-Estado: %s\n|-Codigo: %s\n|-Cidade: %s\n|-populacao: %d habitantes\n|-Area: %0.3f km2\n|-PIB: %0.2f R$\n|-Numero de pontos turisticos: %d",
        carta1.estado,carta1.idCarta,carta1.cidade,carta1.pop,carta1.area,carta1.PIB,carta1.nTuristicos);
    printf("\n");
    printf("|----------|\n");
    printf("| CARTA N2 |\n");
    printf("|----------|\n");
    printf("|-Estado: %s\n|-Codigo: %s\n|-Cidade: %s\n|-populacao: %d habitantes\n|-Area: %0.3f km2\n|-PIB: %0.2f R$\n|-Numero de pontos turisticos: %d",
        carta2.estado,carta2.idCarta,carta2.cidade,carta2.pop,carta2.area,carta2.PIB,carta2.nTuristicos);
    printf("\n");
    printf("---------------------------------\n");


    return 0;
};