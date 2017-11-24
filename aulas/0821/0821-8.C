#include <stdio.h>

int main()
{
	float application;

	printf("Digite o valor da aplicaçao (R$): ");
	scanf("%f", &application);
	printf("O novo saldo eh:  R$ %.2f\n", application += application * 0.01);
}