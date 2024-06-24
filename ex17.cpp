#include <stdio.h>
#include <locale.h>
#define PI 3.14 /*define valor pi*/

float calcularAreaCirculo(float raio){
	return PI * raio * raio;
}

int main(){
	float raio, area;
	setlocale(LC_ALL,"Portuguese");
	
	printf("Exercício Área Quadrado \nDigite o raio circular: ");
	scanf("%f", &raio);
	area = calcularAreaCirculo(raio);
	printf("A área do círculo de raio %.1f é igual a %.1f ", raio, area);
	
	return 0;
}


