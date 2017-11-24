#include <stdio.h>
#include <math.h>

double pitagoras(double a, double b){
	return(sqrt(a * a + b * b));
}

int main(){
	double catA, catB;
	printf("Informe os Catetos: ");
	scanf("%lf %lf", &catA, &catB);
	printf("Hipotenusa: %.2lf\n", pitagoras(catB, catA));
	return 0;
}