#include <stdio.h>
#include <math.h>
#include <string.h>

int um()
{
	printf("1. Escrever um algoritmo para ler dois valores numéricos e apresentar a diferença do maior pelo menor.\n");

	int a, b;

	printf("Digite dos numeros: ");
	scanf("%d %d", &a, &b);

	if(a >= b)
	{
		printf("A diferença eh: %d\n", a - b);
	}
	else if(b > a)
	{
		printf("A diferença eh: %d\n", b - a);
	}
	return 0;
}

int dois()
{
	printf("2. Faça um algoritmo que leia um número e mostre uma mensagem indicando se este número é par ou ímpar e\n");
	printf("se é positivo ou negativo.\n");

	int num;

	printf("Digite um numero: ");
	scanf("%d", &num);

	if(num % 2 == 0)
	{
		printf("%d eh par;\n", num);
	}
	else
	{
		printf("%d eh impar;\n", num);
	}

	if(num >= 0)
	{
		printf("%d eh positivo.\n", num);
	}
	else
	{
		printf("%d eh negativo.\n", num);
	}

	return 0;
}

int tres()
{
	printf("3. Leia 3 valores inteiros (X, Y, Z), determina e escreve o menor deles.\n");

	int numero[3], menor, aux, i;

	printf("Digite tres numeros: ");
	
	for(i = 0; i <= 2; i++)
	{
		scanf("%d", &numero[i]);
	}

	if(numero[0] > numero[1])
	{
		aux = numero[0];
		numero[0] = numero[1];
		numero[1] = aux;
	}

	if(numero[0] > numero[2])
	{
		aux = numero[0];
		numero[0] = numero[2];
		numero[2] = aux;
	}

	printf("%d eh o menor\n", numero[0]);

	return 0;
}

int quatro()
{
	printf("4. Escrever um algoritmo para ler e imprimir três números. Se o primeiro for positivo, imprimir sua raiz quadrada,\n");
	printf("caso contrário, imprimir o seu quadrado; se o segundo número for maior que 10 e menor que 100, imprimir a mensagem:\n");
	printf("“Número está entre 10 e 100 – intervalo permitido”; se o terceiro número for menor que o segundo,\n");
	printf("calcular e imprimir a diferença entre eles, caso contrário, imprimir o terceiro número adicionado de 1.\n");

	double numero[3], i;

	scanf("%lf", &numero[0]);
	scanf("%lf", &numero[1]);
	scanf("%lf", &numero[2]);

	if(numero[0] >= 0)
	{
		printf("%.2lf\n", sqrt(numero[0]));
	}
	else
	{
		printf("%.2lf\n", numero[0] * numero[0]);
	}

	if(numero[1] >= 10 && numero[1] <= 100)
	{
		printf("%.2lf esta entre 10 e 100 - intervalo permitido\n", numero[1]);
	}
	else
	{
		printf("%.2lf nao esta entre 10 e 100 - intervalo nao permitido\n", numero[1]);
	}

	if(numero[2] < numero[1])
	{
		printf("%.2lf\n", numero[1] - numero[2]);
	}
	else
	{
		printf("%.2lf\n", numero[2] + 1);
	}

	return 0;
}

int cinco()
{
	printf("5. Tendo como dados de entrada a altura e o sexo de uma pessoa, construa um algoritmo para calcular seu peso ideal,\n");
	printf("utilizando as seguintes fórmulas:\n");
	printf("- Para homens:.....	72,7 * altura – 58;\n");
	printf("- Para mulheres:...	62,1 * altura – 44,7\n");

	float altura, ideal;
	char sexo = 'a';

	printf("Calculo do peso ideal:\n");

	printf("Digite H para Homeme ou M para mulher: ");
	scanf("%s", &sexo);

	if(sexo == 'H' || sexo == 'h')
	{
		printf("Informe a altura do homem: ");
		scanf("%f", &altura);
		ideal = altura * 72.7 - 58;
	}

	if(sexo == 'M' || sexo == 'm')
	{
		printf("Informe a altura da mulher: ");
		scanf("%f", &altura);
		ideal = altura * 62.1 - 44.7;
	}

	printf("Seu pedo ideal e: %.2f\n", ideal);

	return 0;
}

int seis()
{
	printf("6. Elabore um algoritmo que, dada a idade de um nadador, classifique-o em uma das seguintes categorias:\n");
	printf("- Infantil A: 5 a 7 anos;\n");
	printf("- Infantil B: 8 a 10  anos;\n");
	printf("- Juvenil A: 11 a 13 anos;\n");
	printf("- Juvenil B: 14 a 17 anos;\n");
	printf("- Sênior: maiores de 17 anos.\n");

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

int sete()
{
	printf("7. Faça um algoritmo que leia duas notas obtidas por um aluno na disciplina de Cálculo,\n");
	printf("o número de aulas ministradas e o número de aulas assistidas por este aluno nesta disciplina.\n");
	printf("Calcule e mostre a média final deste aluno e diga se ele foi aprovado ou reprovado.\n");
	printf("Considere que para um aluno ser aprovado ele deve obter média final igual ou maior a 6\n");
	printf("e ter no mínimo 75%% de freqüência. \n");

	int aulas;
	float nota1, nota2, media, frequencia;
	char nome[20];

	printf("------------------------------------\n");
	printf("==== Calculo de media semestral ====\n");
	printf("====    Disciplina de Calculo   ====\n");
	printf("------------------------------------\n");
	printf("Nome do aluno: ");
	scanf("%s", nome);
	printf("Informe a 1a nota de %s: ", nome);
	scanf("%f", &nota1);
	printf("Informe a 2a nota de %s: ", nome);
	scanf("%f", &nota2);
	printf("Informe a quantidade de aulas frequentadas por %s: ", nome);
	scanf("%d", &aulas);

	media = (nota1 + nota2) / 2;
	printf("\nMedia final: %.2f\n", nota1);

	frequencia = (100 * aulas) / 36;
	printf("Frequencia: %.1f%%\n", frequencia);

	if(media >= 6 && frequencia >= 75)
		printf("ALUNO APROVADO\n");

	else
		printf("ALUNO REPREVADO\n");

	return 0;
}

int oito()
{
	printf("8. Um Banco concederá um crédito especial aos seus clientes, variável com o saldo médio no último ano.\n");
	printf("Faça um algoritmo que leia o saldo médio de um cliente e calcule o valor do crédito de acordo com a tabela abaixo.\n");
	printf("Mostre uma mensagem informando o saldo médio e o valor do crédito. \n");
	printf("|    Saldo Medio	 |          Percentual			|\n");
	printf("|--------------------|------------------------------|\n");
	printf("|   de 0 a 200,00	 | nenhum crédito (crédito = 0) |\n");
	printf("| de 201,00 a 400,00 | 20%% do valor do saldo médio |\n");
	printf("| de 401,00 a 600,00 | 30%% do valor do saldo médio |\n");
	printf("|  acima de 600,00   | 30%% do valor do saldo médio |\n");

	float saldo, credito;

	printf("Informe o Saldo Medio do cliente no ano anterior: ");
	scanf("%f", &saldo);

	if(saldo <= 200)
		credito = 0;

	else if(saldo > 200 && saldo <= 400)
		credito = (20 * saldo) / 100;

	else if(saldo > 400 && saldo <= 600)
		credito = (30 * saldo) / 100;

	else if(saldo > 600)
		credito = (40 * saldo) / 100;

	printf("O Credito Especial para esse cliente e de: R$ %.2f\n", credito);

	return 0;
}

int nove()
{
	printf("9. Um vendedor necessita de um programa que calcule o preço total devido por um cliente.\n");
	printf("O programa deve receber o código de um produto e a quantidade comprada e calcular o preço total,\n");
	printf("usando a tabela abaixo. Mostrar uma mensagem no caso de código inválido. \n");
	printf("| Codigo do produto |  Preço Unitário  |\n");
	printf("|-------------------|------------------|\n");
	printf("|		  1001		| 	    R$ 5,32	   |\n");
	printf("|		  1324		|	    R$ 6,45	   |\n");
	printf("|		  6548		|	    R$ 2,37	   |\n");
	printf("|		   987		|	    R$ 5,32	   |\n");
	printf("|		  7623		|	    R$ 6,45	   |\n");

	int codigo, quantidade;
	float unitario = 0;

	printf("Informe o codigo do produto: ");
	scanf("%d", &codigo);

	printf("Informe a quantidade: ");
	scanf("%d", &quantidade);

	if(codigo == 1001 || codigo == 987)
		unitario = 5.32;

	else if(codigo == 1324 || codigo == 7623)
		unitario = 6.45;

	else if(codigo == 6548)
		unitario = 2.37;

	else
		printf("Codigo invalido\n");

	printf("Valor da compra: R$ %.2f", unitario * quantidade);

	return 0;
}

int dez()
{
	printf("10. Ler um número inteiro, e verificar se o número corresponde a um mês válido no calendário\n");
	printf("e escrever o nome do mês, senão escrever uma mensagem ‘Mês Inválido’.\n");
	
	int entrada;
	char mes[13][10];

	strcpy(mes[1], "Janeiro");
	strcpy(mes[2], "Fevereiro");
	strcpy(mes[3], "Marco");
	strcpy(mes[4], "Abril");
	strcpy(mes[5], "Maio");
	strcpy(mes[6], "Junho");
	strcpy(mes[7], "Julho");
	strcpy(mes[8], "Agosto");
	strcpy(mes[9], "Setembro");
	strcpy(mes[10], "Outubro");
	strcpy(mes[11], "Novembro");
	strcpy(mes[12], "Dezembro");

	printf("Digite um o numero correspondente a um mes do calendario:\n");
	scanf("%d", &entrada);

	printf("Mes de %s\n", mes[entrada]);

	return 0;
}

int main()
{
	int escolha = 1;
	
	while(escolha != 0)
	{
		printf("Qual exercicio voce quer executar? (1 - 10 / 0 para encerrar)\n");
		scanf("%d", &escolha);
		
		switch(escolha)
		{
			case 0:  return 0;
			case 1:  um();     printf("Fim da atividade %d\n\n", escolha); break;
			case 2:  dois();   printf("Fim da atividade %d\n\n", escolha); break;
			case 3:  tres();   printf("Fim da atividade %d\n\n", escolha); break;
			case 4:  quatro(); printf("Fim da atividade %d\n\n", escolha); break;
			case 5:  cinco();  printf("Fim da atividade %d\n\n", escolha); break;
			case 6:  seis();   printf("Fim da atividade %d\n\n", escolha); break;
			case 7:  sete();   printf("Fim da atividade %d\n\n", escolha); break;
			case 8:  oito();   printf("Fim da atividade %d\n\n", escolha); break;
			case 9:  nove();   printf("Fim da atividade %d\n\n", escolha); break;
			case 10: dez();    printf("Fim da atividade %d\n\n", escolha); break;
			default: 		   printf("Nao existe essa atividade.\n\n");   break;
		}
	}

	return 0;
}