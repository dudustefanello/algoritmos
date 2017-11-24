#include <stdio.h>

int main()
{
	int i, j, n;

	printf("Entre o número: ");
	scanf("%d", &n);

	for(i = 1; i <= n; i++)
	{
		printf("%d X %d = %d\n", i, n, i * n);
	}
}