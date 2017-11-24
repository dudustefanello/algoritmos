#include <stdio.h>

int main()
{
	int numero[3], menor, aux, i;

	printf("Digite tres numeros: ");
	
	for(i = 0; i <= 2; i++)
	{
		scanf("%d", &numero[i]);
	}

	if(numero[0] > numero[1])
	{
		aux = numero[0];
		numero[0] = numero[1];
		numero[1] = aux;
	}

	if(numero[0] > numero[2])
	{
		aux = numero[0];
		numero[0] = numero[2];
		numero[2] = aux;
	}

	printf("%d eh o menor\n", numero[0]);

	return 0;
}