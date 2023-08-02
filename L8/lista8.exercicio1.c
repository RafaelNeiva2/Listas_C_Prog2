#include <stdio.h>

#define TAMANHO 3

int checkEqualSums(int matrix[TAMANHO][TAMANHO]) {
    int sum = 0;
    int rowSum = 0;
    int i, j;

    for (j = 0; j < TAMANHO; j++) {
        sum += matrix[0][j];
    }

    for (i = 1; i < TAMANHO; i++) {
        rowSum = 0;
        for (j = 0; j < TAMANHO; j++) {
            rowSum += matrix[i][j];
        }
        if (rowSum != sum) {
            return 0; 
        }
    }
    return 1; 
}

int main() {
    int matrix[TAMANHO][TAMANHO];
    int i, j;

    printf("Digite os elementos da matriz %dx%d:\n", TAMANHO, TAMANHO);
    for (i = 0; i < TAMANHO; i++) {
        for (j = 0; j < TAMANHO; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int result = checkEqualSums(matrix);

    if (result) {
        printf("Somas iguais\n");
    } else {
        printf("Somas diferentes\n");
    }

    return 0;
}