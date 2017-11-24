/*
3. Escrever um algoritmo que calcula e escreve o produto dos números primos entre 92 e 1478
*/

#include <stdio.h>

int main()
{
	printf("3. Escrever um algoritmo que calcula e escreve o produto dos números primos entre 92 e 1478.\n\n");

	long long int i, produto = 1, j, nao;

	for(i = 93; i < 1478; i++)
	{
		nao = 0;

		for(j = 1; j <= i / 2; j++)
			if(i % j == 0)
			{
				nao += j;
				
				if(nao > 1)
					break;
			}	

		if(nao == 1)
			produto = produto * i;
	}

	printf("%lld\n", produto);

	return 0;
}