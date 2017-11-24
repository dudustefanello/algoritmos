/*
1. Fazer um programa que solicite ao usuário a quantidade de números inteiros que
serão informados (n). Leia o valor dos n números e em seguida exiba-os na
ordem inversa a que foram digitados. Utilize vetores na solução.
Obs.: Considere a quantidade máxima igual a 100.
*/

#include <stdio.h>

int main(){
	int n, i;

	scanf("%d", &n);
	int vetor[n];

	for(i = 1; i <= n; scanf("%d", &vetor[n - i]), i++);

	for(i = 0; i < n; printf("%d ", vetor[i]), i++);

	printf("\n");
}