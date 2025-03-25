#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, j;
	float n, vet[5], fat[5], inv[5];
	
	printf("DIGITE 5 VETORES PARA ARMAZENAR:");
	for(i=0;i<5;i++){
		scanf("%f", &vet[i]);
		inv[i]=1/vet[i];
		fat[i]=1;
	}
	if (vet[i] >= 0 && (int)vet[i] == vet[i]) {
            for (j = 1; j <= (int)vet[i]; j++) {
                fat[i] *= j;
            }
        } 
	else {
            fat[i] = 0; 
        }
    }
	printf("VETOR LIDO:\n");
	for(i=0;i<5;i++){
		printf("%.2f\n", vet[i]);
	}
	printf("VETOR INVERSO:\n");
	for(i=0;i<5;i++){
		printf("%.2f\n", inv[i]);
	}
	printf("VETOR FATORIAL:\n");
	for(i=0;i<5;i++){
		printf("%.2f\n", fat[i]);
	}
}