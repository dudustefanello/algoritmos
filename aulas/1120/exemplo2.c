#include <stdio.h>
#include <string.h>

int vogais(char *nome, int n){
	int vog = 0, i;
	for(i = 0; i < n; i++){	
		vog +=  nome[i] == 'a' || nome[i] == 'A' ||
				nome[i] == 'e' || nome[i] == 'E' ||
				nome[i] == 'i' || nome[i] == 'I' ||
				nome[i] == 'o' || nome[i] == 'O' ||
				nome[i] == 'u' || nome[i] == 'U'? 1 : 0;
	}
	return vog;
}

int main(){
	char nome[] = {"eduardo\n"};
	printf("%d\n", vogais(nome, strlen(nome)));
}