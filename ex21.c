#include <stdio.h>

int main(){
	int matriz[5][3], i, j;
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){	
			scanf("%i", &matriz[i][j]);
		}
	}
	//entrada dos elementos da matriz 3x3
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){	
				printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
