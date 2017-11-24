#include <stdio.h>

int main()
{
	float quantidade, unit, preco, final, descontado10, descontado5;

	printf("    Quantidade: ");
	scanf("%f", &quantidade);
	printf("Valor unitario: ");
	scanf("%f", &unit);

	preco = quantidade * unit;

	if(preco < 100)
	{
		final -= preco * 0.05;
	}
	else if(preco >= 100 && preco <= 1000)
	{
		descontado5 = preco - preco * 0.05;
		final = descontado5 - descontado5 * 0.05;
	}
	else if(preco > 1000)
	{
		descontado10 = preco - preco * 0.1;
		final = descontado10 - descontado10 * 0.05;
		printf("Cliente VIP\n");
	}

	printf("Preço Final: R$%.2f\n", final);

	return 0;
}