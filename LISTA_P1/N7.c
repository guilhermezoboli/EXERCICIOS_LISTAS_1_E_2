#include <stdio.h>
#include <stdlib.h>

int main(){
	float s1, novo;
	
	printf("DIGITE O SALARIO:\n");
	scanf("%f", &s1);
	
	if(s1<=350)
		novo=(s1*0.93)+100;
	else if(s1>350 && s1<=600)
		novo=(s1*0.93)+75;
	else if(s1>600 && s1<=900)
		novo=(s1*0.93)+50;
	else
		novo=(s1*0.93)+35;
		
	printf("O NOVO SALARIO E:%.2f", novo);
}