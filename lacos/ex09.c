#include <stdio.h>

int main(){
	int num;
	printf("Entre com um novo valor: ");
	scanf("%d", &num);
	
	while(num<10){
		printf("Valor deve ser maior ou igual a 10");
		printf("\nEntre com um novo valor: ");
		
		scanf("%d", &num);
	}
}
