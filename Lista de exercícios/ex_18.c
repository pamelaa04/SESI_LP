#include <stdio.h>

int main() {
    int total_votos, votos_A, votos_B;
    float percentual_A, percentual_B;

    printf("Digite o total de votos da eleição: ");
    scanf("%d", &total_votos);

    printf("Digite o número de votos do candidato A: ");
    scanf("%d", &votos_A);

    printf("Digite o número de votos do candidato B: ");
    scanf("%d", &votos_B);

    percentual_A = (float)votos_A / total_votos * 100;
    percentual_B = (float)votos_B / total_votos * 100;

    printf("\nPercentual de votos do candidato A: %.2f%%\n", percentual_A);
    printf("Percentual de votos do candidato B: %.2f%%\n", percentual_B);

    return 0;
}
