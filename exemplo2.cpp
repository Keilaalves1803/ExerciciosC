#include <stdio.h>

int main(){
	float n1, n2, media;
	
	printf("Entre com a primeira nota: ");
	scanf("%f", &n1);
	
	printf("Entre com a segunda nota: ");
	scanf("%f", &n2);
	
	media = (n1 + n2) / 2.0;
	
	if(media >= 6.0){
		printf("Aprovado!");
	}else{
		if(media >=4.0){
			printf("Recuperacao!");
		}else{
			printf("Reprovado!");
		}
	}
	
	return 0;
}
