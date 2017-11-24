/*
Uma locadora de vídeos tem guardadas as seguintes
informações sobre seus 100 clientes:
Nome dos clientes
Quantidade de filmes retirados no mês anterior.
Armazene os nomes dos clientes em uma matriz de
strings
Esta locadora está fazendo uma promoção tal que
para cada 15 filmes retirados no mês anterior, o
cliente tem direito a uma locação grátis.
Podemos resolver o problema com uma matriz
100x2:
Na 1ª coluna temos a quantidade de filmes retirados por
cada cliente no mês anterior.
O programa deverá calcular e armazenar na 2ª coluna da
matriz a quantidade de locações gratuitas a que cada cliente
tem direito.
Ao final, seu programa deverá exibir o(s) nome(s)
do(s) cliente(s) com o maior número de locações
gratuitas e qual é esse número. 
*/

#include <stdio.h>
#include <string.h>

#define MAX 10

int main(){
	int i, cont = 0, quantidades[MAX][2], maior = 0, ganhadoresINT[MAX];
	char nomes[MAX][50], ganhadoresCHAR[MAX][50];

	for(i = 0; i < MAX; i++)
		scanf("%s %d", nomes[i], &quantidades[i][0]);

	for(i = 0; i < MAX; i++){
		quantidades[i][1] = quantidades[i][0] / 15;
		if(quantidades[i][1] > maior)
			maior = quantidades[i][1];
	}

	for(i = 0; i < MAX; i++){
		if(quantidades[i][1] == maior){
			ganhadoresINT[cont] = quantidades[i][1];
			strcpy(ganhadoresCHAR[cont], nomes[i]);
			cont++;
		}
	}

	for(i = 0; i < cont; i++)
		printf("Ganhadores:\nNome: %s\nBonus: %d\n", ganhadoresCHAR[i], ganhadoresINT[i]);
}