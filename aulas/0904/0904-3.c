#include <stdio.h>

int main()
{
	int codigo, quantidade;
	float unitario = 0;

	printf("Informe o codigo do produto: ");
	scanf("%d", &codigo);

	printf("Informe a quantidade: ");
	scanf("%d", &quantidade);

	switch(codigo)
	{
		case 1001: unitario = 5.32; break;
		case 1324: unitario = 6.45; break;
		case 6548: unitario = 2.37; break;
		case  987: unitario = 5.32; break;
		case 7623: unitario = 6.45; break;
		default: printf("Codigo inexistente no sistema.\n"); return 0;
	}

	printf("O cliente deve pagar: R$: %.2f\n", quantidade * unitario);
}