#include <stdio.h>
#include <stdlib.h>

int main() {
    int idade;
    char s;
    char nome[30];

    printf("DIGITE O PRIMEIRO NOME:\n");
    scanf(" %[^\n]", nome);

    printf("DIGITE H PARA HOMEM E M PARA MULHER:\n");
    scanf(" %c", &s);

    printf("DIGITE A IDADE:\n");
    scanf("%d", &idade);

    if (idade <= 18) {
        printf("MENOR\n");
    } else if ((s == 'M' || s == 'm') && idade > 60) {
        printf("APOSENTADA\n");
    } else if ((s == 'H' || s == 'h') && idade > 65) {
        printf("APOSENTADO\n");
    }

    return 0;
}
