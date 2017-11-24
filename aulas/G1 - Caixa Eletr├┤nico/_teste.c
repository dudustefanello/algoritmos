#include <stdio.h>

typedef struct{
	int eduardo;
}estrutura;

void um(){
	estrutura edu;
	printf("%d\n", edu.eduardo);
	edu.eduardo = 10;

}

void dois(){
	estrutura edu;
	printf("%d\n", edu.eduardo);
	edu.eduardo = 20;

}

int main(){
	estrutura edu;
	edu.eduardo = 50;
	
	um();

	dois();

	printf("%d\n", edu.eduardo);
}