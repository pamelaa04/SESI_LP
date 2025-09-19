#include <stdio.h>

int main() {
    int vetor[8];
    int i, maior, menor;

    printf("Digite 8 números inteiros:\n");
    for(i = 0; i < 8; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    
    maior = menor = vetor[0];

    for(i = 1; i < 8; i++) {
        if(vetor[i] > maior) {
            maior = vetor[i];
        }
        if(vetor[i] < menor) {
            menor = vetor[i];
        }
    }

    printf("O maior valor é: %d\n", maior);
    printf("O menor valor é: %d\n", menor);

}
