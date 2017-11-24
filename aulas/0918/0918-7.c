#include <stdio.h>

int main()
{
	int i, j, k = 0;

	while(k < 10)
	{
		if(k == 0 || k == 2 || k == 3 || k == 9)
		{
			i = 0;
			while(i < 1) //onda 1x
			{
				j = 0;

				while(j <= 11)
				{
					if(j == 0 || j == 11)
						printf("+");

					else
					{
						if(j % 2 != 0)
							printf("/");
						else
							printf("\\");
					}

					j++;
				}

				printf("\n");
				i++;
			}
		}

		else
		{
			i = 0;
			while(i < 1) //barrinha 1x
			{
				j = 0;

				while(j <= 11)
				{
					if(j == 1 || j == 10)
						printf("|");

					else
						printf(" ");

					j++;
				}

				printf("\n");
				i++;
			}	
		}
	
	k++;
	}
}