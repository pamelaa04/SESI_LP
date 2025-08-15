#include <stdio.h>

int main() {
    int idade, dias;
    printf("Digite sua idade em anos: ");
    scanf("%d", &idade);
    dias = idade * 365;
    printf("Voce viveu aproximadamente %d dias\n", dias);
    return 0;
}
