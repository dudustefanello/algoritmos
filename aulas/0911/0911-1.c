/*
1. Ler um número maior que zero e imprimir o quadrado de todos os números entre 0 e o número lido. 
*/

#include <stdio.h>

int main()
{
	printf("1. Ler um número maior que zero e imprimir o quadrado de todos os números entre 0 e o número lido.\n\n");

	int lido, i;

	scanf("%d", &lido);

	for(i = 1; i <= lido; i++)
	{
		printf("%d\n", i * i);
	}

	return 0;
}