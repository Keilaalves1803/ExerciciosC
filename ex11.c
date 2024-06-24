#include <stdio.h>

int main(){
	int a =5, b =17;
	while((a>=b) ? 0 : b){ //enquanto a maior ou igual a b for falso (0)
		a*=2;
		printf("\n%d", a);
	}
}
