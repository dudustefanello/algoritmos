#include <stdio.h>

int main()
{
	float base, altura;

	printf("Digite o valor da base do triangulo:   ");
	scanf("%f", &base);
	printf("Digite o valor altura do triangulo:   ");
	scanf("%f", &altura);

	printf("A area eh: %.1f\n", (base * altura) / 2);
}