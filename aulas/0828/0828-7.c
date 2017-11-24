#include <stdio.h>

int main()
{
	int aulas;
	float nota1, nota2, media, frequencia;
	char nome[20];

	printf("------------------------------------\n");
	printf("==== Calculo de media semestral ====\n");
	printf("====    Disciplina de Calculo   ====\n");
	printf("------------------------------------\n");
	printf("Nome do aluno: ");
	scanf("%s", nome);
	printf("Informe a 1a nota de %s: ", nome);
	scanf("%f", &nota1);
	printf("Informe a 2a nota de %s: ", nome);
	scanf("%f", &nota2);
	printf("Informe a quantidade de aulas frequentadas por %s: ", nome);
	scanf("%d", &aulas);

	media = (nota1 + nota2) / 2;
	printf("\nMedia final: %.2f\n", nota1);

	frequencia = (100 * aulas) / 36;
	printf("Frequencia: %.1f%%\n", frequencia);

	if(media >= 6 && frequencia >= 75)
		printf("ALUNO APROVADO\n");

	else
		printf("ALUNO REPREVADO\n");

	return 0;
}