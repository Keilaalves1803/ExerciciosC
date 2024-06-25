#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int vetor[10], i, j=0;
	
	printf("Insira 10 valores: \n");
	for(i=0; i<10; i++){
		scanf("%d", &vetor[i]);
		if(vetor[i] == 0){
			j++;
		}
	}
	printf("A quantidade de zeros é igual a %d", j);
	
	return 0;
}
