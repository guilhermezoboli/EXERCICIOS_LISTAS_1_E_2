#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, V1[5], V2[5], VS[5];

	printf("DIGITE 5 VALORES PARA ARMAZENAR NO VETOR 1:\n");
	for(i=0;i<5;i++){
		scanf("%d", &V1[i]);
	}
	printf("DIGITE 5 VALORES PARA ARMAZENAR NO VETOR 2:\n");
	for(i=0;i<5;i++){
		scanf("%d", &V2[i]);
	}
	for(i=0;i<5;i++){
		VS[i]=V1[i]+V2[i];
	}
	for(i=0;i<5;i++){
		printf("%d\n", VS[i]);
	}
	
	system("pause");
}