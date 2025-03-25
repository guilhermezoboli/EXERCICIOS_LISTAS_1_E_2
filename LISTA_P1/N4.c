#include <stdio.h>
#include <stdlib.h>

int main(){
	float s1, reajuste;
	
	printf("DIGITE SEU SALARIO:\n");
	scanf("%f", &s1);
	
	if(s1<=300){
		reajuste=s1*1.35;
	}
	else
		reajuste=s1*1.15;
		
	printf("SEU NOVO SALARIO SERA:\n%.2f", reajuste);
}