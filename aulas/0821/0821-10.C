#include <stdio.h>

int main()
{
	float raio, PI = 3.14159;

	printf("Digite o raio do circulo:   ");
	scanf("%f", &raio);

	printf("O perimetro eh: %.1f\n", 2 * PI * raio);
	printf("A area eh:      %.1f\n", PI * raio * raio);
}