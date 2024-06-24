#include <stdio.h>

int main(){
	int num;
	
	do{
		printf("Digite um valor maior ou igual a 10.\n");
		scanf("%d", &num);
		
		if (num<10){
			printf("\nO valor deve ser maior ou igual a 10.");
			printf("\nEntre com um novo valor: ");
		}
	} while(num < 10);
}
