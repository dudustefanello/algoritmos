/*
5. Faça um programa que solicite uma palavra ao usuário e informe como resultado
se ela é ou não um palíndromo. Um palíndromo possui a propriedade de poder ser lido
tanto da direita para a esquerda como da esquerda para a direita. Exemplos: aba,
ama, arara, asa, assa, ata, esse, matam, mexem, mirim, oco, osso, radar, reler,
rever, reviver, rir, salas, seres, solos, somos, etc. Dicas para resolução: criar
uma segunda string que seja a inversão da palavra informada (não esquecer de incluir
o ‘\0’ manualmente no final da string invertida já que esta será montada caracter a
caracter) e então compará-las.
*/

#include <stdio.h>
#include <string.h>

int main(){
	char entrada[101];
	int i;

	scanf("%s", entrada);

	char invertida[strlen(entrada) + 1];

	for(i = 1; i < strlen(entrada) + 1; invertida[strlen(entrada) - i] = entrada[i - 1], i++);

	strcmp(entrada, invertida) == 0 ? printf("É um palíndromo.\n") : printf("Não é um palíndromo.\n");
}