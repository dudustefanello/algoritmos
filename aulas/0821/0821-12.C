#include <stdio.h>

int main()
{
	float valor, tempo, taxa;

	printf("Digite o valor da parcela em atraso:        ");
	scanf("%f", &valor);
	printf("Digite o tempo do atraso (em dias):         ");
	scanf("%f", &tempo);
	printf("Informe a taxa de juros a ser aplicada(%%): ");
	scanf("%f", &taxa);

	printf("O valor a pagar eh: %.1f\n", valor + (valor * (taxa / 100) * tempo));
}