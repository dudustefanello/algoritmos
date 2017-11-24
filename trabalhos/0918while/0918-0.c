#include <stdio.h>

int main()
{
	int i = 1, j;
	
	while(i <= 6)
	{
		j = 1;

		while(j <= i)
		{
			printf("*");
			
			j++;
		}

		printf("\n");

		i++;
	}
}