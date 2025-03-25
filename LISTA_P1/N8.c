#include <stdio.h>
#include <stdlib.h>

int main(){
	float p1, np1;
	
	printf("DIGITE O PRECO DO PRODUTO:\n");
	scanf("%f", &p1);
	
	if(p1<=50){
		np1=p1*1.05;
	}
	else if(p1>50 && p1<=100){
		np1=p1*1.1;
	}
	else{
		np1=p1*1.15;
	}
	
	printf("O NOVO PRECO E DE:\n%.2f\n", np1);
	printf("CLASSIFICACAO DO PRODUTO\n");
	if(np1<=80){
		printf("BARATO\n");
	}
	else if(np1>80 && np1<=120){
		printf("NORMAL\n");
	}
	else if(np1>120 && np1<=200){
		printf("CARO\n");
	}
	else{
		printf("MUITO CARO\n");
	}
	system("pause");
}