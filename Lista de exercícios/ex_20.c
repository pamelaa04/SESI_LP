#include <stdio.h>

int main() {
    char nome[100], profissao[100];
    int idade;

    printf("Digite o seu nome: ");
    fgets(nome, sizeof(nome), stdin);

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    getchar();

    printf("Digite a sua profissão: ");
    fgets(profissao, sizeof(profissao), stdin); 

    printf("\nNome: %s", nome);
    printf("Idade: %d\n", idade);
    printf("Profissão: %s", profissao);

    return 0;
}
