#include <stdio.h>

int main() {
    float distancia, tempo, velocidade_media;

    printf("Digite a distância percorrida (em km): ");
    scanf("%f", &distancia);

    printf("Digite o tempo gasto (em horas): ");
    scanf("%f", &tempo);

    if (tempo != 0) {
        velocidade_media = distancia / tempo;

        printf("A velocidade média é: %.2f km/h\n", velocidade_media);
    } else {
        printf("O tempo não pode ser zero.\n");
    }

    return 0;
}
