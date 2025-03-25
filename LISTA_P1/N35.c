#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, vet[10], m=999999, p=0;
	
	printf("DIGITE 10 ELEMENTOS PARA ARMAZENAR NO VETOR:\n");
	for(i=0;i<10;i++){
		scanf("%d",  &vet[i]);
	} 
	for(i=0;i<10;i++){
		if(m>vet[i]){
			m=vet[i];
			p=i;
		}
	}
	printf("O MENOR ELEMENTO E O %d, E SE ENCONTRA NA POSICAO %d.\n", m, p);
	
	system("pause");
}