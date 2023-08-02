#include <stdio.h>
#include <stdlib.h>

float media(int n, float *v);

int main() {

    int tamanho;
    float *vetor;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);
    vetor = (float *) malloc(tamanho * sizeof(float)); 
    if (vetor == NULL) {
        printf("Memoria insuficiente.\n");
        exit(1);
    }
    int i;
    float valor_vetor;
    for (i = 0; i < tamanho; i++) {
        if (i == 0) {
            printf("Digite o primeiro valor do vetor: ");
        }
        else {
            printf("Digite o valor seguinte do vetor: ");
        }
        scanf(" %f", &valor_vetor);
        vetor[i] = valor_vetor; 
    }
    printf("Media = %g", media(tamanho, vetor));
    free(vetor);
    return 0;
}

float media(int n, float *v) {
    int i;
    float numerador, resultado;
    for (i = 0; i < n; i++) {  
        numerador += v[i]; 
    }
    resultado = numerador / n;  
    return resultado;
}