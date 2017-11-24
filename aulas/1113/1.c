#include <stdio.h>
#define  MAX 3
typedef struct{
	char aluno[50];
	double nota[3];
	double media;
}alunos;
double media(alunos estrutura){
	double soma = 0;
	for(int i = 0; i < 3; i++){
		soma += estrutura.nota[i];
	}
	return soma / 3.0;
}int main(){
	alunos estrutura[MAX];
	for(int i = 0; i < MAX; i++){
		scanf(" %50[^\n]", estrutura[i].aluno);
		for(int j = 0; j < 3; j++){
			scanf("%lf", &estrutura[i].nota[j]);
		}
		printf("Aluno: %s Media: %.2lf\n", estrutura[i].aluno, media(estrutura[i]));
	}
}