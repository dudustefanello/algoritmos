#include <stdio.h>

double minimo(double vetor[3]){
	int menor = 10;
	for(int i = 0; i < 3; i++)
		if(vetor[i] < menor)
			menor = vetor[i];
	return menor;
}

int main(){
	double notas[3];
	for(int i = 0; i < 3; scanf("%lf", &notas[i]), i++)
	printf("menor %.2lf\n", minimo(notas));
}