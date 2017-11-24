/*
6) Escreva um algoritmo para produzir um triangulo utilizando o caractere *, a partir de
uma dada entrada. Por exemplo, a entrada 8 irá produzir a saída abaixo:
 *
 **
 ***
 ****
 *****
 ******
 *******
 ********
*/

#include <stdio.h>

int main()
{
	printf("6) 	Escreva um algoritmo para produzir um triangulo utilizando o caractere *, a partir de uma dada entrada.\n");
	/*
		*
	 	**
	 	***
 		****
 		*****
 		******
 		*******
 		********
 	*/

 	int entrada, i, j;

 	printf("Entre com o numero de linhas desejado: ");
 	scanf("%d", &entrada);

 	for(i = 1; i <= entrada; i++)
 	{
 		for(j = 0; j < i; j++)
 		{
 			printf("*");
 		}
 		
 		printf("\n");
 	}

	return 0;
}
