#include <stdio.h>

int main()
{
	int i = 1, idade, quantidade, saidaA = 0, saidaB = 0, saidaC = 0, saidaD = 0, j = 0;
	char sexo;

	do
	{
		printf("Informe o sexo [m / f]: ");
		scanf("%s", &sexo);

		printf("Informe a idade: ");
		scanf("%d", &idade);

		if(idade < 0)
			break;

		printf("Quantos Livros leu em 2006: ");
		scanf("%d", &quantidade);

		if(idade < 10)
			saidaA += quantidade;

		if(sexo == 'f' && quantidade >= 5)
			saidaB++;

		if(sexo == 'm' && quantidade < 5)
		{
			saidaC += idade;
			j++;
		}

		if(quantidade == 0)
			saidaD++;

		i++;
	}
	while(idade >= 0);

	printf("==> Resultado da Pesquisa:\n");
	printf("%d foram lidos por menores de 10 anos.\n", saidaA);
	printf("%d mulheres leram 5 ou mais livros.\n", saidaB);
	printf("Media de idade dos homens que leram menos de cinco livros: %.1lf\n", (double) saidaC / j);
	printf("Percentual de pessoas que nao leram: %.2lf %%\n", (double) (saidaD * 100) / i);
}