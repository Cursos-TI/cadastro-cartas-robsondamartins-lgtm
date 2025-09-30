#include <stdio.h>

int main() {
    char estado[50] = "Rio Grande do Sul";
    char nomeCidade[50] = "Gramado";
    char codigoCarta[10] = "A01";
    int populacao = 39621;
    float area = 237.8;
    float pib = 2.66;          
    int pontosTuristicos = 270;

    printf("Digite o nome do estado:\n ");
    scanf("%s", estado);

    printf("Digite o codigo da carta:\n");
    scanf("%s", codigoCarta);

    printf("Digite a cidade:\n");
    scanf("%s", nomeCidade);

    printf("Digite a populacao:\n");
    scanf("%d", &populacao);

    printf("Digite a area (em km²):\n");
    scanf("%f", &area);

    printf("Digite o PIB (em bilhões de reais):\n");
    scanf("%f", &pib);

    printf("Digite o numero de pontos turisticos:\n ");
    scanf("%d", &pontosTuristicos);
    
    printf("Estado: %s\n", estado); 
    printf("Codigo da carta: %s\n", codigoCarta);
    printf("Cidade: %s\n", nomeCidade);
    printf("Populacao: %d habitantes\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Pontos turisticos: %d\n", pontosTuristicos);
    printf("==================================================\n");

    return 0;
}
