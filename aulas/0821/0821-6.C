#include <stdio.h>

int main()
{
	int entrada[2];
	double ent1, quociente;

	printf("Digite dois numeros inteiros: \n");
	scanf("%d %d", &entrada[0], &entrada[1]);

	printf("Dividendo: %d\n", entrada[0]);
	printf("Divisor:   %d\n", entrada[1]);

	ent1 = entrada[1];
	quociente = entrada[0] / ent1;
	printf("Quociente: %.1f\n", quociente);

	printf("Resto:     %d\n", entrada[0] % entrada[1]);
}