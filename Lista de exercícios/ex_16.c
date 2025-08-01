#include <stdio.h>

int main() {
    int idade, dias_vividos;

    printf("Digite a sua idade em anos: ");
    scanf("%d", &idade);

    dias_vividos = idade * 365;

    printf("Você viveu aproximadamente %d dias.\n", dias_vividos);

    return 0;
}

