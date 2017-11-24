algoritmo: "Salario"

#include <stdio.h>

int main()
{
	double vendido, bruto;

	scanf("%lf", &vendido);

	bruto = (vendido * 0.1) + 1200;

	printf("R$ %.2lf\n", bruto);

	return 0;
}