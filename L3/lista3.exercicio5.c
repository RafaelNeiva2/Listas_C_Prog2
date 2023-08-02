#include <stdio.h>
#include <stdlib.h>

float max_vet(int n, float *vet);

int main() {
    int tam_vetor, i;
    float *vetor;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam_vetor);
    vetor = (float *) malloc(tam_vetor * sizeof(float)); 
    if (vetor == NULL) {
        printf("Memoria insuficiente.\n");
        exit(1);
    }
    float valor_vetor;
    for (i = 0; i < tam_vetor; i++) {
        if (i == 0) {
            printf("Digite o primeiro valor do vetor: ");
        }
        else {
            printf("Digite o valor seguinte do vetor: ");
        }
        scanf(" %f", &valor_vetor);
        vetor[i] = valor_vetor; 
    }
    printf("%g", max_vet(tam_vetor, vetor));
    free(vetor);
    return 0;
}

float max_vet(int n, float *vet) {
    float maior = vet[0];
    int i;
    for (i = 1; i < n; i++)
    {
       if (maior < vet[i]) {  
           maior = vet[i];
       }
    }
    return maior;
}