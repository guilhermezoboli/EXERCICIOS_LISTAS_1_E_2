#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, j, mat[5][4], matT[4][5];
	
	for(i=0;i<5;i++){
		for(j=0;j<4;j++){
			printf("DIGITE NUMEROS PARA ARMAZENAR NA MATRIZ %d %d:\n", i, j);
			scanf("%d", &mat[i][j]);
		}
	}
	printf("MATRIZ LIDA:\n");
		for(i=0;i<5;i++){
			for(j=0;j<4;j++){
				printf("%d\t", mat[i][j]);
			}
			printf("\n");
		}
	printf("MATRIZ TESTE:\n");
		for(j=0;j<4;j++){
			for(i=0;i<5;i++){
				printf("%d\t", mat[i][j]);
			}
			printf("\n");
		}
		
	for(i=0;i<5;i++){
		for(j=0;j<4;j++){
			matT[j][i]=mat[i][j];
		}
	}
	printf("MATRIZ TRANSPOSTA:\n");
	for(i=0;i<4;i++){
		printf("\n");
		for(j=0;j<5;j++){
			printf("%d\t", matT[i][j]);
		}
	}
	system("pause");
}