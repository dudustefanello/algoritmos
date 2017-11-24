/*
4. Faça um programa que leia uma lista de nomes e para cada nome calcule e exiba a contagem
das vogais existentes. Ao final, exibir qual dos nomes lidos possui a maior quantidade de
vogais e a quantidade de vogais desse nome. A condição de parada é ser informado um nome
vazio (primeiro caracter igual à ‘\0’). Obs.: se existir mais de um nome com quantidade
igual de vogais, exibir o último encontrado.
*/

#include <stdio.h>
#include <string.h>

int main(){
	int vetor[100], i, vogais, mais;
	char nome[101], maior[101];

	mais = 0;

	while(gets(nome), nome[0] != '\0'){

		vogais = 0;

		for(i = 0; i <= strlen(nome); i++)
			vogais = (nome[i] == 'a' || nome[i] == 'e' || nome[i] == 'i' || nome[i] == 'o' || nome[i] == 'u'
				   || nome[i] == 'A' || nome[i] == 'E' || nome[i] == 'I' || nome[i] == 'O' || nome[i] == 'U') ? vogais + 1 : vogais;

		if(vogais >= mais){
			mais = vogais;
			strcpy(maior, nome);
		}
	}

	printf("Nome: %s\nQuantidade: %d\n", maior, mais);
}