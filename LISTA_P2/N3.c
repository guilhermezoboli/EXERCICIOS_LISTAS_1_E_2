#include <stdio.h>
#include <stdlib.h>
#define TAM 2
int i;

typedef struct livro{
    int cod;
    char obra[50];
    char autor[50];
    char editora[30];
    int doada;
    int paginas;
    char palavraschaves[50];
    char assunto[100];
}Livro;

void receberdados(Livro *l){
    for(i = 0; i<TAM; i++){
        printf("DIGITE O CODIGO DA OBRA:\n");
        scanf("%d", &l[i].cod);

        printf("DIGITE O NOME DA OBRA:\n");
        scanf(" %[^\n]", l[i].obra);

        printf("DIGITE O NOME DO AUTOR:\n");
        scanf(" %[^\n]", l[i].autor);

        printf("DIGITE O NOME DA EDITORA:\n");
        scanf(" %[^\n]", l[i].editora);

        printf("O LIVRO FOI DOADO OU COMPRADO?\n");
        printf("DIGITE 1 PARA COMPRADO, E 2 PARA DOADO\n");
        scanf("%d", &l[i].doada);

        printf("DIGITE O NUMERO DE PAGINAS:\n");
        scanf("%d", &l[i].paginas);

        printf("DIGITE UMA PALAVRA CHAVE:\n");
        scanf(" %[^\n]", l[i].palavraschaves);

        printf("DIGITE O ASSUNTO DO LIVRO:\n");
        scanf(" %[^\n]", l[i].assunto);
    }
}

int algoritmobuscacod(Livro vet[], int cod, int *posicao){
    for(i=0; i<TAM; i++){
        if(cod == vet[i].cod){
            *posicao = i;
            return 1;
        }
    }
    return -1;
}
int main(){
    Livro l[TAM];
    int cod, posicao, verifica;

    receberdados(l);
    printf("DIGITE O CODIGO DO LIVRO QUE DESEJA ACHAR:\n");
    scanf("%d", &cod);
    verifica = algoritmobuscacod(l, cod, &posicao);
    
    switch (verifica)
    {
    case 1:
        printf("O CODIGO DO LIVRO FOI ENCONTRADO!!\n");
        printf("ELE ESTA NA POSICAO: %d\n", posicao);
        printf("NOME DO LIVRO: %s, AUTOR: %s\n", l[posicao].obra, l[posicao].autor);
        break;

    default:
        printf("O CODIGO DO LIVRO NÃO FOI ENCONTRADO!!\n");
        break;
    }
}