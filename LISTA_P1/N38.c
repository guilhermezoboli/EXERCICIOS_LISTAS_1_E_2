#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, vet[10];
	
	for(i=0;i<10;i++){
		printf("DIGITE UM NUMERO PARA ARMAZENAR:\n");
		scanf("%d", &vet[i]);
	}
	
	printf("VETOR LIDO:\n");
	for(i=0;i<10;i++){
		printf("%d\n", vet[i]);
	}
	printf("VETOR TROCADO:\n");
	for(i=9;i>=0;i--){
		printf("%d\n", vet[i]);
	}
	system("pause");

}