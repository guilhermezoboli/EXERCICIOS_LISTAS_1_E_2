#include <stdio.h>

#define LINHAS_A 3
#define COLUNAS_A 5
#define LINHAS_B 5
#define COLUNAS_B 3

int main() {
    float matrizA[LINHAS_A][COLUNAS_A];
    float matrizB[LINHAS_B][COLUNAS_B];
    float produto[LINHAS_A][COLUNAS_B];
    int i, j, k;

    printf("Digite os elementos da matriz A (3x5):\n");
    for (i = 0; i < LINHAS_A; i++) {
        for (j = 0; j < COLUNAS_A; j++) {
            printf("A[%d][%d] = ", i + 1, j + 1);
            scanf("%f", &matrizA[i][j]);
        }
    }

    printf("\nDigite os elementos da matriz B (5x3):\n");
    for (i = 0; i < LINHAS_B; i++) {
        for (j = 0; j < COLUNAS_B; j++) {
            printf("B[%d][%d] = ", i + 1, j + 1);
            scanf("%f", &matrizB[i][j]);
        }
    }

    for (i = 0; i < LINHAS_A; i++) {
        for (j = 0; j < COLUNAS_B; j++) {
            produto[i][j] = 0; 
            for (k = 0; k < COLUNAS_A; k++) {
                produto[i][j] += matrizA[i][k] * matrizB[k][j];
            }
        }
    }

    printf("\nMatriz produto (A x B):\n");
    for (i = 0; i < LINHAS_A; i++) {
        for (j = 0; j < COLUNAS_B; j++) {
            printf("%.2f\t", produto[i][j]);
        }
        printf("\n");
    }

    return 0;
}