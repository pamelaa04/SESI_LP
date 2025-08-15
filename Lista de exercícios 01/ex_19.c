#include <stdio.h>

int main() {
    float dolares, cotacao, reais;

    printf("Digite a quantidade de dólares que você possui: ");
    scanf("%f", &dolares);

    printf("Digite a cotação atual do dólar: ");
    scanf("%f", &cotacao);

    reais = dolares * cotacao;

    printf("\nVocê possui R$ %.2f reais.\n", reais);

    return 0;
}
