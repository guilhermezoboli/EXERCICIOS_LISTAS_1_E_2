#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, j, MAT1[5][5], MAT2[5][5], MATSOMA[5][5];
	
	printf("DIGITE 10 NUMEROS PARA ARMAZENAR NA MATRIZ 1:\n");
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			scanf("%d", &MAT1[i][j]);
		}
	}
	printf("DIGITE 10 NUMEROS PARA ARMAZENAR NA MATRIZ 2:\n");
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			scanf("%d", &MAT2[i][j]);
		}
	}
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			MATSOMA[i][j]=MAT1[i][j]+MAT2[i][j];
		}
	}
	printf("MATRIZ SOMADA:\n");
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("%d\t", MATSOMA[i][j]);
		}
		printf("\n");
	}
}