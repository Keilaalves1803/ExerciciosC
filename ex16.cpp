#include <stdio.h>
#include <locale.h>


float divisao(float a, float b){  /*funcao com parametros de retorno a e b*/
	return a/b;					/*retorno ao utilizar a funcao*/
}

int main (){
	float a, b;
	setlocale (LC_ALL, "Portuguese");
	
	printf("Exerc�cio Divis�o \nDigite dois n�meros inteiros: 1� e 2�\n");
	scanf("%f e %f", &a, &b);
	//div = divisao(num, num1);
	printf("%.2f", divisao(a, b));
	
	return 0;
}

