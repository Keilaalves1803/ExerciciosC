#include <stdio.h>
#include <iostream>

int main(){
	float va, vr, per, l, i;
	
	printf("Digite o Valor Aplicado: \n");
	scanf("%f", &va);
	printf("Valor do resgate\n");
	scanf("%f", &vr);
	printf("Digite o periodo: \n");
	scanf("%f", &per);
	
	l = vr - va;
	printf("Lucro: R$%.2f", l);
	
	if(per <= 180) i = 0.225; 
	if(per <= 360) i = 0.20;
	if(per <= 720) i = 0.175;
	else i = 0.15;	
	
	printf("\nIR: R$%.2f", l * i);
	
	return 0;
}
