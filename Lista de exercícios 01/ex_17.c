#include <stdio.h>

int main() {
    int num1, num2, num3;
    int soma, maior_numero;
    float media;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    
    printf("Digite o terceiro número: ");
    scanf("%d", &num3);

    soma = num1 + num2 + num3;

    media = soma / 3.0;

    maior_numero = num1;
    if (num2 > maior_numero) maior_numero = num2;
    if (num3 > maior_numero) maior_numero = num3;

    printf("\nSoma: %d\n", soma);
    printf("Média: %.2f\n", media);
    printf("Maior número: %d\n", maior_numero);

    return 0;
}
