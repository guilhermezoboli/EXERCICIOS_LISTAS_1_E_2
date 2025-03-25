#include <stdio.h>
#include <stdlib.h>

int main(){
	float n1, n2, maior, menor, operacao;
	int op;
	
	printf("DIGITE N1:\n");
	scanf("%f", &n1);
	printf("DIGITE N2:\n");
	scanf("%f", &n2);
	
	printf("QUAL OPERACAO DESEJA REALIZAR:\n");
	printf("1-MEDIA\n");
	printf("2-DIFERENCA DO MAIOR PELO MENOR\n");
	printf("3-PRODUTO\n");
	printf("4-DIVISAO DO PRIMEIRO PELO SEGUNDO\n");
	scanf("%d", &op);
	
	if(n1>n2){
		maior=n1;
		menor=n2;
	}
	else{
		maior=n2;
		menor=n1;
	}
		
	switch(op){
		case 1:
			operacao=(n1+n2)/2;
			break;
		case 2:
			operacao=maior-menor;
			break;
		case 3: 
			operacao=n1*n2;
			break;
		case 4:
			operacao=n1/n2;
			break;
		default:
			printf("CODIGO INVALIDO");
	}
	
	printf("RESULTADO DA OPERACAO:\n%.2f", operacao);
}