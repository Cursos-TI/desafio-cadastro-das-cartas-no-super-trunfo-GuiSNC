#include <stdio.h>

int main(){
    char estado;
    char cidade;
    char codigodacarta;
    int populacao;
    float area;
    float pib;
    int pontosturisticos;

    printf("Digite o Estado: %c");
    scanf("%c", &estado);

    print("Digite o nome da Cidade: %s");
    scanf("%s", &cidade);

    printf("Digite o Codigo de Carta: % c\n");
    scanf("% c", &codigodacarta);

    printf("Digite a população: %d");
    scanf("%d", &populacao);

    printf("Digite a Área: %f");
    scanf("%f", &area);

    printf("Digite o PIB: %f");
    scanf("%f", &pib);

    printf("Digite os Pontos Turisticos: %d");
    scanf("%d", &pontosturisticos);

    printf("Estado: %c\n", estado);
    printf("Cidade: %s", cidade);
    printf("Codigo da Carta: %c", codigodacarta);
    printf("População: %d", populacao);
    printf("Área: %.3f", area);
    printf("PIB: %.2f", pib);
    printf("Pontos Turisticos: %d", pontosturisticos);
    
    
    return 0;


    
}