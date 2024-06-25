#include <stdio.h>
#include <locale.h>
#include <windows.h>

int opcao=0, lugar=1, poltrona=1, matriz[2][24], i=0, j=0, aux=0;
int main(){
	setlocale(LC_ALL, "Portuguese");
	if(opcao==0){
		for(i=0; i<2; i++){
			for(j=0; j<24; j++){
				if(i==0){
					matriz[0][j] = j+1;
				}else if(i==1){
					matriz[1][j] = j+25;
				}
			}
		}
		opcao =1;
	}
	
	while(opcao !=0){
	
		printf("\n Janela   ");
		janela(0, matriz);
		
		printf("\n Corredor ");
		corredor(0, matriz);
		
		printf("\n\n Corredor ");
		corredor(1, matriz);
		
		printf("\n Janela   ");
		janela(1, matriz);
		
		printf("\n\nOlá, usuário(a)!");
		printf("\nEscolha a ação desejada: \n1 - Comprar \n2 - Cancelar passagem\n0 - Encerrar\n");
		scanf("%d", &opcao);
		
		switch(opcao){
			case 0: 
				printf("\nAté mais!");
				return 0;
				break;
			case 2:
		fil:	printf("\nSelecione a posição desejada:\n1 - Janela\n2 - Corredor\n");
				scanf("%d", &lugar);
				lugar--;
				if(lugar!= 0 && lugar!=1){
					printf("Opção indisponível!");
					goto fil;
				}
				
				printf("Digite a numeração da poltrona desejada para o cancelamento. Poltronas ocupadas: ");
				numerarCancelamento(lugar, matriz);
				
				scanf("%d", &poltrona);
				poltrona--;
				if(poltrona >= 0){
					cancelar (lugar, poltrona, matriz);
				}
				break;
			case 1: 
		fil2:	printf("\nSelecione a posição desejada:\n1 - Janela\n2 - Corredor\n");
				scanf("%d", &lugar);
				lugar--;
				if(lugar!= 0 && lugar!=1){
					printf("Opção indisponível!");
					goto fil2;
				}
				printf("Digite a numeração desejada. \nPoltronas disponíveis: ");
				numerarCompra(lugar, matriz);
				
				scanf("%d", &poltrona);
				poltrona--;
				if(poltrona >= 0){
					comprar(lugar, poltrona, matriz);
				}
				break;
			default: printf("Opção inválida!");
	}
	system("cls");
	}
	return 0;
}
