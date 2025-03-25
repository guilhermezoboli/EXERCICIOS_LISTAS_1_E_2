#include <stdio.h>

int main() {
    int matriz[5][10];
    int resultado[5][3];
    int i, j;

    // Leitura da matriz 5x10
    printf("Digite os elementos da matriz 5x10:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 10; j++) {
            printf("Matriz[%d][%d] = ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Processamento de cada linha
    for (i = 0; i < 5; i++) {
        // Inicializa maior, menor e soma com o primeiro elemento da linha
        resultado[i][0] = matriz[i][0]; // maior
        resultado[i][1] = matriz[i][0]; // menor
        resultado[i][2] = matriz[i][0]; // soma

        // Processa os demais elementos da linha
        for (j = 1; j < 10; j++) {
            // Verifica maior
            if (matriz[i][j] > resultado[i][0]) {
                resultado[i][0] = matriz[i][j];
            }
            // Verifica menor
            if (matriz[i][j] < resultado[i][1]) {
                resultado[i][1] = matriz[i][j];
            }
            // Acumula soma
            resultado[i][2] += matriz[i][j];
        }
    }

    // Impressão da matriz resultado
    printf("\nMatriz resultado (maior, menor, soma):\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", resultado[i][j]);
        }
        printf("\n");
    }

    return 0;
}