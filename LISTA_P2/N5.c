#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float cubo(float num, int pot){
    return pow(num,pot);
}
int main(){
    int pot;
    float num;

    printf("<<<< CALCULADORA DE POTENCIA >>>>\n");
    printf("DIGITE UM NUMERO:\n");
    scanf("%f", &num);
    printf("DIGITE A QUAL POTENCIA DESEJA ELEVAR O NUMERO:\n");
    scanf("%d", &pot);

    printf("O NUMERO %.2f, ELEVADO A %d, E: %.2f", num, pot, cubo(num, pot));
}