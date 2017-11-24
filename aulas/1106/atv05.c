#include <stdio.h>

int posicao(int vet[10], int busca){
	for(int i = 0; i < 10; i++)
		if(vet[i] == busca)
			return i + 1;
}

int main(){
	int vetor[10], buscar;

	for(int i = 0; i < 10; i++)
		scanf("%d", &vetor[i]);

	printf("Buscar: "); scanf("%d", &buscar);

	int retorno = posicao(vetor, buscar);

	printf("O número buscado está em: %d (vetor[%d])\n", retorno, retorno - 1);
}