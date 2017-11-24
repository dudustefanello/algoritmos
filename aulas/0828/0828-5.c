#include <stdio.h>

int main()
{
	float altura, ideal;
	char sexo = 'a';

	printf("Calculo do peso ideal:\n");

	printf("Digite H para Homeme ou M para mulher: ");
	scanf("%s", &sexo);

	if(sexo == 'H' || sexo == 'h')
	{
		printf("Informe a altura do homem: ");
		scanf("%f", &altura);
		ideal = altura * 72.7 - 58;
	}

	if(sexo == 'M' || sexo == 'm')
	{
		printf("Informe a altura da mulher: ");
		scanf("%f", &altura);
		ideal = altura * 62.1 - 44.7;
	}

	printf("Seu pedo ideal e: %.2f\n", ideal);
}