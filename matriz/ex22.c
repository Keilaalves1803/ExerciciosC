#include <stdio.h>
int main(){
	char matriz[30][30];
	int i, j;
	
	for(i = 0; i < 30; i++){
		for(j = 0; j < 30; j++){
			if(j%29 == 0){
			matriz[i][j] = '|';
			}else if(i == 0 | i==29){
			matriz[i][j] = '.';
			}
			else{
			matriz[i][j] = ' ';
			}
		}
	} //fazendo uma moldura na matriz

	for(i = 0; i < 30; i++){
		for(j = 0; j < 30; j++){
			printf(" %c", matriz[i][j]);
		}
		printf("\n");
	} //mostrando o resultado
	
	return 0;
}
