#include <stdio.h>

int main()
{
	int entrada, i, soma = 0;

	printf("Inicio: ");
	scanf("%d", &entrada);

	for(i = entrada + 1; i <= entrada + 10; i++)
	{
		soma += i;
	}

	printf("Retorno: %d\n", soma);
}