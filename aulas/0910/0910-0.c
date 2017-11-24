#include <stdio.h>
#include <stdlib.h>

int main()
{
	float media[5];
	int matricula[5], i, j;

	printf("Números de testes: ");
	scanf("%d", &j);

	for(i = 0; i < j; i++)
	{
		printf("Matrícula: ");
		scanf("%d", &matricula[i]);

		printf("Média: ");
		scanf("%f", &media[i]);
	}

	for(i = 0; i < j; i++)
	{
		if(media[i] >= 6)
			printf("O aluno %d foi APROVADO com média %.1f.\n", matricula[i], media[i]);

		else
			printf("O aluno %d foi REPROVADO com média %.1f.\n", matricula[i], media[i]);
	}
}