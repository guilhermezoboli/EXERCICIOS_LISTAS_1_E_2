#include <stdio.h>

#define LINHAS 5
#define COLUNAS 2

int main() {
    int matriz[LINHAS][COLUNAS];
    int valores[LINHAS * COLUNAS], contagens[LINHAS * COLUNAS];
    int total = 0;

    printf("DIGITE OS 10 ELEMENTOS DA MATRIZ:\n");
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            int numero = matriz[i][j], achou = 0;
            for (int k = 0; k < total; k++) {
                if (valores[k] == numero) {
                    contagens[k]++;
                    achou = 1;
                    break;
                }
            }
            if (!achou) {
                valores[total] = numero;
                contagens[total] = 1;
                total++;
            }
        }
    }

    for (int i = 0; i < total; i++) {
        if (contagens[i] > 1) {
            printf("O numero %d aparece %d vezes\n", valores[i], contagens[i]);
        }
    }

    return 0;
}