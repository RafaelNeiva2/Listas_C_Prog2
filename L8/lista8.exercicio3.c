#include <stdio.h>
#define N 3 

void criarMatriz(int matriz[][N]){
    int i,j;
    for( i = 0;i < N;i++){
        for( j = 0;j< N;j++){
            printf("Digite valores para preencher a matriz:");
            scanf("%d",&matriz[i][j]);
        }
    }
}

int verificarSimetria(int matriz[N][N]) {
    int i, j;

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            if (matriz[i][j] != matriz[j][i]) {
                return 0; 
            }
        }
    }

    return 1;
}

void imprimirMatriz(int matriz[N][N]) {
    int i, j;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}


int main() {
    int matriz[N][N];
    criarMatriz(matriz);

    printf("Matriz:\n");
    imprimirMatriz(matriz);

    if (verificarSimetria(matriz)) {
        printf("A matriz digitada e simetrica a sua transposta.\n");
    } else {
        printf("A matriz digitada nao e simetrica a sua transposta.\n");
    }

    return 0;
}
