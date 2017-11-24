#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int exe, i;

	printf("*********** Lista de Exercícios 11-09-2015 ***********\n\n");
	printf("- Escolha um exercício de 1 à 8 ou 0 para encerrar: ");
	scanf("%d", &exe);

	switch(exe)
	{
		case 0: return 0;
		case 1: 
		{
			printf("1. 	Ler um número maior que zero e imprimir o quadrado de todos os números entre 0 e o número lido.\n\n");

			int lido, i;

			printf("Insira um valor: ");
			scanf("%d", &lido);

			for(i = 1; i <= lido; i++)
			{
				printf("%d\n", i * i);
			}

		return 0;
		
		printf("\n*** Fim da execução da atividade %d ***\n\n", exe);

		break;

	}

		case 2:
		{
			printf("2. 	Escrever um algoritmo que leia um número N que indica quantos valores devem ser lidos a seguir.\n");
			printf("	Para cada número lido, mostre uma tabela contendo o valor lido e o fatorial deste valor.\n\n");

			int testes, i, j, entrada;
			long long int fatorial = 0;

			printf("Quantos valores serão lidos: ");
			scanf("%d", &testes);

			for(i = 0; i < testes; i++)
			{
				printf("Qual Valor você quer fatorar: ");
				scanf("%d", &entrada);

				fatorial = entrada;

				for(j = entrada - 1; j >= 2; j--)
					fatorial = fatorial * j;

				printf("Entrada: %d => Fatorial: %lld\n", entrada, fatorial);
			}

			return 0;

			printf("\n*** Fim da execução da atividade %d ***\n\n", exe);

			break;
		}	

		case 3:
		{
			printf("3. 	Escrever um algoritmo que calcula e escreve o produto dos números primos entre 92 e 1478.\n\n");

			long long int i, produto = 1, j, nao;

			for(i = 93; i < 1478; i++)
			{
				nao = 0;

				for(j = 1; j <= i / 2; j++)
					if(i % j == 0)
					{
						nao += j;
						
						if(nao > 1)
							break;
					}	

				if(nao == 1)
					produto = produto * i;
			}

			printf("%lld\n", produto);

			return 0;
		
		printf("\n*** Fim da execução da atividade %d ***\n\n", exe);

		break;

		} 

		case 4:
		{
			printf("4. 	Faça um algoritmo que mostre os conceitos finais dos alunos de uma classe de 75 alunos, considerando:\n");
			printf("a) 	os dados de cada aluno (número de matrícula e nota numérica final) serão fornecidos pelo usuário\n");
			printf("b) 	a tabela de conceitos segue abaixo:\n");
			printf("	     Nota    	 | Conceito\n");
			printf(" 	 de 0,0 a  4,9   |     D\n");
			printf("	 de 5,0 a  6,9   |     C\n");
			printf("	 de 7,0 a  8,9   |     B\n");
			printf("	 de 9,0 a 10,0   |     A\n\n");

			int matricula, i;
			float media;

			for(i = 0; i < 75; i++)
			{
				printf("Degite o número de matrícula: ");
				scanf("%d", &matricula);
				printf("Digite a média do aluno %d: ", matricula);
				scanf("%f", &media);

				if(media >= 0 && media < 5)
					printf("Aluno %2d: Conceito: D\n", matricula);

				if(media >= 5 && media < 7)
					printf("Aluno %2d: Conceito: C\n", matricula);

				if(media >= 7 && media < 9)
					printf("Aluno %2d: Conceito: B\n", matricula);

				if(media >= 9 && media <= 10)
					printf("Aluno %2d: Conceito: A\n", matricula);
			}

			return 0;
		
			printf("\n*** Fim da execução da atividade %d ***\n\n", exe);

			break;
		} 

		case 5:
		{
			printf("5) 	Escreva um código que produza a seguinte saída:\n");
			/*
			 	1******\n"
				12*****\n"
				123****\n"
				1234***\n"
				12345**\n"
				123456*\n"
				1234567\n"
			*/
			
			int i, j, k, l;

			for(i = 1; i <= 7; i++)
			{
				for(j = 1; j <= i; j++)
				{
					printf("%d", j);
				}

				for(k = 7 - j; k >= 0; k--)
				{
					printf("*");
				}

				printf("\n");
			}

			return 0;
		
			printf("\n*** Fim da execução da atividade %d ***\n\n", exe);

			break;
		}

		case 6: 
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
		
			printf("\n*** Fim da execução da atividade %d ***\n\n", exe);

			break;
		}

		case 7: 
		{
			printf("7) 	Escreva um algoritmo em C que solicita ao usuário um número inteiro. Este número inteiro deverá\n");
			printf("	estar entre 1 e 10 e será usado como a quantidade de linhas em uma pirâmide de números.\n");
			printf("	Você deverá usar laços for aninhados para controlar as linhas e montar a estrutura deseja.\n");

			int i, j, k, l, h, linhas;

		 	printf("Informe o numero de linhas desejado: ");
			scanf("%d", &linhas);

			for(i = 1; i <= linhas; i++)
			{
				for(j = linhas - (i - 1); j > 1; j--)
					printf("   ");

				for(l = i; l > 1; l--)
					printf("%d  ", l);

				for(k = 1; k <= i; k++)
					printf("%d  ", k);

				printf("\n");
			}

			return 0;

		
			printf("\n*** Fim da execução da atividade %d ***\n\n", exe);

			break;
		}

		case 8:
		{
			printf("8) 	Escreve um algoritmo que implemente uma calculadora com os seguintes operadores +,-,*,/.\n");
			printf("	Note que pode ser digitado um número arbitrário de operações.\n");

			int a, b, parcial, i;
			char operacao, operacao2;

			printf("Solicite a operação: ");
			scanf("%d\n", &a);
			scanf("%c", &operacao);
			scanf("%d\n", &b);
			scanf("%c", &operacao2);

			if(operacao2 == '=')
			{
				if(operacao == '+')
				 	printf("%d\n", a + b);
				else if(operacao == '-')
					printf("%d\n", a - b);
				else if(operacao == '*')
					printf("%d\n", a * b);
				else if(operacao == '/')
					printf("%d\n", a / b);

				return 0;
			}

			else
			{
				if(operacao == '+')
				 	parcial = a + b;
				else if(operacao == '-')
					parcial = a - b;
				else if(operacao == '*')
					parcial = a * b;
				else if(operacao == '/')
					parcial = a / b;

				operacao = operacao2;
			}

			for(; operacao != '='; )
			{
				scanf("%d\n", &b);
				scanf("%c", &operacao2);

				if(operacao2 == '=')
				{
					if(operacao == '+')
					 	printf("%d\n", parcial + b);
					else if(operacao == '-')
						printf("%d\n", parcial - b);
					else if(operacao == '*')
						printf("%d\n", parcial * b);
					else if(operacao == '/')
						printf("%d\n", parcial / b);

					return 0;
				}

				else
				{
					if(operacao == '+')
					 	parcial = parcial + b;
					else if(operacao == '-')
						parcial = parcial - b;
					else if(operacao == '*')
						parcial = parcial * b;
					else if(operacao == '/')
						parcial = parcial / b;

					operacao = operacao2;
				}
			}

			return 0;
	
			printf("\n*** Fim da execução da atividade %d ***\n\n", exe);

			break;
		}

		default: printf("Nao existe essa atividade.\n\n");
	}

	return 0;
}