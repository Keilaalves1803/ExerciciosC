#include <stdio.h>
#include <locale.h>
#define PI 3.14 /*define valor pi*/

float calcularAreaCirculo(float raio){
	return PI * raio * raio;
}

int main(){
	float raio, area;
	setlocale(LC_ALL,"Portuguese");
	
	printf("Exerc�cio �rea Quadrado \nDigite o raio circular: ");
	scanf("%f", &raio);
	area = calcularAreaCirculo(raio);
	printf("A �rea do c�rculo de raio %.1f � igual a %.1f ", raio, area);
	
	return 0;
}


