#include <stdio.h>
#include <stdlib.h>

int main() {
    int horas_extras, horas_falta;
    float h, gratificacao;
    
    printf("DIGITE O NUMERO DE HORAS EXTRAS: ");
    scanf("%d", &horas_extras);
    
    printf("DIGITE O NUMERO DE HORAS FALTADAS: ");
    scanf("%d", &horas_falta);

    h = horas_extras - (2.0 / 3.0) * horas_falta;

    if (h > 2400) {
        gratificacao = 500.00;
    } else if (h >= 1800) {
        gratificacao = 400.00;
    } else if (h >= 1200) {
        gratificacao = 300.00;
    } else if (h >= 600) {
        gratificacao = 200.00;
    } else {
        gratificacao = 100.00;
    }

    printf("GRATIFICACAO DE NATAL: R$ %.2f\n", gratificacao);
    
    return 0;
}
