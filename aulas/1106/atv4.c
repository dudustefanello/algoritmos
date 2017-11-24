#include <stdio.h>

double min(double a, double b){
	return a < b ? a : b;
}

int main(){
	double a, b;
	scanf("%lf %lf", &a, &b);
	printf("O menor é: %.1lf\n", min(a, b));
}