#include <stdio.h>

#define INSS 0.085;
#define IR 0.05;

int main()
{
	int i = 0, codigo, horas, dependentes;
	float bruto, inss, ir;

	do
	{
		printf("Informe o Código do Funcionário, suas Horas trabalhadas e quantidade de Dependentes: ")
		scanf("%d %d %d", &codigo, &horas, &dependentes);

		bruto = horas * 12 + dependentes * 40;

		ir = bruto * IR;
		inss = bruto * INSS;

		printf("Código:           %d\n", codigo);
		printf("Salário Bruto: R$ %.2f\n", bruto);
		printf("-----------------\n");
		printf("Descontos:\n");
		printf("INSS: R$ %.2f\n", inss);
		printf("IR:   R$ %.2f\n", ir);
		printf("Salário Liquido: R$ %.2f\n\n", bruto - ir - inss);


		i++;
	}
	while(i < 10);
}