#include <stdio.h>

int main(){
	int a =5, b =17;
	while((a>=b) ? 0 : b){
		a*=2;
		printf("\n%d", a);
	}
}
