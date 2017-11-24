#include <stdio.h>

int main(){
		int conta;
		int vetor[5], i = 5, soma = 0;

		scanf("%d", &conta);

		for(int i = 0; i < 5; i++){
			vetor[i] = conta % 10;
			conta /= 10;
			printf("vetor[%d]: %d\n", i, vetor[i]);
		}

		printf("\n");

		for(int i = 4; i > 0; i--){
			vetor[i] *= i + 5;
			printf("vetor[%d]: %d\n", i, vetor[i]);
			soma += vetor[i];
		}
		printf("soma: %d\n", soma);
		printf("%% 11: %d\n", soma % 11);

		if(soma % 11 == vetor[0])
			printf("Valido\n");
		else
			printf("Invalido\n");
}