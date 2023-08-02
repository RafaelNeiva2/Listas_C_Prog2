#include <stdio.h>
#include <stdlib.h>

int listar(int *vetor);
int search(int *vetor);
int troca (int *vetor);

int main(void)
{
    int vetor[7];
    for (int i = 0; i < 7; i++) {
        printf("Numero da posicao %d no vetor: \n",i);
        scanf("%d", &vetor[i]);
    }

    printf("\n");

    listar(vetor);
    search(vetor);
    troca(vetor);
}

int listar(int *vetor) {
    for (int i = 0; i < 7; i++) {
        printf("posicao %d: %d ", i, vetor[i]);
    }
}

int search(int *vetor) {
    int numero;

    printf("Qual numero quer procurar?: \n");
    scanf("%d", &numero);

    int auxiliar=7;
    for (int i = 0; i < 7; i++) {
        if (numero == vetor[i]) {
            printf("Numero na posicao %d do vetor \n",i);
        }
        else if(numero != vetor[i]) {
            auxiliar -= 1;
            if (auxiliar == 0){
            printf("-1 \n");
            }
        }
    }
        
}
int troca (int *vetor){
    int auxiliar[7];
    for (int i = 0; i < 7; i++) {
        if (i == 0){
            auxiliar[i] = vetor[i];
        }
        else {
            auxiliar[i] = vetor[i] + auxiliar[i-1];
        }

    }

    printf("Vetor original: \n");
    for(int j = 0; j < 7; j++) {
        printf("%d ", vetor[j]);
    }

    printf("\n");
    printf("Vetor com os valores trocados: \n");

    for(int h = 0; h < 7; h++){
        printf("%d ", auxiliar[h]);
    }
}