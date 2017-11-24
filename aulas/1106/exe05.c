#include <stdio.h>

unsigned long long int fat(int numero){
	return (numero == 0) ? 1 : numero * fat(numero - 1);
}

int main(){
	int i;
	scanf("%d", &i);
	printf("%llu\n", fat(i));
	return 0;
}