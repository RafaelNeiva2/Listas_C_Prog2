#include <stdio.h>
#include <stdlib.h>

float *acima_da_media(int n, float *vet, int *tam);

int main()
{
    int tamanhoOrig, novoTam;
    float *vetorOrig;
    printf("Digite quantos elementos o vetor vai ter: ");
    scanf("%d", &tamanhoOrig);
    vetorOrig = (float *) malloc(tamanhoOrig * sizeof(float));
    if (vetorOrig==NULL) {
        printf("Memoria insuficiente.\n");
        return 1;
    }
    int i;
    for(i=0; i < tamanhoOrig; i++){
        printf("Digite o %d elemento do vetor: ", i+1);
        scanf("%f", &vetorOrig[i]);
    }
    acima_da_media(tamanhoOrig, vetorOrig, &novoTam);
    free(vetorOrig);

    return 0;
}

float *acima_da_media(int n, float *vet, int *tam){
    int tamanho = 0;

    int i;
    float media = 0;
    for(i=0; i < n; i++){  
        media = media + vet[i];
    }
    media = media / n;

    int c;
    for(c=0; c < n; c++){ 
        if (vet[c] > media) {
            tamanho = tamanho + 1;
        }    
    }

    float *vetresposta; 
    vetresposta = (float *) malloc(tamanho * sizeof(float) );
     if (vetresposta==NULL) { 
        printf("Memoria insuficiente.\n");
        exit(1);
    }

    int x, t = 0;
    for(x=0; x < n; x++){ 
        if (vet[x] > media) {
            vetresposta[t] = vet[x];
            t++;
        }  
    }

    int p;
    for(p=0; p < tamanho; p++){
        printf("%g ", vetresposta[p]);
    }

}