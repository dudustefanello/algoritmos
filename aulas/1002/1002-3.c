#include <stdio.h>

int main()
{
	int idade[5], i;

	for(i = 0; i < 5; i++)
		scanf("%d", &idade[5]);

	for(i = 0; i < 5; i++)
	{
		if(idade[i] >= 18)
			printf("%d\n", idade[i]);
	}
}