#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, R, N;
	printf("digite n:\n");
	scanf("%d", &N);
	R = 1;
	
	/*for (i = 2; i < N; i++){
		R = R * 2;
		printf("%d\n",R);
	}
	
	i=2;
	while(i<N){
		R = R * 2;
		printf("%d\n",R);
		i++;
	}*/
	i=2;
	do{
		R = R * 2;
		printf("%d\n",R);
		i++;
	}while(i<N);
}

