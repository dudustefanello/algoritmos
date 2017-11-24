#include <stdio.h>
#include <math.h>

int main()
{
	double numero[3], i;

	scanf("%lf", &numero[0]);
	scanf("%lf", &numero[1]);
	scanf("%lf", &numero[2]);

	if(numero[0] >= 0)
	{
		printf("%.2lf\n", sqrt(numero[0]));
	}
	else
	{
		printf("%.2lf\n", numero[0] * numero[0]);
	}

	if(numero[1] >= 10 && numero[1] <= 100)
	{
		printf("%.2lf esta entre 10 e 100 - intervalo permitido\n", numero[1]);
	}
	else
	{
		printf("%.2lf nao esta entre 10 e 100 - intervalo nao permitido\n", numero[1]);
	}

	if(numero[2] < numero[1])
	{
		printf("%.2lf\n", numero[1] - numero[2]);
	}
	else
	{
		printf("%.2lf\n", numero[2] + 1);
	}
}