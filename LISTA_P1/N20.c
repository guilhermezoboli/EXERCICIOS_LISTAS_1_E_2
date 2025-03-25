#include <stdio.h>

int main() {
    char cpf[15]; 
    int horas;
    float salario, excesso = 0;

    printf("DIGITE O CPF DO OPERARIO:");
    scanf("%s", cpf);
    
    printf("DIGITE O NUMERO DE HORAS TRABALHADAS:");
    scanf("%d", &horas);
    
    if (horas > 50) {
        excesso = (horas - 50) * 20.0;
        salario = 50 * 10.0 + excesso;
    } else {
        salario = horas * 10.0;
        excesso = 0;
    }
    
    printf("CPF: %s\n", cpf);
    printf("SALARIO TOTAL: R$ %.2f\n", salario);
    printf("SALARIO EXCEDENTE: R$ %.2f\n", excesso);
    
    return 0;
}
