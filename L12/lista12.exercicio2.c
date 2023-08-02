#include <stdio.h>
#include <stdlib.h>

int somaImparesRecursiva(int *vet,int tamanho){
    int impares = 0;
    int var;
    if(tamanho == 0){
        return 0;
    }
    else{
        if(vet[tamanho - 1] % 2 != 0){
            impares = impares + vet[tamanho - 1];
        }
        var = impares + somaImparesRecursiva(vet,tamanho-1);
        return var;
    }

}

int main(){
    int tamanho;
    int *vet;

    printf("Digite o tamanho do vetor:");
    scanf("%d",&tamanho);

    vet = (int*) malloc(tamanho * sizeof(int));
    if(vet == NULL){
        printf("Memoria insuficiente");
        exit(1);
    }

    for(int i=0; i < tamanho;i++){
        printf("Digite numeros para o vetor:");
        scanf("%d", &vet[i]);
    }
    
    int resp = somaImparesRecursiva(vet,tamanho);
    printf("Soma dos numeros impares é de : %d", resp);

    free(vet);
    return 0;

}