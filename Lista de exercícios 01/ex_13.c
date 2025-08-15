#include <stdio.h>

int main() {
    float valor_produto, porcentagem_desconto, valor_desconto, novo_preco;

    printf("Digite o valor do produto: ");
    scanf("%f", &valor_produto);

    printf("Digite a porcentagem de desconto: ");
    scanf("%f", &porcentagem_desconto);

    valor_desconto = (valor_produto * porcentagem_desconto) / 100;

    novo_preco = valor_produto - valor_desconto;

    printf("\nValor do desconto: R$ %.2f\n", valor_desconto);
    printf("Novo preço com desconto: R$ %.2f\n", novo_preco);

    return 0;
}
