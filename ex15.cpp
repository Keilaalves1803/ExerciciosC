#include <stdio.h>
#include <locale.h>

int main(){
	int valor;
	setlocale(LC_ALL, "Portuguese");
	
	printf("Entre com um valor entre 0 e 2: ");
	scanf("%d", &valor);
	switch(valor){
		case 0:
			printf("Opção 0 escolhida...");
			break;
		case 1:
			printf("Opção 1 escolhida...");
			break;
		case 2:
			printf("Opção 2 escolhida...");
			break;
		default:
			printf("Por favor entre com uma opção entre 0 e 2: ");		
	}
}
