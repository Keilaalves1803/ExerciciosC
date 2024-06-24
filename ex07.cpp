#include <stdio.h>

int main(){
	for(char i = 65; i<=90 ; i++){  //char e int tem correspondencia, assim, 65 comeca como a letra a
		printf("\n%c", i);
	}
	
	for(char j = 'A'; j<='90'; j++){  //char e int tem correspondencia, assim, 65 comeca como a letra a
		printf("\n%c", j);
	}
	
	for(char k = 'A'; k<='z'; k++){  //char e int tem correspondencia, assim, 65 comeca como a letra a
		printf("\n%c", k);
	}
	
	return 0;
}
