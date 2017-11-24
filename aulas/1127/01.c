#include <stdio.h>

#define MAX 3

typedef struct{
	int base;
	int altura;
}area;

void teste(area v[MAX], int *maiorbase, int *menoraltura){
	int i;
	for(i = 0; i < MAX; i++){
		*maiorbase = v[i].base > *maiorbase ? v[i].base : *maiorbase;
		*menoraltura = v[i].altura < *menoraltura ? v[i].altura : *menoraltura;
	}
}

int main(){
	area v[MAX];
	int A = 0, B = 999;
	v[0].base = 1;
	v[0].altura = 1;
	int i;
	for(i = 0; i < MAX; i++){
		scanf("%d %d", &v[i].base, &v[i].altura);
	}
	teste(v, &A, &B);
	printf("%d %d\n", B, A);
}