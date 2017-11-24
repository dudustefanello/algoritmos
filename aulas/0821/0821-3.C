#include <stdio.h>

int main()
{
	int numero;

	printf("Digite um numero inteiro: \n");
	scanf("%d", &numero);
	printf("Antecessor: %d\n", numero - 1);
	printf("Sucessor: %d\n", numero + 1);
}