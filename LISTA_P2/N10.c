#include <stdio.h>
#include <stdlib.h>

void recebervetor(float *vet){
    printf("DIGITE 5 NUMEROS:\n");
    for(int i=0; i<5; i++){
        scanf("%f", &vet[i]);
    }
}

void metade(float *vet){
    for(int i =0; i<5; i++){
        vet[i] = vet[i]/2;
    }
    
}

int main(){
    float vet[5];

    recebervetor(vet);
    metade(vet);

    printf("\nMETADE DOS NUMEROS DO VETOR:\n");
    for(int i = 0; i<5; i++){
        printf("%.2f\n", vet[i]);
    }
    
}