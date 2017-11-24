#include <stdio.h>

int main()
{
	float numerador, denominador;
	int resultado;

	printf("  Informe o numerador: ");
	scanf("%f", &numerador);
	printf("Informe o denominator: ");
	scanf("%f", &denominador);

	resultado = numerador / denominador;
	printf("%.0f / %.0f = %d\n", numerador, denominador, resultado);
}