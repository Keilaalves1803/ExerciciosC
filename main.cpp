#include <stdio.h>
#include "operacoes.h"
#include <locale.h>

int main(){
	float a, b;
	setlocale(LC_ALL, "Portuguese");
	
	printf("Exerc�cio Bibliotecas \nDigite dois valores: a e b \n");
	scanf("%f e %f", &a, &b);
	
	printf("O resultado da soma dos dois valores � de %.1f\n", soma(a, b));
	printf("O resultado da m�dia dos dois valores � de %.1f\n", media(a, b));
	printf("O resultado da subtra��o dos dois valores � de %.1f\n", sub(a, b));
	
	return 0;
}
