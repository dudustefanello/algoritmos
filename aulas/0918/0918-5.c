#include <stdio.h>

int main()
{
	int espectadores = 200, idade, identificador = 1, nota, maior = 0, idvelho, dez = 0, somaidade = 0, cinco = 0;

	do
	{
		printf("Espectador Nº: %d\n", identificador);
		printf("Informe a idade e a opinião sobre a peça [0 - 10]: ");
		scanf("%d %d", &idade, &nota);

		if(nota == 10)
			dez++;

		somaidade += idade;

		if(nota <= 5)
			cinco++;

		if(idade > maior)
		{
			idvelho = identificador;
			maior = idade;
		}

		identificador++;
	}
	while(identificador <= espectadores);

	printf("%d pessoas deram nota 10.\n", dez);
	printf("Os espectadores tinham em média %.0lf anos\n", (double) somaidade / identificador);
	printf("%.1lf %% deram nota 5 ou menos.\n", (double) (100 * cinco) / espectadores);
	printf("A pessoa mais velha foi identicficada com numero %d e tinha %d anos.\n", idvelho, maior);
}