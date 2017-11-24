#include <stdio.h>

int main()
{
	float peso, real, dindin;
	int escolha;

	INICIO:
	printf("Escolha a conversao que deseja fazer: (1, 2, 3)\n");
	printf("	1 - Dolares para Reais;\n");
	printf("	2 - Reais para Pesos;\n");
	printf("	3 - Encerrar.\n");
	
	scanf("%d", &escolha);

	switch(escolha)
	{
		case 1:
			printf("D$: ");
			scanf("%f", &dindin);
			real = dindin * 3.5;
			printf("R$: %.2f\n", real);
			break;

		case 2:
			printf("R$: ");
			scanf("%f", &dindin);
			peso = dindin * 10;
			printf("P$: %.2f\n", peso);
			break;

		case 3:
			return 0;

		default:
			goto INICIO;
	}
}