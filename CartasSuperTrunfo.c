#include <stdio.h>
int main(){
    //inicialização das variaveis//
    char ltr1[2],ltr2[2],Cidade1[20],Cidade2[20];
    char cod_carta_1[3] = "01";
    char cod_carta_2[3] = "02";
    int  populacao1,populacao2,pontos_turisticos,pontos_turisticos2;
    float area,area2,pib1,pib2;
    ////////////////////////////
 //   printf("Cadastro de Cartas 1°\n");
    printf("Digite uma letra de A a H: ");                 scanf(" %s",&ltr1);
    printf("Digite o nome de um Cidade: ");                scanf(" %[^\n]",&Cidade1[20]); 
    printf("Qual numero da população atual: ");            scanf(" %d",&populacao1);
    printf("Qual a area em km²: ");                        scanf(" %f",&area);
    printf("Qual seu produto bruto interno: ");            scanf(" %f*",&pib1);
    printf("Quantos pontos turisticos tem essa cidade: "); scanf(" %d",&pontos_turisticos);
    ///2°Cadrasto de cartas//
    printf("Cadastro de Cartas 2°\n");
    printf("Digite uma letra de A a H: ");                 scanf(" %s",&ltr2);
    printf("Digite o nome de um Cidade: ");                scanf(" %[^\n]",&Cidade2[20]); 
    printf("Qual numero da população atual: ");            scanf(" %d",&populacao2);
    printf("Qual a area em km²: ");                        scanf(" %f*[^\n]",&area2);
    printf("Qual seu produto bruto interno: ");            scanf(" %f*[^\n]",&pib2);
    printf("Quantos pontos turisticos tem essa cidade:");  scanf(" %d",&pontos_turisticos2);printf("\n");
    //Saida dos Dados das Cartas//;
     //////////////////////////////////////////////////////////////////////
    printf("Carta 1:\n");
    printf("Codigo: %s",ltr1);
    printf("%s\n",cod_carta_1);
    printf("Nome da Cidade: %s\n",&Cidade1[20]);
    printf("população: %d\n",populacao1);
    printf("Área: %f\n",area);
    printf("PIB: %f Bilhões de Reais\n",pib1);
    printf("Números de pontos Turisticos: %d\n\n",pontos_turisticos);
      ///Saida de dados 2° carta//
    printf("Carta 2:\n");
    printf("Codigo: %s",ltr2);
    printf("%s\n",cod_carta_2);
    printf("Nome da Cidade: %s\n",&Cidade2[20]);
    printf("população: %d\n",populacao2);
    printf("Área: %f\n",area2);
    printf("PIB: %f Bilhões de Reais\n",pib2);
    printf("Números de pontos Turisticos: %d\n\n",pontos_turisticos2);
    return 0;
}