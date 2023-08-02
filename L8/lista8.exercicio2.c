#include <stdio.h>

#define MAX_L 100
#define MAX_C 100

void ler_matriz(int matriz[MAX_L][MAX_C], int linhas, int colunas) {
    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void imprimir_matriz(int matriz[MAX_L][MAX_C], int linhas, int colunas) {
    printf("Matriz resultante:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void soma_matriz(int matriz_a[MAX_L][MAX_C], int matriz_b[MAX_L][MAX_C], int matriz_resul[MAX_L][MAX_C], int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            matriz_resul[i][j] = matriz_a[i][j] + matriz_b[i][j];
        }
    }
}

int main() {
    int linhas, colunas;
    int matriz_a[MAX_L][MAX_C];
    int matriz_b[MAX_L][MAX_C];
    int matriz_resul[MAX_L][MAX_C];

    printf("Digite o número de linhas: ");
    scanf("%d", &linhas);

    printf("Digite o número de colunas: ");
    scanf("%d", &colunas);

    printf("Matriz A:\n");
    ler_matriz(matriz_a, linhas, colunas);

    printf("Matriz B:\n");
    ler_matriz(matriz_b, linhas, colunas);

    soma_matriz(matriz_a, matriz_b, matriz_resul, linhas, colunas);
    imprimir_matriz(matriz_resul, linhas, colunas);

    return 0;
}
