#include <stdio.h>
#include <stdlib.h>

int main(){
	int num, cod;
	float kw, c1=0, c2=0, c3=0,n=0, soma, media, preco;
	
	do{
		printf("QUAL O NUMERO DO CONSUMIDOR:\n");
		scanf("%d", &num);
		if(num==0){
			break;
		}
		printf("QUANTOS KW FORAM CONSUMIDOS:\n");
		scanf("%f", &kw);
		printf("QUAL O TIPO DE CONSUMIDOR\n");
		printf("1-RESIDENCIAL\t2-COMERCIAL\t3-INDUSTRIAL\n");
		scanf("%d", &cod);
		
		switch(cod){
			case 1:
				preco=kw*0.3;
				c1+=kw;
				printf("O CONSUMIDOR %d DEVE PAGAR:%f\n", num, preco);
				n++;
				break;
			case 2:
				preco=kw*0.5;
				c2+=kw;
				printf("O CONSUMIDOR %d DEVE PAGAR:%f\n", num, preco);
				n++;
				break;
			case 3:
				preco=kw*0.7;
				c3+=kw;
				printf("O CONSUMIDOR %d DEVE PAGAR:%f\n", num, preco);
				n++;
				break;
			default:
				printf("CODIGO INVALIDO\n");
		}
	}while(num!=0);
	media=(c1+c2+c3)/n;
	printf("TIPO 1:%f\n", c1);
	printf("TIPO 2:%f\n", c2);
	printf("TIPO 3:%f\n", c3);
	printf("MEDIA:%f\n", media);
	printf("%f", n);
}