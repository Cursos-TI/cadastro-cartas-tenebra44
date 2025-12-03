#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  // Área para entrada de dados
 // Área para exibição dos dados da cidade

  #include <stdio.h>
int main() {


    // Declaraçao de variaveis

    char estado,estado2;
    char codigo[4],codigo2[4];
    char cidade[50], cidade2[50];
    int populaçao, populaçao2;
    float area, area2,Pib,Pib2;
    int pontoTuristico,pontoTuristico2;

    //Desenvolvimento do codigo parte 1

    
    printf("Digite o Estado da carta de ('A' a 'H') :\n");

    scanf(" %c", &estado);
    
    printf("Digite o codigo (max 3 caracteres):\n");

    scanf("%3s", codigo);

    printf("Digite o nome da cidade : \n");
    
    scanf("%s", cidade);

    printf("Numero da Populaçao :\n");

    scanf("%d", &populaçao);

    printf("Digite a Area km² : \n");

    scanf("%f", &area);

    printf("Qual o PiB $:\n");

    scanf("%f", &Pib);

    printf("Quantos Pontos turisticos tem :\n");

    scanf("%d", &pontoTuristico);

    printf("\n");
     //Desenvolvimento do codigo parte 2

    
    printf("Digite o Estado da carta de ('A' a 'H') :\n");

    scanf(" %c", &estado2);

    printf("Digite o codigo (max 3 caracteres):\n");

    scanf("%3s", codigo2);

    getchar();

    printf("Digite o nome da cidade : \n");
    
    scanf("%s", cidade2);

    printf("Numero da Populaçao :\n");

    scanf("%d", &populaçao2);

    printf("Digite a Area : \n");

    scanf("%f", &area2);

    printf("Qual o PiB :\n");

    scanf("%f", &Pib2);

    printf("Quantos Pontos turisticos tem :\n");

    scanf("%d", &pontoTuristico2);

    printf("\n");
    //Impressao dos dados na tela
    
    printf("Carta 1 \n");
    printf("Estado : %c \n", estado);
    printf("Codigo :%s \n", codigo);
    printf("Nome da Cidade : %s\n", cidade);
    printf("Populaçao :%d \n", populaçao);
    printf("Area :%f \n", area);
    printf("PIB :%f \n", Pib);
    printf("Numero de Pontos Turisticos :%d \n",pontoTuristico);

    printf("\n");

    printf("Carta 2 \n");
    printf("Estado : %c \n", estado2);
    printf("Codigo :%s \n", codigo2);
    printf("Nome da Cidade : %s \n", cidade2);
    printf("Populaçao :%d \n", populaçao2);
    printf("Area :%f \n", area2);
    printf("PIB :%f \n", Pib2);
    printf("Numero de Pontos Turisticos :%d \n",pontoTuristico2);

    return 0;
}

return 0;
} 
