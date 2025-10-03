#include <stdio.h>

int main() {
    char estado[50] = "Parana";
    char nomecidade[50] = "Foz_do_Iguacu";
    char codigocarta[10] = "P01";
    int populacao = 257000;
    float area = 617.7;
    float pib = 21000000000.0f;
    int pontosturisticos = 250;

    printf("Digite o nome do estado: \n");
    scanf("%s", estado); 

    printf("Digite o codigo da carta: \n");
    scanf("%s", codigocarta);

    printf("Digite a cidade: \n");
    scanf("%s", nomecidade);

    printf("Digite a populacao: \n");
    scanf("%d", &populacao);

    printf("Digite a area (em km²): \n");
    scanf("%f", &area);

    printf("Digite o PIB (em reais): \n");
    scanf("%lf", &pib); 

    printf("Digite o numero de pontos turisticos: \n");
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
