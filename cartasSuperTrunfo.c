#include <stdio.h>

int main(){
    char cidade[20];
    float codigopostal;
    int populacao;
    float area;
    float pib;
    int pontosturisticos;

    printf("A1\n");
    printf("- Cidade: São Paulo\n- Codigo Postal: 01153-000\n- População: 11.895.578\n- Área:1.523 km² \n- PIB: R$ 828,98 bilhões \n- Pontos Turísticos: 36  \n");

    printf("\nA2\n");
    printf("\n- Cidade: Goiânia \n- Codigo Postal: 72800-000 \n- População: 2.654.860 \n- Área: 728,8 km² \n- PIB: R$ 8,149 bilhões \n- Pontos Turísticos: 42 \n");

    printf("\nA3\n");
    printf("\n- Cidade: Rio Janeiro \n- Codigo Postal: 20230-010 \n- População: 6.211.000 \n- Área: 1.200 km² \n- PIB: R$ 37,784 bilhões  \n- Pontos Turísticos: 58 \n");
    
    printf("\nA4\n");
    printf("\n- Cidade: Porto Alegre \n- Codigo Postal: 90010-420 \n- População: 1,333 milhões \n- Área: 496,8 km² \n- PIB: R$ 9,787 bilhões  \n- Pontos Turísticos: 40 \n");




    
    scanf("%s", &cidade);
    scanf("%d", &codigopostal);
    scanf("%d", &populacao);
    scanf("%f", &area);
    scanf("%f", &pib);
    scanf("%d", &pontosturisticos);


    return 0;


    
}