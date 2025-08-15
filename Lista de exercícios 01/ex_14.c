#include <stdio.h>

int main() {
    float distancia_percorrida, litros_combustivel, consumo_medio;

    printf("Digite a distância percorrida (em km): ");
    scanf("%f", &distancia_percorrida);

    printf("Digite os litros de combustível usados: ");
    scanf("%f", &litros_combustivel);

    consumo_medio = distancia_percorrida / litros_combustivel;

    printf("\nConsumo médio: %.2f km/l\n", consumo_medio);

    return 0;
}
