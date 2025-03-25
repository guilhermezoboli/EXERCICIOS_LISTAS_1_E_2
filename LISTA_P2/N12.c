#include <stdio.h>
#include <stdlib.h>
int i;

void receberdadosvetor(int *vet, int tam){
    printf("DIGITE OS %d ELEMENTOS DO VETOR:\n", tam);
    for(i=0; i<tam; i++){
        scanf("%d", &vet[i]);
    }
}
void maiorMenorSoma(int *vet,int *maior,int *menor,int *soma, int tam){
    *soma = 0;
    *maior = vet[0];
    *menor = vet[0];
    for(i = 0; i< tam; i++){
        *soma += vet[i];
        if(vet[i]< *menor){
            *menor = vet[i];
        }
        if(vet[i]> *maior){
            *maior = vet[i];
        }
    }
}

int main(){
    int tam, *vet, maior, menor, soma;

    printf("DIGITE QUANTOS ELEMENTOS DESEJA NO VETOR:\n");
    scanf("%d", &tam);

    vet = (int*) malloc(tam * sizeof(int));

    receberdadosvetor(vet, tam);
    maiorMenorSoma(vet, &maior, &menor, &soma, tam);

    printf("MAIOR ELEMENTO DO VETOR:%d\n", maior);
    printf("MENOR ELEMENTO DO VETOR:%d\n", menor);
    printf("SOMA DOS ELEMENTOS DO VETOR:%d\n", soma);

    free(vet);
}