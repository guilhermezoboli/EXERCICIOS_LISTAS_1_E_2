#include <stdio.h>
#include <stdlib.h>

int main(){
	int op;
	float largura, comprimento, somaarea=0, area;
	char nome[100];
	
		printf("QUAL O NOME DO COMODO:\n");
		fflush(stdin);
		fgets(nome, 100, stdin);
		printf("QUAL A LARGURA DO COMODO:\n");
		scanf("%f", &largura);
		printf("QUAL O COMPRIMENTO DO COMODO:\n");
		scanf("%f", &comprimento);
		area=largura*comprimento;
		printf("O COMODO %s TEM AREA DE:\n%f\n", nome, area);
		somaarea+=area;
	do{
		printf("DIGITE 1 PARA REGISTRAR OUTRO COMODO OU 0 PARA FECHAR O PROGRAMA\n");
		scanf("%d", &op);
		if(op==1){
			printf("QUAL O NOME DO COMODO:\n");
			fflush(stdin);
			fgets(nome, 100, stdin);
			printf("QUAL A LARGURA DO COMODO:\n");
			scanf("%f", &largura);
			printf("QUAL O COMPRIMENTO DO COMODO:\n");
			scanf("%f", &comprimento);
			area=largura*comprimento;
			printf("O COMODO %s TEM AREA DE:\n%f\n", nome, area);
			somaarea+=area;
		}
	}while(op!=0);
	
	printf("AREA TOTAL DA CASA:%f\n", somaarea);
		
}
