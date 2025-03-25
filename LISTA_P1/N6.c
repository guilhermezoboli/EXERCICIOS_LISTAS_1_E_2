#include <stdio.h>
#include <stdlib.h>

int main(){
	float custo, preco;
	
	printf("INSIRA O CUSTO DE FABRICACAO DO CARRO:\n");
	scanf("%f", &custo);
	
	if(custo<12000)
		preco=custo*1.05;
	else if(custo>=12000 && custo<=25000)
		preco=custo*1.25;
	else
		preco=custo*1.35;
		
	printf("CUSTO DO CARRO AO CONSUMIDOR:\n%.2f\n", preco);

	system("pause");
}