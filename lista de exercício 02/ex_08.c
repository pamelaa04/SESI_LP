#include <stdio.h>

int main() {
    float base, altura, area;
    printf("Digite a base e a altura do triangulo: ");
    scanf("%f %f", &base, &altura);
    area = (base * altura) / 2;
    printf("Area do triangulo: %.2f\n", area);
    return 0;
}
