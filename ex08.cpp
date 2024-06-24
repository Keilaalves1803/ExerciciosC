#include <stdio.h>

int main(){
	float valor, maiorValor = 0;
	int i;
	
	for(i = 0; i< 10 ; i++){
		printf("Digite o preco do item %d: ", i);
		scanf("%f", &valor);
		
		if(valor > maiorValor){
			maiorValor = valor;
		}
	}
	
	printf ("O maior preco recebido e %f\n", maiorValor);
	
	return 0;
}
