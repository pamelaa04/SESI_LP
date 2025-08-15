#include <stdio.h>

int main() {
    float num1, num2;

    printf("Digite o primeiro número: ");
    scanf("%f", &num1);

    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    float soma = num1 + num2;
    float subtracao = num1 - num2;
    float multiplicacao = num1 * num2;
    float divisao;

    if (num2 != 0) {
        divisao = num1 / num2;
        printf("Divisão: %.2f\n", divisao);
    } else {
        printf("Erro: Não é possível dividir por zero.\n");
    }

    printf("Soma: %.2f\n", soma);
    printf("Subtração: %.2f\n", subtracao);
    printf("Multiplicação: %.2f\n", multiplicacao);

    return 0;
}
