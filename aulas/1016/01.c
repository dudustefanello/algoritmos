#include <stdio.h>

int main(){
	char i[5];

	fgets(i, 5, stdin);

	printf("%c\n", i[5]);
}