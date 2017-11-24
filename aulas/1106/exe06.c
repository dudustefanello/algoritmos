#include <stdio.h>

short vog(char caracter);

int main(){
	char entrada;
	scanf("%c", &entrada);
	printf("%s\n", vog(entrada) ? "Vogal" : "Consoante");
}

short vog(char c){
	if(c == 65 || c == 69 || c == 73 || c == 79 || c == 85 || c == 97 || c == 101 || c == 105 || c == 111 || c == 117)
		return 1;
	else
		return 0;
}