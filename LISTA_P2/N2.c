#include <stdio.h>
#include <stdlib.h>

typedef struct carros{
    char modelo[20];
    char marca[20];
    char cor[15];
    int ano;
    float preco;
}Carros;

int dados(Carros c1[]){
    for(int i = 0; i<3; i++){
        printf("DIGITE O MODELO DO CARRO:\n");
        scanf(" %[^\n]", c1[i].modelo);
        printf("DIGITE A MARCA:\n");
        scanf(" %[^\n]", c1[i].marca);
        printf("DIGITE A COR DO VEICULO:\n");
        scanf(" %[^\n]", c1[i].cor);
        printf("DIGITE O ANO DE FABRICACAO DO VEÍCULO:\n");
        scanf("%d", &c1[i].ano);
        printf("DIGITE O PRECO DO VEICULO:\n");
        scanf("%f", &c1[i].preco);
    }
    return 0;
}

int exibir(Carros c1[]){
    for(int i=0; i<3; i++){
        if(c1[i].preco <= 80000){
            printf("\nCARRO %d:\n", i+1);
            printf("MODELO: %s\n" ,c1[i].modelo);
            printf("MARCA: %s\n", c1[i].marca);
            printf("COR: %s\n", c1[i].cor);
            printf("ANO: %d\n", c1[i].ano);
            printf("PRECO: %.2f\n", c1[i].preco);
        }
    }
        return 0;
}

int main(){
    Carros c1[3];

    dados(c1);
    printf("\n\n<<<< LOJA CARROS 10 >>>>\n");
    printf("LISTA DE CARROS ATE 80000\n");
    exibir(c1);
}