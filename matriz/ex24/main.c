#include <stdio.h>
#include <locale.h>

int main() {
	int matrizA[3][3], matrizB[3][3], i, j;
	
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("Digite o valor da matriz A %d x %d: ", i+1, j+1);
			scanf("%d", &matrizA[i][j]);
		}
	}
	i=0;
	j=0;
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("Digite o valor da matriz B %d x %d: ", i+1, j+1);
			scanf("%d", &matrizB[i][j]);
		}
	}
	
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf(" %d", soma(matrizA[i][j], matrizB[i][j]));
		}
		printf("\n");
	}
	
	return 0;
}
