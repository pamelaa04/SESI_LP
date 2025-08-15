#include <stdio.h>

int main() {
    char nome[100];
    float salario_mensal, total_ganho;
    int meses_trabalhados;

   
    printf("Digite o nome do funcionário: ");
    fgets(nome, sizeof(nome), stdin); 

    printf("Digite o valor do salário mensal (R$): ");
    scanf("%f", &salario_mensal);

    printf("Digite o número de meses trabalhados: ");
    scanf("%d", &meses_trabalhados);

    total_ganho = salario_mensal * meses_trabalhados;

    printf("Funcionário %sganhou R$%.2f em %d meses.\n", nome, total_ganho, meses_trabalhados);

    return 0;
}
