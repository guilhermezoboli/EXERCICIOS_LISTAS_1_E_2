#include <stdio.h>
#include <stdlib.h>

void metade(float *n){
    *n = *n/2;
}
int main(){
    float n;

    printf("DIGITE UM VALOR:\n");
    scanf("%f", &n);

    printf("A METADE DE %.2f E:\n", n);
    divide(&n);
    printf("%.2f\n", n);

}