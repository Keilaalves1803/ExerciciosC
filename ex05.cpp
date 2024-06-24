#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	float salario, salarioReaj;
	char tipo;
	
	setlocale(LC_ALL, "Portuguese");
	printf("Digite o valor salarial: R$");
	scanf("%f", &salario);
	printf("Digite a categoria profissional. \nT/t - Técnico. \nG/g - Gerente. \nO/o - Demais categorias.\n");
	scanf(" %c", &tipo);
	
	
	if(tipo == 'T' || tipo == 't'){
		salarioReaj = salario * 1.5;
		printf ("O salário com reajuste é de: R$%.2f", salarioReaj);
	}else if(tipo == 'G' || tipo == 'g'){
		salarioReaj = salario * 1.3;
		printf ("O salário com reajuste é de: R$%.2f", salarioReaj);
	}else if(tipo == 'O' || tipo =='o'){
		salarioReaj = salario * 1.2;
		printf ("O salário com reajuste é de: R$%.2f", salarioReaj);
	}else{
		printf ("Tipo inválido");
	}
	
	return 0;
}
