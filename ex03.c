#include <stdio.h>
#include <locale.h> //aceitar caracteres portugues
#include <stdlib.h> 

int main(){
	
	float n1, n2, media;
	
	printf("Digite -> n1:n2\n");
	scanf("%f:%f", &n1, &n2);
	media = (n1+n2) / 2;
	printf("\nSua media: %.2f", media);
	
	setlocale(LC_ALL, "Portuguese");
	
	if(media >= 6.0) printf("\nAprovado!!");
	if(media < 4.0) printf("\nReprovado!!");
	if(media < 6.0 && media > 4.0) printf("\nRecuperacao!!");
	
	return 0;
}
