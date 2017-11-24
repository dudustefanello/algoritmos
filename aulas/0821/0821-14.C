#include <stdio.h>

int main()
{
	float hora;

	printf("Digite uma hora do dia (0 - 24): ");
	scanf("%f", &hora);

	printf("Desde o inicio do dia se passaram %.0f minutos\n", hora * 60);
}