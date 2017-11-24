/*                 
                 1
               1 2 1
             1 2 3 2 1
           1 2 3 4 3 2 1
         1 2 3 4 5 4 3 2 1
       1 2 3 4 5 6 5 4 3 2 1
     1 2 3 4 5 6 7 6 5 4 3 2 1
   1 2 3 4 5 6 7 8 7 6 5 4 3 2 1
 1 2 3 4 5 6 7 8 9 8 7 6 5 4 3 2 1
   1 2 3 4 5 6 7 8
     1 2 3 4 5 6 7
       1 2 3 4 5 6
         1 2 3 4 5
           1 2 3 4
             1 2 3
               1 2
                 1
*/

#include <stdio.h>

int main()
{
	int i, j, k;

	i = 0;
	while(i < 9)
	{
		j = 0;
		while(j < 8 - i)
		{
			printf("  ");
			j++;
		}

		j = 1;
		while(j < i + 2)
		{
			printf(" %d", j);
			j++;
		}

		j = 1;
		k = i;
		while(j <= i)
		{
			printf(" %d", k);
			j++;
			k--;
		}

		printf("\n");
		i++;
	}

	i = 1;
	while(i < 9)
	{
		j = 0;
		while(j < i)
		{
			printf("  ");
			j++;
		}

		j = 9;
		k = 1;
		while(j > i)
		{
			printf(" %d", k);
			j--;
			k++;
		}

		printf("\n");
		i++;
	}
}