#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("7) 	Escreva um algoritmo em C que solicita ao usuário um número inteiro. Este número inteiro deverá\n");
	printf("	estar entre 1 e 10 e será usado como a quantidade de linhas em uma pirâmide de números.\n");
	printf("	Você deverá usar laços for aninhados para controlar as linhas e montar a estrutura deseja.\n");

	int i, j, k, l, h, linhas;

 	printf("Informe o numero de linhas desejado: ");
	scanf("%d", &linhas);

	for(i = 1; i <= linhas; i++)
	{
		for(j = linhas - (i - 1); j > 1; j--)
			printf("   ");

		for(l = i; l > 1; l--)
			printf("%d  ", l);

		for(k = 1; k <= i; k++)
			printf("%d  ", k);

		printf("\n");
	}

	return 0;
}