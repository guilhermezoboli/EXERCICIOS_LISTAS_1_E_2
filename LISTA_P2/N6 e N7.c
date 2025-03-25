#include <stdio.h>
#include <stdlib.h>

float dobro(float *n){
    *n = *n * 2;
    return 0;
}

float dobrar3numeros(float *a, float *b, float *c){
    dobro(a);
    dobro(b);
    dobro(c);
    return 0;
}

int main(){
    float a, b, c;

    printf("DIGITE TRES NUMEROS:\n");
    scanf("%f %f %f", &a, &b, &c);

    dobrar3numeros(&a, &b, &c);

    printf("O DOBRO:%.2f\n", a);
    printf("O DOBRO:%.2f\n", b);
    printf("O DOBRO:%.2f\n", c);

}