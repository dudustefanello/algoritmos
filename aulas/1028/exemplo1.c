/*
Ler e armazenar as 3 notas de cada
um dos 10 alunos de uma turma.
Calcular e informar a média da 1a
nota.
Quantos alunos tem a 1ª nota superior
a esta média?
*/

#include <stdio.h>
#include <string.h>

int main(){
	double notas[10][3], soma, media;
	int i, j, cont = 0;

	for(i = 0, soma = 0; i < 10; i++)
		for(j = 0; printf("digite a %dª nota do %dº aluno: ", j, i), scanf("%lf", &notas[i][j]), j < 3; j++);

	for(i = 0; i < 10; soma += notas[i][0], i++);

	for(media = soma / 10, i = 0; i < 10; cont += notas[i][0] > media ? 1 : 0, i++);

	printf("%d alunos tiraram acima da media.\n", cont);
}