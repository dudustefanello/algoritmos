#include <stdio.h>

int main(){
	int matriz[3][2], negativos = 0;

	for(int i = 0; i < 3; i++)
		for(int j = 0; j < 2; j++){
			scanf("%d", &matriz[i][j]);
			negativos += matriz[i][j] < 0 ? 1 : 0;
		}
	printf("%d\n", negativos);
}