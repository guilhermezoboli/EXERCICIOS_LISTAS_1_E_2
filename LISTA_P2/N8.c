#include <stdio.h>
#include <stdlib.h>

void trocarvalor(int *x, int *y){
    int aux;
    aux = *x;
    *x = *y;
    *y = aux;
}

int main(){
    int x, y;

    printf("DIGITE UM NUMERO PARA ARMAZENAR EM X:\n");
    scanf("%d", &x);
    printf("DIGITE UM NUMERO PARA ARMAZENAR EM Y:\n");
    scanf("%d", &y);

    trocarvalor(&x, &y);

    printf("VALOR NOVO DE X:%d\n", x);
    printf("VALOR NOVO DE Y:%d\n", y);
}