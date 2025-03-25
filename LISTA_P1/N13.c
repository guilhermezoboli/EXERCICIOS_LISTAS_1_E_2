#include <stdio.h>
#include <stdlib.h>

int main(){
	int cod;
	float preco;
	
	printf("QUAL O PRECO:\n");
	scanf("%f", &preco);
	printf("DIGITE O CODIGO DE ORIGEM:\n");
	scanf("%d", &cod);
	
	printf("PRECO:\n%f\n", preco);
	printf("PROCEDENCIA:\n");	
	if(cod==1)
		printf("SUL");
	else if(cod==2)
		printf("NORTE");
	else if(cod==3)
		printf("LESTE");
	else if(cod==4)
		printf("OESTE");
	else if(cod==5 || cod==6)
		printf("NORDESTE");
	else if(cod==7 || cod==8 ||cod==9)
		printf("SUDESTE");
	else if(cod >=10 && cod<=20)
		printf("CENTRO OESTE");
	else if(cod >=21 && cod<=30)
		printf("NORDESTE");
	else
		printf("ORIGEM NAO RECONHECIDA\n");
}