#include <stdio.h>

int main()
{
	double entrada;

	printf("Digite um numero inteiro: \n");
	scanf("%lf", &entrada);
	printf("A terça parte desse numero eh: %.2lf\n", entrada / 3);
}