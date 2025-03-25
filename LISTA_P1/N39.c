#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, vet1[10], vet2[10];
	
	for(i=0;i<10;i++){
		printf("DIGITE UM NUMERO PARA O VETOR 1:\n");
		scanf("%d", &vet1[i]);
		printf("DIGITE UM NUMERO PARA O VETOR 2:\n");
		scanf("%d", &vet2[i]);
	}
	printf("INTERCALANDO VETORES\n");
	for(i=0;i<10;i++){
		printf("%d\n", vet1[i]);
		printf("%d\n", vet2[i]);
	}
	system("pause");
}