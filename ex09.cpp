#include <stdio.h>

int main(){
	int valor, soma, dado1, dado2, dado3, cont = 0;
	
	printf("Digite o valor: ");
	scanf("%i", &valor);
	
	for(int i = 1 ; i<=6; i++ ){
		for(int j = 1 ; j<=6; j++ ){
			for(int k = 1 ; k <=6; k++ ){
				if(valor == i + j + k){
				dado1 = i;
				dado2 = j;
				dado3 = k;
				cont++;
				}
			}
		}
	}
	
	printf("%i  %i  %i  %i", dado1, dado2, dado3, cont);
		
	return 0;	
}
