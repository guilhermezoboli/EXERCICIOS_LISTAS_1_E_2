#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n){
    if(n>=3){
        return fibonacci(n-1)+fibonacci(n-2);
    }
    if(n>0 && n<3){
        return 1;
    }
    return 0;
}

int main(){
    int n;
    printf("DIGITE UM NUMERO:\n");
    scanf("%d", &n);

    printf("O NUMERO %d DA SEQUENCIA DE FIBONACCI E:%d", n, fibonacci(n));
}