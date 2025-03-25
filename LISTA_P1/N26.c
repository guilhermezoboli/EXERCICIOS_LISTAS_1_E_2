#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int i, n, fat;
	
	printf("DIGITE UM NUMERO:\n");
	scanf("%d", &n);
	fat = 1;
	/*for(i=n; i>=1; i--){
		fat = fat * i;
	}
		i=n;
	while(i>=1){
		fat = fat * i;	
		i--;
	}*/
	i=n;
	do{
		fat=fat*i;
		i--;
	}while(i>=1);
	printf("FATORIAL:%d", fat);
}