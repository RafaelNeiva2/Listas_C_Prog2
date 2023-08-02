#include <stdio.h>

void printMatriz(int matrizResult[][3]){
    for(int l = 0 ; l < 3; l++){
        for(int c = 0; c < 3; c++){
            printf("\t%d", matrizResult[l][c]);
        }
        printf("\n");
    }

}

void somaMatrizes(int mat1[][3], int mat2[][3], int numLinhas, int numColunas, int result[][3]){
    for(int l = 0; l < numLinhas; l++){
        for(int c = 0; c < numColunas; c++){
            result[l][c] = mat1[l][c] + mat2[l][c];
        }
        printf("\n");
    }
}

int somaDiagonal(int numLinhas, int result[][3]){
    int sum = 0; 
    for(int l = 0; l < numLinhas; l++){
            sum += result[l][l];
    }
    return sum;
}
int main(){
    int matriz1[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int matriz2[3][3] = {{3,2,1},{6,5,4},{9,8,7}};
    int matrizResult[3][3];
    somaMatrizes(matriz1, matriz2, 3, 3, matrizResult);
    printMatriz(matrizResult);
    printf("\n");
    printf("A soma da matriz e: %d",somaDiagonal(3, matriz1));
    
    
    return 0;
}