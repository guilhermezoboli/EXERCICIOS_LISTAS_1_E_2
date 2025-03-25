#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, n[20], maior=-99999, menor=99999,  soma=0;
	
	printf("DIGITE 20 VALORES INTEIROS:");
	for(i=0; i<20; i++){
		scanf("%d", &n[i]);
		
		soma += n[i];
		if(maior<n[i]){
			maior=n[i];
		}
		if(menor>n[i]){
			menor=n[i];
		}
	}
	printf("SOMA:\n%d\n", soma);
	printf("MAIOR:\n%d\n", maior);
	printf("MENOR:\n%d\n", menor);
	
	system("pause");	
}