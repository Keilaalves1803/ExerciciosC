#include <stdio.h>
#include <locale.h>

void imprimeComTexto(int valor){
	printf("Valor digitado È igual a %d", valor);
	//n√£o h√° retorno de valor
}

int main(){
	int valor;
	setlocale(LC_ALL,"Portuguese");
	
	printf("ExercÌcio Imprime Valor \nDigite um valor: ");
	scanf("%d", &valor);
	imprimeComTexto(valor);
		
	return 0;
}
