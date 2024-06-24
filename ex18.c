#include <stdio.h>
#include <locale.h>

void imprimeComTexto(int valor){
	printf("Valor digitado é igual a %d", valor);
	//nÃ£o hÃ¡ retorno de valor
}

int main(){
	int valor;
	setlocale(LC_ALL,"Portuguese");
	
	printf("Exercício Imprime Valor \nDigite um valor: ");
	scanf("%d", &valor);
	imprimeComTexto(valor);
		
	return 0;
}
