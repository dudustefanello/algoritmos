#include <stdio.h>

float max(float *vetor, int n){
	float maior = 0.0;
	int i;
	for(i = 0; i < n; i++){
		maior = vetor[i] > maior ? vetor[i] : maior;
	}
	return maior;
}

int main(){
	float vetor[] = {8.98,6.333,52.1,3654.68,2145.69,36841.0};
	int n = 5;

	printf("%.2lf\n", max(vetor, n));
}