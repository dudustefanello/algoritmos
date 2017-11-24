#include <stdio.h>

int main()
{
	int nota[4], i;

	printf("Digite quatro numeros inteiros: \n");
	
	for (i = 0; i <= 3; i++)
	{
		scanf("%d", &nota[i]);
	}

	printf("A media ponderada desses numero eh: %.1lf\n",
		nota[0] * 0.1 + nota[1] * 0.2 + nota[2] * 0.3 + nota[3] * 0.4);
}