#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, n[10];
	printf("DIGITE O NUMERO %d DO VETOR:\n", i);
	for(i=0;i<10;i++){
		scanf("%d", &n[i]);
	}
	printf("VETOR INVERTIDO\n");
	for(i=9;i>=0;i--){
		printf("%d\n", n[i]);
	}
	
	system("pause");
}