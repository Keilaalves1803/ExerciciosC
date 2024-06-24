#include <stdio.h>

int res;
void soma(int num1, int num2){
	//aux é variável local
	int aux;
	aux = num1 + num2;
	//res é variável global
	res = aux;
}
int main(){
	int n = 4, m = -9;
	soma(n, m);
	printf("%d", res);
	
	return 0;
}
