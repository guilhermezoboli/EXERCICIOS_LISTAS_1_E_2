#include <stdio.h>
#include <stdlib.h>

int main(){
	int cod;
	float valor, desconto, novovalor;
	
	printf("DIGITE O CODIGO DO PRODUTO:\n");
	scanf("%d", &cod);
	printf("DIGITE O PRECO DO PRODUTO:\n");
	scanf("%f", &valor);
	
	if(valor>30 && valor<=100)
		desconto=valor*0.1;
	else if(valor>100)
		desconto=valor*0.15;
	else
		desconto=0;
		
	novovalor= valor-desconto;
	
	printf("O NOVO PRECO DO PRODUTO DE CODIGO %d E:\n%f\n",cod, novovalor);
	
}