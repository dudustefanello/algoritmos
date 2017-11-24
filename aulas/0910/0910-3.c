#include <stdio.h>

int main()
{
	int i, nao = 0, j;

	printf("Entre com um número: ");
	scanf("%d", &i);

	for(j = 1; j <= i / 2; j++)
	{
		if(i % j == 0)
		{
			nao += j;
			
			if(nao > 1)
			{
				printf("%d não é primo.\n", i);
				break;
			}
		}
	}

	if(nao == 1)
		printf("%d é primo.\n", i);		
}