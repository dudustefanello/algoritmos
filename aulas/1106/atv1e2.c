#include <stdio.h>

typedef struct{
	double a, b, c, x;
} funcao;

double funcao2oGrau(funcao a){
	return a.a * a.x * a.x + a.b * a.x + a.c;
}

int main(){
	funcao f;
	printf("A: "); scanf("%lf", &f.a);
	printf("B: "); scanf("%lf", &f.b);
	printf("C: "); scanf("%lf", &f.c);
	printf("X: "); scanf("%lf", &f.x);
	printf("Y= %lf\n", funcao2oGrau(f));
}



