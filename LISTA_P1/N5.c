#include <stdio.h>
#include <stdlib.h>

int main(){
	float sm, cred;
	
	printf("DIGITE O SALDO MEDIO:\n");
	scanf("%f", &sm);
	
	if(sm>400)
		cred=sm*0.3;
	else if(sm<=400 && sm>300)
		cred=sm*0.25;
	else if(sm<=300 && sm>200)
		cred=sm*0.20;
	else
		cred=sm*0.1;
		
	printf("O CREDITO DISPONIBILIZADO E DE:\n%f", cred);
}

		