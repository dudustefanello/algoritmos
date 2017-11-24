/*
5) Escreva um código que produza a seguinte saída:
1******
12*****
123****
1234***
12345**
123456*
1234567
*/

#include <stdio.h>
#include <string.h>

int main()
{
	printf("5) Escreva um código que produza a seguinte saída:\n");
	printf("/*\n");
	printf(" 	1******\n"); //EXEMPLO
	printf("	12*****\n"); //EXEMPLO
	printf("	123****\n"); //EXEMPLO
	printf("	1234***\n"); //EXEMPLO
	printf("	12345**\n"); //EXEMPLO
	printf("	123456*\n"); //EXEMPLO
	printf("	1234567\n"); //EXEMPLO
	printf("*/\n\n");
	
	int i, j, k, l;

	for(i = 1; i <= 7; i++)
	{
		for(j = 1; j <= i; j++)
		{
			printf("%d", j);
		}

		for(k = 7 - j; k >= 0; k--)
		{
			printf("*");
		}

		printf("\n");
	}

	return 0;
}