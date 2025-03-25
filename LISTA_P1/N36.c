#include <stdio.h>
#include <stdlib.h>

int main(){
	int i;
	float s[5], s2[5], gasto=0, gasto2=0;
	char nome[5][100];
	
	for(i=0;i<5;i++){
		printf("DIGITE O NOME DO FUNCIONARIO %d:\n", i);
		fflush(stdin);
		fgets(nome[i], 100, stdin);
		printf("DIGITE O SALARIO DO FUNCIONARIO %d:\n", i);
		scanf("%f", &s[i]);
		gasto+=s[i];
		s2[i]=s[i]*1.08;	
	}
	for(i=0;i<5;i++){
		printf("NOME:%s-->SALARIO ANTIGO:%f\tATUAL:%f\n", nome[i], s[i], s2[i]);
	}
	system("pause");
}
	
	