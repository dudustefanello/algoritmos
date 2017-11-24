#include <stdio.h>

int main()
{
	int entrada, i, j;

	printf("Entre com um número: ");
	scanf("%d", &entrada);

	i = 1;
	while(i <= entrada)
	{
		j = entrada - i - 1;
		while(j >= 0)
		{
			printf(" ");
			j--;
		}

		j = 0;
		while(j < i)
		{
			printf("*");
			j++;
		}

		printf("\n");
		i++;
	}
 
	i = 1;
	while(i < entrada)
	{
		j = entrada - i;
		while(j < entrada)
		{
			printf(" ");
			j++;
		}

		j = i;
		while(j <= entrada - 1)
		{
			printf("*");
			j++;
		}

		printf("\n");
		i++;
	}
}