include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	int num1, num2, valor; //criando variáveis
	
	scanf("%d", &num1); //leitura de variável
	scanf("%d", &num2);
	
	//valor = num1 + num2++; faz a operação primeiro e depois incrementa, assim o valor só atribui a soma
	valor = num1 + ++num2;
	
	printf("%d", valor); //mostra o resultado da variável
	printf("\n%d", num2);
	
	return 0;
}
