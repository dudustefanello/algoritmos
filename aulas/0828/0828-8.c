#include <stdio.h>

int main()
{
	float saldo, credito;

	printf("Informe o Saldo Medio do cliente no ano anterior: ");
	scanf("%f", &saldo);

	if(saldo <= 200)
		credito = 0;

	else if(saldo > 200 && saldo <= 400)
		credito = (20 * saldo) / 100;

	else if(saldo > 400 && saldo <= 600)
		credito = (30 * saldo) / 100;

	else if(saldo > 600)
		credito = (40 * saldo) / 100;

	printf("O Credito Especial para esse cliente e de: R$ %.2f\n", credito);

	return 0;
}