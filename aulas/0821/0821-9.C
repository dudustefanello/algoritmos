#include <stdio.h>

int main()
{
	float base, altura;

	printf("Digite a base do retangulo:   ");
	scanf("%f", &base);
	printf("Digite a altura do retangulo: ");
	scanf("%f", &altura);

	printf("O perimetro eh: %.1f\n", base * 2 + altura * 2);
	printf("A area eh:      %.1f\n", base * altura);
}