#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define ERRO 1e-9

typedef struct{
	double a, b, c;
} equacao;

double delta(equacao eq){
	return (eq.b * eq.b - 4 * eq.a * eq.c);
}

double bhaskara1(double delta, equacao a){
	return (-(a.b) + sqrt(delta)) / (2 * a.a);
}

double bhaskara2(double delta, equacao b){
	return (-(b.b) - sqrt(delta)) / (2 * b.a);
}

int main(){
	equacao eq;
	double triangulo;

	printf("A: "); scanf("%lf", &eq.a);
	printf("B: "); scanf("%lf", &eq.b);
	printf("C: "); scanf("%lf", &eq.c);

	triangulo = delta(eq);
	printf("D: %.2lf\n", triangulo);
	
	if(triangulo >= 0){
		double raiz1 = bhaskara1(triangulo, eq);
		double raiz2 = bhaskara2(triangulo, eq);

		if(fabs(raiz1 - raiz2) <= ERRO)
			printf("\nX = %.2lf\n", raiz1);
		else
			printf("\nX1 = %.2lf\nX2 = %.2lf\n", raiz1, raiz2);
	}
	else{
		printf("\nNao existe resolução nos reais:\n");

		triangulo = sqrt(fabs(delta(eq)));

		printf("X1 = %.2lf + %.2lfi\n", (-eq.b) / (2 * eq.a), triangulo / (2 * eq.a));
		printf("X1 = %.2lf - %.2lfi\n", (-eq.b) / (2 * eq.a), triangulo / (2 * eq.a));
	}

	return 0;
}