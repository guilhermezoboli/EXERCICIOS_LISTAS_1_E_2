#include <stdio.h>

int main() {
    float peso, altura, imc;
      
    printf("DIGITE SEU PESO (KG): ");
    scanf("%f", &peso);
    
    printf("DIGITE SUA ALTURA (M): ");
    scanf("%f", &altura);
    
    imc = peso / (altura * altura);
    
    printf("SEU IMC: %.2f\n", imc);
    
    if (imc < 20.0) {
        printf("Voce esta abaixo do peso ideal.\n");
    } else if (imc < 25.0) {
        printf("Parabens! Voce esta em seu peso normal!\n");
    } else if (imc < 30.0) {
        printf("Voce esta acima de seu peso (sobrepeso).\n");
    } else if (imc < 35.0) {
        printf("Obesidade moderada (grau I).\n");
    } else if (imc < 40.0) {
        printf("Obesidade severa (grau II).\n");
    } else {
        printf("Obesidade morbida (grau III).\n");
    }
    
    return 0;
}
