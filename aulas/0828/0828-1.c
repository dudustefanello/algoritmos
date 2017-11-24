#include <stdio.h>

int main()
{
	int a, b;

	printf("Digite dos numeros: ");
	scanf("%d %d", &a, &b);

	if(a >= b)
	{
		printf("A diferença eh: %d\n", a - b);
	}
	else if(b > a)
	{
		printf("A diferença eh: %d\n", b - a);
	}
	return 0;
}