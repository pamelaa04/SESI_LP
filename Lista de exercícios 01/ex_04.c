#include <stdio.h>

int main() {
    float centimetros, metros;

    printf("Digite o valor em centímetros: ");
    scanf("%f", &centimetros);

    metros = centimetros / 100;

    printf("%.2f cm = %.2f m\n", centimetros, metros);

    return 0;
}
