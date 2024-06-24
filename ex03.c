#include <stdio.h>
#include <locale.h> //aceitar caracteres portugues
#include <stdlib.h> 

int main(){
	
	float n1, n2, media;
	
	printf("Digite -> n1:n2\n"); // indicando como deve ser digitada a entrada de ambas variaveis pelo usuario
	scanf("%f:%f", &n1, &n2); //definindo entrada das variaveis
	media = (n1+n2) / 2;
	printf("\nSua media: %.2f", media); //limitando quantidade de algarismos após virgula
	
	setlocale(LC_ALL, "Portuguese"); // funcao para aceitar caracteres em portugues
	
	if(media >= 6.0) printf("\nAprovado!!"); //if aceita o nao uso de colchetes dessa forma
	if(media < 4.0) printf("\nReprovado!!");
	if(media < 6.0 && media > 4.0) printf("\nRecuperacao!!");
	
	return 0;
}
