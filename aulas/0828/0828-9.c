#include <stdio.h>

int main()
{
	int codigo, quantidade;
	float unitario = 0;

	printf("Informe o codigo do produto: ");
	scanf("%d", &codigo);

	printf("Informe a quantidade: ");
	scanf("%d", &quantidade);

	if(codigo == 1001 || codigo == 987)
		unitario = 5.32;

	else if(codigo == 1324 || codigo == 7623)
		unitario = 6.45;

	else if(codigo == 6548)
		unitario = 2.37;

	else
		printf("Codigo invalido\n");

	printf("Valor da compra: R$ %.2f", unitario * quantidade);

	return 0;
}