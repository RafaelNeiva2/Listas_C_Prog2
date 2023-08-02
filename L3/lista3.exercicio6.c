#include <stdio.h>
#include <stdlib.h>

int maiores(int n, int *vet, int x);

int main() {

    int *vetor, tam_vetor, x;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam_vetor);
    printf("Digite o valor de x: ");
    scanf("%d", &x);
    vetor = (int *) malloc(tam_vetor * sizeof(int));
    if (vetor == NULL) {
        printf("Memoria insuficiente.\n");
        exit(1);
    }
    int valor_vetor, i;
    for (i = 0; i < tam_vetor; i++) {
        if (i == 0) {
            printf("Digite o primeiro valor do vetor: ");
        }
        else {
            printf("Digite o valor seguinte do vetor: ");
        }
        scanf(" %d", &valor_vetor);
        vetor[i] = valor_vetor; 
    }
    printf("Existem %d valores maiores que x no vetor.\n", maiores(tam_vetor, vetor, x));
    free(vetor);
    return 0;
}

int maiores(int n, int *vet, int x) {
    int qtd_maiores = 0, i;
    for (i = 0; i < n; i++) { 
        if (vet[i] > x) { 
            ++qtd_maiores;
        }
    }

    return qtd_maiores;    
}