#include <stdio.h>

int main(){
	double a[12][4];

	for(int i = 0; i < 12; i++)
		for(int j = 0; j < 4; j++)
			scanf("%lf", &a[i][j]);

	printf("\na. total vendido em cada mês do ano:\n");
	for(int i = 0; i < 12; i++){
		double soma = 0;
		for(int j = 0; j < 4; j++)
			soma += a[i][j];
		printf("   Mes %d: R$ %.2lf\n", i + 1, soma);
	}

	printf("\nb. total vendido em cada semana durante todo o ano:\n");
	for(int i = 0; i < 4; i++){
		double soma = 0;
		for(int j = 0; j < 12; j++)
			soma += a[j][i];
		printf("   Semana %d: R$ %.2lf\n", i + 1, soma);
	}

	printf("\nc. total vendido no ano:\n");
	double soma = 0;
	for(int i = 0; i < 12; i++){
		for(int j = 0; j < 4; j++)
			soma += a[i][j];
	}
	printf("%lf\n", soma);
}