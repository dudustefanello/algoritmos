#include <stdio.h>

int main()
{
	int entrada = 0, i = 0, impar = 0, par = 0, somapar = 0, somaimpar = 0;

	printf("Informe 10 numeros: \n");
	
	do
	{
		scanf("%d", &entrada);

		if(entrada % 2 == 0)
		{
			par++;
			somapar += entrada;
		}
		else
		{
			impar++;
			somaimpar += entrada;
		}

		i++;
	}
	while(i < 10);

	printf("Quantidade de Pares:   %d\n", par);
	printf("Quantidade de Impares: %d\n", impar);
	printf("--------------------------\n");
	printf("Soma dos Pares:        %d\n", somapar);
	printf("Média dos Impares:     %.3lf\n", (double) somaimpar / impar);
}