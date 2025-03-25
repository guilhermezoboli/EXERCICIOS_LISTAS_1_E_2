#include <stdio.h>
#include <stdlib.h>

int main(){
	float n1, n2;
	
	printf("DIGITE N1:\n");
	scanf("%f", &n1);
	printf("DIGITE N2:\n");
	scanf("%f", &n2);
	
	printf("MENOR NUMERO:");
	if(n1<n2)
		printf("%.2f", n1);
	else 
		printf("%.2f", n2);
}