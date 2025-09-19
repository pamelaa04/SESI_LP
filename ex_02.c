#include <stdio.h>

int main() {
    int vetor[10];
    int i, soma = 0;

    printf("Digite 10 números inteiros:\n");
    for(i = 0; i < 10; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &vetor[i]);
        soma += vetor[i]; 
    }

    printf("A soma dos números digitados é: %d\n", soma);

}
