#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, vet[10], p=0;
	
	printf("DIGITE 10 ELEMENTOS POSITIVOS PARA ARMAZENAR NO VETOR:\n");
	for(i=0;i<10;i++){
		scanf("%d", &vet[i]);
	}
	for(i=0; i<10;i++){
		if((vet[i]%2)==0){
			p++;
		}	
	}
	printf("QNTD DE ELEMENTOS PARES:%d", p);
}