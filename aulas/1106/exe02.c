#include <stdio.h>

double media(double A, double B, double C);

int main(){
	double a, b, c;

	printf("Informe três Valores: ");
	scanf("%lf%lf%lf", &a, &b, &c);
	media(a, b, c);
	printf("A Média é: %.2lf\n", media(a, b, c));

	return 0;
}

double media(double A, double B, double C){
	return((A + B + C) / 3);
}