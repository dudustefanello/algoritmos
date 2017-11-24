#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	printf("8) 	Escreve um algoritmo que implemente uma calculadora com os seguintes operadores +,-,*,/.\n");
	printf("	Note que pode ser digitado um número arbitrário de operações.\n");

	int a, b, parcial, i;
	char operacao, operacao2;

	printf("Solicite a operação: ");
	scanf("%d\n", &a);
	scanf("%c", &operacao);
	scanf("%d\n", &b);
	scanf("%c", &operacao2);

	if(operacao2 == '=')
	{
		if(operacao == '+')
		 	printf("%d\n", a + b);
		else if(operacao == '-')
			printf("%d\n", a - b);
		else if(operacao == '*')
			printf("%d\n", a * b);
		else if(operacao == '/')
			printf("%d\n", a / b);

		return 0;
	}

	else
	{
		if(operacao == '+')
		 	parcial = a + b;
		else if(operacao == '-')
			parcial = a - b;
		else if(operacao == '*')
			parcial = a * b;
		else if(operacao == '/')
			parcial = a / b;

		operacao = operacao2;
	}

	for(; operacao != '='; )
	{
		scanf("%d\n", &b);
		scanf("%c", &operacao2);

		if(operacao2 == '=')
		{
			if(operacao == '+')
			 	printf("%d\n", parcial + b);
			else if(operacao == '-')
				printf("%d\n", parcial - b);
			else if(operacao == '*')
				printf("%d\n", parcial * b);
			else if(operacao == '/')
				printf("%d\n", parcial / b);

			return 0;
		}

		else
		{
			if(operacao == '+')
			 	parcial = parcial + b;
			else if(operacao == '-')
				parcial = parcial - b;
			else if(operacao == '*')
				parcial = parcial * b;
			else if(operacao == '/')
				parcial = parcial / b;

			operacao = operacao2;
		}
	}

	return 0;
}