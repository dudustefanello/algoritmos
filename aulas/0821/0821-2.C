#include <stdio.h>

int main()
{
	int valor[4], soma = 0, i;
	double media;

	for (i = 1; i <= 3; i++)
	{
		printf("Calculo da media aritmetica de 3 numeros inteiros\n");
		printf("Digite o %do numero: ", i);
		scanf("%d", &valor[i]);
		soma += + valor[i];
	}

	media = soma / 3;

	printf("A media entre os valores informados eh: %.2lf\n", media);
}