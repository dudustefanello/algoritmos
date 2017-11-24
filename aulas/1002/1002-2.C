#include <stdio.h>

int main()
{
	int vect[10], i;

	for(i = 0; i < 10; i++)
	{
		scanf("%d", &vect[i]);

		if(vect[i] > 0)
			vect[i] += 10;
	}

	for(i = 0; i < 10; i++)
		printf("vect[%d]: %d\n", i, vect[i]);
}