#include <stdio.h>
#include <string.h>

int main()
{
	int entrada;
	char mes[13][10];

	strcpy(mes[1], "Janeiro");
	strcpy(mes[2], "Fevereiro");
	strcpy(mes[3], "Marco");
	strcpy(mes[4], "Abril");
	strcpy(mes[5], "Maio");
	strcpy(mes[6], "Junho");
	strcpy(mes[7], "Julho");
	strcpy(mes[8], "Agosto");
	strcpy(mes[9], "Setembro");
	strcpy(mes[10], "Outubro");
	strcpy(mes[11], "Novembro");
	strcpy(mes[12], "Dezembro");

	printf("Digite um o numero correspondente a um mes do calendario:\n");
	scanf("%d", &entrada);

	printf("Mes de %s\n", mes[entrada]);

	return 0;
}