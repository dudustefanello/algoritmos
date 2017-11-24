#include <stdio.h>

int main(){

	char a[] = "paralelepipedo"; 
	int i, j;

	for(i = 0; a[i] != '\0'; i++);

	char b[i];

	for(j = 0; j <= i; j++){

		b[j] = a[j];
	}

	printf("%s\n", b);
}