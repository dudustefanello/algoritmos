#include <stdio.h>
double min(double a, double b){
	return a < b ? a : b;
}
int main(void){
	double a, b;
	scanf("%lf%lf", &a, &b);
	printf("menor: %lf\n", min(a, b));
	return 0;
}