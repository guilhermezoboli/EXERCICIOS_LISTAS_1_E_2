#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b, c;
    int aux;

    printf("DIGITE TRES NUMEROS:\n");
    scanf("%d %d %d", &a, &b, &c);

    if(a<b){
        aux = a;
        a = b;
        b = aux;
    }
    if(a<c){
        aux=a;
        a = c;
        c= aux;
    }
    if(b<c){
        aux=b;
        b = c;
        c= aux;
    }

    printf("%d %d %d\n", a, b, c);

    return 0;
}