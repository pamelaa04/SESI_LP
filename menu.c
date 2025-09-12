#include <stdio.h>

void SOMA(){
int A = 0;
int B = 0;
 
   printf("\nDigite o valor de A:");
 scanf("%d", &A);
 
   printf("Digite o valor de B:");
 scanf("%d", &B);
   printf("%d + %d = %d\n", A, B, A+B);
}

void SUBTRAÇÃO(){

 int A =0;
 int B =0;
 
 printf("\nDigite o valor de A: ");
 scanf("%d", &A);
 
 printf("Digite o valor de B: ");
 scanf("%d", &B);
 printf("%d - %d =%d\n", A, B, A / B);
}

void DIVISÃO(){

 int A = 0;
 int B = 0;
 
 printf("\nDigite o valor de A: ");
 scanf("%d", &A);
 
 printf("Digite o valor de B: ");
 scanf("%d", &B);
 printf("%d / %d = %d\n", A, B, A / B);
}

void MULTIPLICAÇÃO(){

 int A =0;
 int B =0;
 
 printf("\nDigite o valor de A: ");
 scanf("%d", &A);
 
 printf("Digite o valor de B: ");
 scanf("%d", &B);
 printf("%d * %d = %d\n", A, B, A / B);
}

void main(){
    
     printf ("SELECIONE UMA OPERAÇÃO MATEMÁTICA"  );
     printf ("---------------------------------\n");
     printf ("-            CALCULADORA         \n");
     printf ("---------------------------------\n");
     printf ("- [1] SOMA                     - \n");   
     printf ("- [2] SUBTRAÇÃO                - \n");
     printf ("- [3] DIVISÃO                  - \n");
     printf ("- [4] MULTIPLICAÇÃO            - \n");
     printf ("---------------------------------\n");
 
     int opção = 0;
     scanf("%d", &opção);
 
     switch(opção){
         case 1:
            printf ("SOMA");
            SOMA();
            
         break;
        
        case 2:
            printf ("SUBTRAÇÃO");
            SUBTRAÇÃO();
        break;
        
        case 3:
            printf ("DIVISÃO");
            DIVISÃO();
        break;
        
        case 4:
            printf ("MULTIPLICAÇÃO");
            MULTIPLICAÇÃO ();
         break;
        
        default:
            printf ("A OPERAÇÃO É INVÁLIDA");
    } 
     
}