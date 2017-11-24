#include <stdio.h>

int main()
{
	int num;

	printf("Digite um numero: ");
	scanf("%d", &num);

	if(num % 2 == 0)
	{
		printf("%d eh par;\n", num);
	}
	else
	{
		printf("%d eh impar;\n", num);
	}

	if(num >= 0)
	{
		printf("%d eh positivo.\n", num);
	}
	else
	{
		printf("%d eh negativo.\n", num);
	}

	return 0;
}