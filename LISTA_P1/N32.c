#include <stdio.h>
#include <stdlib.h>

int main(){
	int i;
	char l[10];
	
	printf("DIGITE 10 LETRAS:");
	for(i=0;i<10;i++){
		fflush(stdin);
		fgets(l, 10, stdin);
	}
	for(i=0;i<10;i++){
		if(l[i]==k || l[i]==K)
			printf("A LETRA K FOI ENCONTRADA NA POSICAO %d\n", i);
	}
}