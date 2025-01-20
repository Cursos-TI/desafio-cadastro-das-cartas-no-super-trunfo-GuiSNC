#include <stdio.h>

int main(){
    char estado[2];
    char codigodacarta[10];
    char cidade[200];
    float populacao;
    float area;
    float pib;
    int pontosturisticos;

    char estado2[2];
    char codigodacarta2[10];
    char cidade2[200];
    float populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;

    //Cidade1 
    printf("Digite o Estado: %s\n");
    scanf("%s", &estado);

    printf("Digite o Codigo Carta: %s\n");
    scanf("%s", &codigodacarta);

    printf("Digite o Nome da Cidade: %s\n");
    scanf("%s", &cidade);

    printf("Digite a População: %f\n");
    scanf("%f", &populacao);

    printf("Digite a Área: %f\n");
    scanf("%f", &area);

    printf("Digite o PIB: %f\n");
    scanf("%f", &pib);

    printf("Digite o Número de Ponto Turísticos: &d\n");
    scanf("%d", &pontosturisticos);
    
    //Cidade2
    printf("Digite o Estado: %s\n");
    scanf("%s", &estado2);

    printf("Digite o Codigo Carta: %s\n");
    scanf("%s", &codigodacarta2);

    printf("Digite o Nome da Cidade: %s\n");
    scanf("%s", &cidade2);

    printf("Digite a População: %f\n");
    scanf("%f", &populacao2);

    printf("Digite a Área: %f\n");
    scanf("%f", &area2);

    printf("Digite o PIB: %f\n");
    scanf("%f", &pib2);

    printf("Digite o Número de Ponto Turísticos: &d\n");
    scanf("%d", &pontosturisticos2);

    //Carta 1
    printf("Estado: %s\n Codigo da Carta:%s\n", estado, codigodacarta);
    printf("Cidade: %s\n População:%.3f milhões\n", cidade, populacao);
    printf("Área: %.2f km²\n PIB:%.2f bilhões\n", area, pib);
    printf("Número de Pontos Turísticos:%d\n", pontosturisticos);

    //Carta 2
    printf("\nEstado: %s\n Codigo da Carta:%s\n", estado2, codigodacarta2);
    printf("Cidade: %s\n População:%.3f milhões\n", cidade2, populacao2);
    printf("Área: %.2f km²\n PIB:%.2f bilhões\n", area2, pib2);
    printf("Número de Pontos Turísticos:%d\n", pontosturisticos2);


    return 0;
}