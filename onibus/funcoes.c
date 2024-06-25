#include <stdio.h>
#include "funcoes.h"

void corredor(int i, int matriz[2][24]){
	int j;
 	for(j=0; j<24; j++){
		if(j%2 != 0){
		
			if(matriz[i][j] == 0){
				printf("| X|");
			}else{
				if(matriz[i][j] < 10){
					printf("| %d|", matriz[i][j]);
				}else{
					printf("|%d|", matriz[i][j]);
				}
			}
			
		}
	}
 }
 
 void janela(int i, int matriz[2][24]){
 	int j;
 	for(j=0; j<24; j++){
		if(j%2 == 0){
		
			if(matriz[i][j] == 0){
				printf("| X|");
			}else{
				if(matriz[i][j] < 10){
					printf("| %d|", matriz[i][j]);
				}else{
					printf("|%d|", matriz[i][j]);
				}
			}
			
		}
	}
 }
 
 void numerarCompra(int lugar, int matriz[2][24]){
 	int i, j, a=0;
 	for(i=0; i<2; i++){
		for(j=lugar; j<24; j++){
			if(matriz[i][j] != 0){
			printf(" %d ", matriz[i][j]);
			a++;							
			}
			j++;
		}
	}
	if(a==0){
		system("cls");
		printf("\nFileira lotada!\n");
		main();
	}
	printf("\n");
 }
 
 void numerarCancelamento(int lugar, int matriz[2][24]){
 	int i, j, a=0;
 	for(i=0; i<2; i++){
		for(j=lugar; j<24; j++){
			if(matriz[i][j] == 0 && i == 0){
			printf(" %d ", j+1);
			a++;				
			}else if(matriz[i][j] == 0 && i == 1){
			printf(" %d ", j+25);	
			a++;							
			}
			j++;
		}
	}
	if(a==0){
		system("cls");
		printf("\nFileira vazia!\n");
		main();
	}
	printf("\n");
	
 }
 
void comprar(int lugar, int poltrona, int matriz[2][24]){
	int vetor = 0, a, i, j;
a:	if(poltrona>24){
		poltrona -= 24;
		vetor = 1;
	}
	for(j=0; j<24; j++){
		if(matriz[vetor][poltrona] != 0){
			a++;
		}
	}

	if(a==0){
		printf("Poltronas indisponíveis!");
		main();
	}
	while(matriz[vetor][poltrona] == 0){
		printf("Poltrona indisponível, faça outra escolha: ");	
		scanf("%d", &poltrona);
		poltrona--;
		goto a;
	}
 	

	if(lugar==0 && poltrona%2 ==0){
		matriz[vetor][poltrona] = 0;
		printf("Poltrona selecionada com sucesso!");
	}else if(lugar==0 && poltrona%2!=0){
		printf("Poltrona indisponível, faça outra escolha: ");	
		scanf("%d", &poltrona);
		poltrona--;
		goto a;
	}else if(lugar==1 && poltrona%2 !=0){
		matriz[vetor][poltrona] = 0;
		printf("Poltrona selecionada com sucesso!");
	}else if(lugar==1 && poltrona%2 == 0){
		printf("Poltrona indisponível, faça outra escolha: ");	
		scanf("%d", &poltrona);
		poltrona--;
		goto a;
	}		
 }
 
void cancelar(int lugar, int poltrona, int matriz[2][24]){
 	int j, vetor = 0;
b: 	if(poltrona>24){
		poltrona -= 24;
		vetor = 1;
	}
	
	while(matriz[vetor][poltrona] != 0){
		printf("Poltrona desocupada, faça outra escolha: ");
		scanf("%d", &poltrona);
		poltrona--;
		goto b;
	} 
 	
	if(poltrona%2 == 0 && lugar == 0){
		if(vetor==0){
			matriz[vetor][poltrona] = poltrona+1;
		}else if(vetor==1){
			matriz[vetor][poltrona] = poltrona+25;	
		}
		printf("Passagem cancelada com sucesso!");
	}else if(lugar==0 && poltrona%2!=0){
		printf("Poltrona indisponível, faça outra escolha: ");	
		scanf("%d", &poltrona);
		poltrona--;
		goto b;
	}else if(lugar==1 && poltrona%2 !=0){
		if(vetor==0){
			matriz[vetor][poltrona] = poltrona+1;
		}else if(vetor==1){
			matriz[vetor][poltrona] = poltrona+25;	
		}
		printf("Passagem cancelada com sucesso!");
	}else if(lugar==1 && poltrona%2 == 0){
		printf("Poltrona indisponível, faça outra escolha: ");	
		scanf("%d", &poltrona);
		poltrona--;
		goto b;
	}
	
	
 }
