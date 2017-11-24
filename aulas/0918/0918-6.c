#include <stdio.h>

int main()
{
	int serie, terceira = 0, quantidade, maior = 0, nao = 0, idade, i = 1, red;

	while(idade >= 0)
	{
		printf("Informe a série do aluno [1 - 4]: ");
		scanf("%d", &serie);

		printf("Idade do Aluno: ");
		scanf("%d", &idade);

		if(idade < 0)
			break;

		if(serie == 3)
			terceira++; 

		printf("A quantidade de livros lidos por mes: ");
		scanf("%d", &quantidade);

		if(serie == 4 && quantidade > maior)
			maior = quantidade;

		printf("Gosta ou nao de fazer redação [sim: 0 / nao: 1]: ");
		scanf("%d", &red);

		if(red == 0 && serie == 3)
			nao++;

		i++;
	}

	printf("%d alunos estdudam na 3ª série.\n", terceira);
	printf("A maior quantidade de livros lidos por um aluno da quarta série foi %d livros.\n", maior);
	printf("%.1lf %% dos alunos da 3ª série nao gostam de fazer redação\n", (double) (nao * 100) / terceira);

	return 0;
}