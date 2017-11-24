#include <stdio.h>

int main(){

	char a[100] = "Eduardo ", b[100] = "Stefanello";
	int A, B, j;

	for(A = 0; a[A] != '\0'; A++);
	for(B = 0; a[B] != '\0'; B++);

	for(j = 0; j <= B + 1; j++){

		a[A + j] = b[j];
	}

	printf("%s\n", a);
} 