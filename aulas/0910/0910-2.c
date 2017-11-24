#include <stdio.h>

int main()
{
	int tabuada, i;

	printf("Tabuada: ");
	scanf("%d", &tabuada);

	for(i = 1; i <= 10; i++)
	{
		printf("%d X %d = %d\n", tabuada, i, tabuada * i);
	}
}