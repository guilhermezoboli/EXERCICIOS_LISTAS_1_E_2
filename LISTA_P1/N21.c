#include <stdio.h>
#include <stdlib.h>

int main(){
	int n;
	printf("DIGITE UM NUMERO:\n");
	scanf("%d", &n);
	
	if((n%2)==0){
		printf("DIVISIVEL POR 2\n");
	}
	if((n%5)==0){
		printf("DIVISIVEL POR 5\n");
	}
	if((n%10)==0){
		printf("DIVISIVEL POR 10\n");
	}
	else if((n%2)!=0 &&(n%5)!=0 &&(n%10)!=0)
		printf("NAO E DIVISIVEL POR 2, 5 E NEM 10\n");
	
	system("pause");
}