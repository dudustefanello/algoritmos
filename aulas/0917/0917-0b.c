#include <stdio.h>

int main()
{
	int cont = 0, i = 0, entrada;

	do
	{
		scanf("%d", &entrada);

		if(entrada < 0)
			cont++;

		i++;

	}
	while(i < 5);

	printf("%d\n", cont);
}