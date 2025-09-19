#include <stdio.h>

int main() {
	char palavra[8] = "CACHORRO";
	char letra;

	printf("BEM-VINDO\n");
	printf("AO JOGO DA FORCA\n");
	printf("VC TEM 10 TENTATIVAS\n");
	printf("PARA UMA PALAVRA DE 8 LETRAS\n");

	// printf("%s", palavra

	printf("_ _ _ _ _ _ _ _\n");
	
	while(1) {

		printf("\nDigite uma letra: ");
		scanf("%c", &letra);

		printf("\n");
		
		for(int i=0; i< 8; i++) {

			if(palavra[i] == letra) {
				printf("%c ", letra);
			} else {
				printf("_ ");
			}
		}
	}



}