#include <stdio.h>

int main()
{
	float valor, quantidade, total[5];
	int i;

	for(i = 0; i < 5; i++)
	{
		scanf("%f %f", &quantidade, &valor);

		total[i] = quantidade * valor;
	}

	for(i = 0; i < 5; i++)
		printf("produto %.2f: R$ \n", total[i]);
}