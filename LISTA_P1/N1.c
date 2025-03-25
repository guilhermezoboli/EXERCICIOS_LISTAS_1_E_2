#include <stdio.h>
#include <stdlib.h>

int main(){
	float n1, n2, media;
	
	printf("DIGITE A NOTA 1:\n");
	scanf("%f", &n1);
	printf("DIGITE A NOTA 2:\n");
	scanf("%f", &n2);
	
	media= (n1+n2)/2;
	
	printf("NOTA 1:%.2f\nNOTA 2:%.2f\n", n1, n2);
	printf("MEDIA:%.2f\n", media);
	if(media>=7)
		printf("APROVADO\n");
	else if(media>=4 && media<7)
		printf("EXAME\n");
	else 
		printf("REPROVADO\n");

	system("pause");
}