#include <stdio.h>
#include <stdlib.h>

int main(){
	int i;
	
	for(i=0; i<=100; i++){
		printf("%d\n", i);
		if((i%10)==0){
			printf("MULTIPLO DE 10\n");
		}
	}
}