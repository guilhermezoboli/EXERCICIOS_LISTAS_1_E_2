#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, j, mat[5][3], maior=-99999, pi=0, pj=0;
	
	printf("DIGITE OS ELEMENTOS DA MATRIZ:\n");
	for(i=0;i<5;i++){
		for(j=0;j<3;j++){
			scanf("%d", &mat[i][j]);
		}
	}
	printf("MATRIZ LIDA:\n");
		for(i=0;i<5;i++){
			for(j=0;j<3;j++){
				printf("%d\t", mat[i][j]);
			}
			printf("\n");
		}
	for(i=0;i<5;i++){
		for(j=0;j<3;j++){
			if(maior<mat[i][j]){
				maior=mat[i][j];
				pi=i;
				pj=j;	
			}
		}
	}
	printf("O MAIOR ELEMENTO E %d E ESTA NA POSICAO {%d}{%d}\n", maior, pi, pj);
}