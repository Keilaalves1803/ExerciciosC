#include <stdio.h>
#include <locale.h>

int main(){
	int valor;
	setlocale(LC_ALL, "Portuguese");
	
	printf("Entre com um valor entre 0 e 2: ");
	scanf("%d", &valor);
	switch(valor){
		case 0:
			printf("Op��o 0 escolhida...");
			break;
		case 1:
			printf("Op��o 1 escolhida...");
			break;
		case 2:
			printf("Op��o 2 escolhida...");
			break;
		default:
			printf("Por favor entre com uma op��o entre 0 e 2: ");		
	}
}
