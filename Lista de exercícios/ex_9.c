#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 1.8) + 32;

    printf("\nTemperatura em Fahrenheit: %.2f°F\n", fahrenheit);

    return 0;
}
