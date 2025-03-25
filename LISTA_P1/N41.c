#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, j, mat[3][3], soma=0;
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("DIGITE NUMEROS PARA ARMAZENAR NA MATRIZ %d %d:\n", i, j);
			scanf("%d", &mat[i][j]);
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(i==j){
				soma+=mat[i][j];
			}
			if(i>j){
				soma+=mat[i][j];
			}
		}
	}
	printf("MATRIZ LIDA\n");
	for(i=0;i<3;i++){
		for(j=0; j<3; j++){
			printf("%d\t", mat[i][j]);
		}
		printf("\n");
	}
	printf("DIAGONAL PRINCIPAL e ABAIXO\n");
	for(i=0;i<3;i++){
		for(j=0; j<3; j++){
			if(i==j || i>j)
			printf("%d\t", mat[i][j]);
			else
			printf("\t");
		}
		printf("\n");
	}
	printf("SOMA DIAGONAL PRINCIPAL e ABAIXO\n");
	printf("SOMA:%d\n", soma);
}
	