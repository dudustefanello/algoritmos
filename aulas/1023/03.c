/*
3. Faça um programa que simule uma lista telefônica. O programa deverá ler os
nomes de pessoas com seus respectivos telefones (utilizar um vetor para armazenar
os nomes e outro para armazenar os respectivos telefones), sendo a quantidade
determinada pelo usuário. Em seguida, pergunte ao usuário qual o nome da
pessoa que ele deseja consultar o telefone e exiba o telefone da pessoa
procurada. Caso o nome não exista dentre os informados, deve ser mostrada
ao usuário uma mensagem indicando isto. Obs.: Considere a quantidade máxima igual a 100.
*/

#include <stdio.h>
#include <string.h>

int main(){
	int n, i, j;
	
	printf("Quantos numeros serão lidos?\n ==> ");
	scanf("%d", &n);

	char nomes[n][255], a, busca[255];
	int numeros[100];

	printf("Cadastro:\n");

	for(i = 0; i < n; i++){	// Cadastrar Clientes
		printf("Digite o %dº nome: ", i + 1);
		getchar();
		fgets(nomes[i], 255, stdin);
		printf("Digite o numero: ");
		scanf("%d", &numeros[i]);
	}

	printf("Cadastro Finalizado.\n\n");

	do{	// Buscar Clientes
		printf("Deseja buscar um nome na lista? [s/n] ");

		getchar();
		scanf("%c", &a);

		if(a == 'n') j = 0;
		else j = 1;

		if(j){
			printf("Informe a busca: ");
			
			getchar();
			fgets(busca, 255, stdin);

			int cont = 0;
			printf("n%d cont\n", n);

			for(i = 0; i < n; i++)
				if(strcmp(busca, nomes[i]) == 0){
					printf("Nome: %sNumero: %d\n\n", nomes[i], numeros[i]);
					break;
				}
				else printf("%d", ++cont);

			if(cont == n)
				printf("Cliente nao encontrado.\n\n");
		}
	}while(j);
	

	printf("A DiskSC agradece a preferencia.\nFim da Execução do programa.\n");
}