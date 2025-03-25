#include <stdio.h>
#include <stdlib.h>

int main(){
	int tipo;
	float tempo, valor, novovalor;
	
	printf("QUAL TIPO DE INVESTIMENTO DESEJA FAZER:\n");
	printf("1- POUPANCA\t2-FUNDOS DE RENDA FIXA\n");
	scanf("%d", &tipo);
	printf("QUANTOS MESES SERA SEU INVESTIMENTO:\n");
	scanf("%f", &tempo);
	printf("QUAL O VALOR DO INVESTIMENTO:\n");
	scanf("%f", &valor);
	
	
	switch(tipo){
		case 1:
			novovalor= (valor*0.005*tempo)+valor;
			break;
		case 2:
			novovalor= (valor*0.04*tempo)+valor;
		default:
			printf("TIPO DE INVESTIMENTO INVALIDO\n");	
	}
	printf("NOVO SALDO:\n%.2f\n", novovalor);
}