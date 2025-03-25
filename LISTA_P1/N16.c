#include <stdio.h>
#include <stdlib.h>

int main(){

    float a, b, c;

    printf("DIGITE TRES VALORES DE LADOS DE UM TRIANGULO:\n");
    scanf("%f %f %f", &a, &b, &c);

    if(a<(b+c)&&b<(a+c)&&c<(a+b)){
        printf("OS VALORES PODEM FORMAR UM TRIANGULO!\n");
    }else{
        printf("OS VALORES NAO PODEM FORMAR UM TRIANGULO\n");
    }
}