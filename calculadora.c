#include <stdio.h>

void main(){
        printf("SELECIONE UMA OPERAÇÃO MATEMÁTICA\n");
        printf("----------------------\n");
        printf("-     CALCULADORA    -\n");
        printf("----------------------\n");
        printf("- [ 1 ] - SOMA        -\n");
        printf("- [ 2 ] - SUBTRAÇÃO   -\n");
        printf("- [ 3 ] - MULTIPLICAÇÃO -\n");
        printf("- [ 4 ] - DIVISÃO     -\n");
        printf("----------------------\n");
        
        int opcao = 0;
        scanf("%d", &opcao);
    
    switch (opcao){
        case 1: 
            printf("SOMA");
            
        break;
        
        case 2:
            printf("SUBTRAÇÃO");
        break;
        
        case 3:
            printf("MULTIPLICAÇÃO");
        break;
        
        case 4:
            printf("DIVISÃO");
        break;
        
            default:
            printf("A OPERAÇÃO INVÁLIDA");
    }
    
}
        
