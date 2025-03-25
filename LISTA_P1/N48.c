#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, j;
	float mat[5][5], soma=0, media;
	
	printf("DIGITE OS ELEMENTOS DA MATRIZ:\n");
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			scanf("%f", &mat[i][j]);
		}
	}
	printf("MATRIZ LIDA:\n");
		for(i=0;i<5;i++){
			for(j=0;j<5;j++){
				printf("%.0f\t", mat[i][j]);
			}
			printf("\n");
		}
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(i==j){
				soma+=mat[i][j];
			}
		}
	}
	media=soma/5;
	printf("A MEDIA DA DIAGONAL PRINCIPAL E:%.2f\n", media);
}