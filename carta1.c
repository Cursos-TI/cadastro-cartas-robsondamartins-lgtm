#include <stdio.h>

int main() {
    char estado[50] = "Rio_Grande_do_Sul";
    char nomecidade[50] = "Gramado";
    char codigocarta[10] = "RS01";
    int populacao = 39621;
    float area = 237.8;
    float pib = 2660000000.0f;
    int pontosturisticos = 270;

    printf("Digite o nome do estado: \n");
    scanf("%s",estado); 

    printf("Digite o codigo da carta: \n");
    scanf("%s",codigocarta);

    printf("Digite a cidade:\n");
    scanf("%s",nomecidade);

    printf("Digite a populacao:\n");
    scanf("%d", &populacao);

    printf("Digite a area (em km²):\n");
    scanf("%f", &area);

    printf("Digite o PIB (em reais):\n");
    scanf("%f", &pib); 

    printf("Digite o numero de pontos turisticos:\n");
    scanf("%d", &pontosturisticos);

    printf("Estado: %s\n", estado);
    printf("Codigo da carta: %s\n", codigocarta);
    printf("Cidade: %s\n", nomecidade);
    printf("Populacao: %d habitantes\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: %.2f reais\n", pib);
    printf("Pontos turisticos: %d\n", pontosturisticos);
     printf("==================================================\n");

     return 0;
}