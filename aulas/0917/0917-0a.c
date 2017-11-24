#include <stdio.h>

int main()
{
	int entrada, i = 0, cont = 0;

	scanf("%d", &entrada);

	while(i < 5)
	{
		if(entrada < 0)
			cont++;

		i++;

		scanf("%d", &entrada);
	}

	printf("%d\n", cont);
}