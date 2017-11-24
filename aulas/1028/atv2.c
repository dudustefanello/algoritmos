#include <stdio.h>

int main(){
	int matriz[3][3], SomaColuna1 = 0;

	for(int i = 0; i < 3; i++)
		for(int j = 0; j < 3; j++){
			scanf("%d", &matriz[i][j]);
			SomaColuna1 += j == 0 ? matriz[i][j] : 0;
		}
	printf("%d\n", SomaColuna1);
}