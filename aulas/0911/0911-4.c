/*
4. Faça um algoritmo que mostre os conceitos finais dos alunos de uma classe de 75
alunos, considerando :
a) os dados de cada aluno (número de matrícula e nota numérica final) serão
fornecidos pelo usuário
b) a tabela de conceitos segue abaixo:
Nota 		    Conceito
de 0,0 a  4,9   D
de 5,0 a  6,9   C
de 7,0 a  8,9   B
de 9,0 a 10,0   A
*/

#include <stdio.h>

int main()
{
	printf("4. Faça um algoritmo que mostre os conceitos finais dos alunos de uma classe de 75 alunos, considerando:\n");
	printf("a) os dados de cada aluno (número de matrícula e nota numérica final) serão fornecidos pelo usuário\n");
	printf("b) a tabela de conceitos segue abaixo:\n");
	printf("	     Nota    	 | Conceito\n");
	printf(" 	 de 0,0 a  4,9   |     D\n");
	printf("	 de 5,0 a  6,9   |     C\n");
	printf("	 de 7,0 a  8,9   |     B\n");
	printf("	 de 9,0 a 10,0   |     A\n");

	int matricula, i;
	float media;

	for(i = 0; i < 75; i++)
	{
		scanf("%d %f", &matricula, &media);

		if(media >= 0 && media < 5)
			printf("Aluno %2d: Conceito: D\n", matricula);

		if(media >= 5 && media < 7)
			printf("Aluno %2d: Conceito: C\n", matricula);

		if(media >= 7 && media < 9)
			printf("Aluno %2d: Conceito: B\n", matricula);

		if(media >= 9 && media <= 10)
			printf("Aluno %2d: Conceito: A\n", matricula);
	}

	return 0;
}