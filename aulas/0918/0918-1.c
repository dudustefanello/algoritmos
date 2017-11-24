#include <stdio.h>

int main()
{
	int numerador = 1, denominador = 1;
	float soma = 0;

	while(numerador <= 99)
	{
		soma += (double) numerador / denominador;

		denominador++;
		numerador += 2;
	}

	printf("S = %.3f\n", soma);
}