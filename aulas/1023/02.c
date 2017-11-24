/*
2. Fazer um programa que, dados dois vetores inteiros de 10 posições,
efetue as respectivas operações aritméticas (soma, subtração, divisão,
multiplicação) indicadas por um vetor de 10 posições de caracteres também
fornecido, contendo em cada posição uma das quatro operações aritméticas
em qualquer combinação, armazenando os resultados num vetor de reais
(também de 10 posições). Ao final, exibir os valores armazenados no
vetor de resultados.
*/

#include <stdio.h>

#define TAM 10

int main(){
	int a[TAM], b[TAM], i;
	float c[TAM];
	char op[TAM];

	for(i = 0; i < TAM; i++){
		printf("Digite a %dª operação: ", i + 1);
		scanf("%d %c %d", &a[i], &op[i], &b[i]);

		if(op[i] == '+' || op[i] == '-')
			c[i] = op[i] == '+' ? (float) a[i] + b[i] : (float) a[i] - b[i];
		else if(op[i] == '*' || op[i] == '/')
			c[i] = op[i] == '*' ? (float) a[i] * b[i] : (float) a[i] / b[i];
	}

	for(i = 0; i < TAM; printf("%d %c %d = %.2f\n", a[i], op[i], b[i], c[i]), i++);
}