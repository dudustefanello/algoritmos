#include <stdio.h>

int main()
{
	int idade;

	printf("Informe a idade do nadador: ");
	scanf("%d", &idade);

	if(idade >= 5 && idade <= 7)
		printf("Nadador categoria Infantil A.\n");

	else if(idade >= 8 && idade <= 10)
		printf("Nadador categoria Infantil B.\n");

	else if(idade >= 11 && idade <= 13)
		printf("Nadador categora Juvenil A.\n");

	else if(idade >= 14 && idade <= 17)
		printf("Nadador categoria Juvenil B.\n");

	else if(idade > 17)
		printf("Nadador categoria Sênior.\n");

	else
		printf("Nadador nao tem idade suficiente.\n");

	return 0;
}