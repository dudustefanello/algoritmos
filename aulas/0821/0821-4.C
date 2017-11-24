#include <stdio.h>

int main()
{
	int entrada[2];

	printf("Digite dois numero inteiros: \n");
	scanf("%d %d", &entrada[0], &entrada[1]);
	printf("SOMA: %d\n", entrada[0] + entrada[1]);
}