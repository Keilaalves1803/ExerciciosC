#include <stdio.h>
#include "operacoes.h"
#include <locale.h>

int main(){
	float a, b;
	setlocale(LC_ALL, "Portuguese");
	
	printf("Exercício Bibliotecas \nDigite dois valores: a e b \n");
	scanf("%f e %f", &a, &b);
	
	printf("O resultado da soma dos dois valores é de %.1f\n", soma(a, b));
	printf("O resultado da média dos dois valores é de %.1f\n", media(a, b));
	printf("O resultado da subtração dos dois valores é de %.1f\n", sub(a, b));
	
	return 0;
}
