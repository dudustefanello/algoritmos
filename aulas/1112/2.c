#include <stdio.h>

#define MAX 10

int encontrar(int vector[MAX], int buscar){
	for(int i = 0; i < MAX; i++)
		if(vector[i] == buscar)
			return  i;
}

int main(){
	int vector[MAX], search;

	for(int i = 0; i < MAX; i++)
		scanf("%d", & vector[i]);

	scanf("%d", &search);

	printf("Indice do valor procurado: %d", encontrar(vector, search));
}