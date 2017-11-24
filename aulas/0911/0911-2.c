/*
2. Escrever um algoritmo que leia um número N que indica quantos valores devem ser lidos a seguir.
Para cada número lido, mostre uma tabela contendo o valor lido e o fatorial deste valor.
*/

#include <stdio.h>

int main()
{
	printf("2. Escrever um algoritmo que leia um número N que indica quantos valores devem ser lidos a seguir.");
	printf("Para cada número lido, mostre uma tabela contendo o valor lido e o fatorial deste valor.\n\n");

	int testes, i, j, entrada;
	long long int fatorial = 0;

	scanf("%d", &testes);

	for(i = 0; i < testes; i++)
	{
		scanf("%d", &entrada);

		fatorial = entrada;

		for(j = entrada - 1; j >= 2; j--)
			fatorial = fatorial * j;

		printf("Entrada: %d ==> Fatorial: %lld\n", entrada, fatorial);
	}

	return 0;
}