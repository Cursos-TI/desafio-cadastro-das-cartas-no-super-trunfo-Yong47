#include <stdio.h>


int main() {
    
    //Cadastro de variáveis
    
    char estado;

    char codcarta[5];

    char cidade[50];

    int populacao;

    float area;

    float pib;

    int turisticos;



    //informações da carta 1

    printf("Bem vindo ao Supertrunfo! \n");

    printf("Digite as informaçoes da carta 01 \n");

    printf("Digite o estado da carta 1: ");

    scanf("%s", &estado);

    printf("Digite o codigo da carta 1: ");

    scanf("%s", &codcarta);

    printf("Digite o nome da cidade da carta 1: ");

    scanf("%s", &cidade);

    printf("Digite a população da cidade da carta 1:");

    scanf("%d", &populacao);

    printf("Digite a área da cidade da carta 1:");

    scanf("%f", &area);

    printf("Digite o PIB da cidade da carta 1:");

    scanf("%f", &pib);

    printf("Digite o número de pontos turístios da carta 1:");

    scanf("%d", &turisticos);


    //informações da carta 2

    printf("Agora digite as informaçoes da carta 02 \n");
    
    
    printf("Digite o estado da carta 2):");

    scanf("%s", &estado);

    printf("Digite o codigo da carta 2:");

    scanf("%s", &codcarta);

    printf("Digite o nome da cidade da carta 2: ");

    scanf("%s", &cidade);

    printf("Digite a população da cidade da carta 2:");

    scanf("%d", &populacao);

    printf("Digite a área da cidade da carta 2:");

    scanf("%f", &area);

    printf("Digite o PIB da cidade da carta 2:");

    scanf("%f", &pib);

    printf("Digite o número de pontos turístios da carta 2:");

    scanf("%d", &turisticos);

    

    //Exibição da cartas 1

    printf("Carta 01: \n");
    printf("Estado: %s \n", estado);
    printf("Codigo: %s \n", codcarta);
    printf("Cidade: %s \n", cidade);
    printf("Populacao: %d \n", populacao);
    printf("Area: %.2f \n", area);
    printf("Pib: %.2f \n", pib);
    printf("Pontos turisticos: %d \n", turisticos);
    
    //Exibição da carta 2
                
    printf("Carta 02: \n");
    printf("Estado: %s \n", estado);
    printf("Codigo: %s \n", codcarta);
    printf("Cidade: %s \n", cidade);
    printf("Populacao: %d \n", populacao);
    printf("Area: %.2f \n", area);
    printf("Pib: %.2f \n", pib);
    printf("Pontos turisticos: %d \n", turisticos);



    


    
       return 0;
}
