#include <stdio.h>
#include <locale.h>

void imprimeComTexto(int valor){
	printf("Valor digitado � igual a %d", valor);
	//não há retorno de valor
}

int main(){
	int valor;
	setlocale(LC_ALL,"Portuguese");
	
	printf("Exerc�cio Imprime Valor \nDigite um valor: ");
	scanf("%d", &valor);
	imprimeComTexto(valor);
		
	return 0;
}
