#include <stdio.h>

int main(){
	int a, b;
	
	printf("Digite dois valores inteiros-> a:b\n");
	scanf("%i:%i", &a, &b);
	
	a = a+b;
	b = a-b;
	a = a-b;
	
	printf("a = %i, b = %i", a, b);
	return 0;
}
