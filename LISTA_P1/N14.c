#include <stdio.h>

int main() {
    float preco, aumento, imposto, novo_preco;
    int categoria;
    char situacao;
    
    printf("DIGITE O PRECO DO PRODUTO: ");
    scanf("%f", &preco);
    
    printf("DIGITE A CATEGORIA (1-LIMPEZA, 2-ALIMENTACAO, 3-VESTUARIO): ");
    scanf("%d", &categoria);
    
    printf("DIGITE A SITUACAO (R-REFRIGERACAO, N-NAO REFRIGERACAO): ");
    scanf(" %c", &situacao);

    if (preco <= 25.00) {
        if (categoria == 1) aumento = preco * 0.05;
        else if (categoria == 2) aumento = preco * 0.08;
        else aumento = preco * 0.10;
    } else {
        if (categoria == 1) aumento = preco * 0.12;
        else if (categoria == 2) aumento = preco * 0.15;
        else aumento = preco * 0.18;
    }

    if (categoria == 2 && situacao == 'R') imposto = preco * 0.05;
    else imposto = preco * 0.08;

    novo_preco = preco + aumento - imposto;

    printf("NOVO PRECO: R$ %.2f\n", novo_preco);
    if (novo_preco <= 50.00) {
        printf("CLASSIFICACAO: BARATO\n");
    } else if (novo_preco <= 120.00) {
        printf("CLASSIFICACAO: NORMAL\n");
    } else {
        printf("CLASSIFICACAO: CARO\n");
    }
    
    return 0;
}
