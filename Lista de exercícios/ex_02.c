#include <stdio.h>

void main(){
    int a = 5;
    int b = 10;
    
    printf("Digite o valor de A: ");
    scanf("%d", &a);
    
    printf ("Digite o valor de B:");
    scanf ("%d", &b);
    
    
    int soma = a + b;
    
    printf("\n");
    
    printf("Seja Bem Vindo!\n");
    printf("%d + %d = %d",a , b , soma);

}