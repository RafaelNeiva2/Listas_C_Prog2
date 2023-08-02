#include <conio.h>
#include <stdio.h>

void main(){
    float vet[5] = {1.1,2.2,3.3,4.4,5.5};
    float *f;
    int i;
    f = vet;
    printf("contador/valor/valor/endereco/endereco");
    for(i = 0 ; i <= 4 ; i++){
        printf("\ni = %d",i);
        printf(" vet[%d] = %.1f",i, vet[i]);
        printf(" *(f + %d) = %.1f",i, *(f+i));
        printf(" &vet[%d] = %X",i, &vet[i]);
        printf(" (f + %d) = %X",i, f+i);
    }
    printf("\n");
    printf("\nIsso ocorre porque se conta os valores a partir de 0, assim existindo casas de 0 a 4 em um vetor de 5 valores.\n");
    printf("Assim se mostra o contador de 0 a 4, abrangendo todos os valores, o valor correspondente a cada valor do contador.\n");
    printf("O mesmo ocorre quando se faz *(f + i), pois f eh 0 e f + 1 move do contador 0 para i posicoes a frente.");
}