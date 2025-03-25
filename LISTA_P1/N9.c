#include <stdio.h>
#include <stdlib.h>

int main(){
	float s1, novo;
	
	printf("DIGITE O SALARIO:\n");
	scanf("%f", &s1);
	
	if(s1<=300)
		novo=(s1*1.5);
	else if(s1>300 && s1<=500)
		novo=(s1*1.4);
	else if(s1>500 && s1<=800)
		novo=(s1*1.2);
	else
		novo=(s1*1.1);
		
	printf("O NOVO SALARIO E:%.2f", novo);
}