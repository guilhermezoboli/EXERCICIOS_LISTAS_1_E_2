#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, j, A, MAT[5][5], cont=0;
	
	printf("DIGITE UM NUMERO:\n");
	scanf("%d", &A);
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("DIGITE UM NUMERO PARA ARMAZERNAR NA POSICAO %d %d DA MATRIZ:\n", i, j);
			scanf("%d", &MAT[i][j]);
		}
	}
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(MAT[i][j]==A){
				cont++;
			}
		}
	}
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("%d\t", MAT[i][j]);
			}
		printf("\n");
	}
	printf("NUMEROS IGUAIS A %d NA MATRIZ:%d", A, cont);
	
}