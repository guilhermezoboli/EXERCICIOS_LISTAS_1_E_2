#include <stdio.h>
#include <stdlib.h>

int main(){
	int sexo;
	float altura, peso;
	
	printf("QUAL SEU SEXO:\n");
	printf("DIGITE:\n1-MULHER\t2-HOMEM\n");
	scanf("%d", &sexo);
	printf("DIGITE SUA ALTURA:\n");
	scanf("%f", &altura);
	
	switch(sexo){
		case 1:
			peso=(62.1*altura)-44.7;
			break;
		case 2:
			peso=(72.7*altura)-58;
			break;
		default:
			printf("numero invalido\n");
	}
	printf("PESO IDEIAL PARA A ALTURA %.2f:\n%.2f\n", altura, peso);	
}