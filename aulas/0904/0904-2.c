#include <stdio.h>

int main()
{
	char entrada = 0;

	printf("Entre com UMA letra: ");
	scanf("%c", &entrada);

	switch(entrada)
	{
		case 'a': printf("%c = Vogal\n", entrada); break;
		case 'e': printf("%c = Vogal\n", entrada); break;
		case 'i': printf("%c = Vogal\n", entrada); break;
		case 'o': printf("%c = Vogal\n", entrada); break;
		case 'u': printf("%c = Vogal\n", entrada); break;
		case 'A': printf("%c = Vogal\n", entrada); break;
		case 'E': printf("%c = Vogal\n", entrada); break;
		case 'I': printf("%c = Vogal\n", entrada); break;
		case 'O': printf("%c = Vogal\n", entrada); break;
		case 'U': printf("%c = Vogal\n", entrada); break;
		case '0': return 0;
		default: printf("%c = Consoante\n", entrada); break;
	}
}