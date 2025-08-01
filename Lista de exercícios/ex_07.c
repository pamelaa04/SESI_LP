#include <stdio.h>

int main() {
    char produto[100];
    float preco_unitario, valor_total;
    int quantidade;

    
    printf("Digite o nome do produto: ");
    fgets(produto, sizeof(produto), stdin);  

    printf("Digite o preço unitário do produto (R$): ");
    scanf("%f", &preco_unitario);

    printf("Digite a quantidade comprada: ");
    scanf("%d", &quantidade);

    valor_total = preco_unitario * quantidade;

    printf("O valor total a ser pago por %s é: R$%.2f\n", produto, valor_total);

    return 0;
}
