#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char nome[50];
    float media;
}ALUNO;

//essa função estava na questão
void ordena(ALUNO turma[], int tam) {
    int i, foraOrdem, jaOrdenados = 0;
    ALUNO temp;
    
    do {
        foraOrdem = 0;
        for (i = 0; i < tam - 1 - jaOrdenados; i++) {
            if (turma[i].media > turma[i + 1].media) {
                temp = turma[i];
                turma[i] = turma[i + 1];
                turma[i + 1] = temp;
                foraOrdem = 1;
            }
        }
        
        jaOrdenados++;
    } while (foraOrdem);
}


int main(){
    ALUNO turma[4] = {
        {"Rafael",9.5},
        {"Julia", 10},
        {"Daniel", 8.3},
        {"Victor",6.9},
    };
    int i;

    printf("Fora de ordem:\n");
    for(i = 0; i<4;i++){
        printf("%s - %.2f\n",turma[i].nome , turma[i].media);
    }
ordena(turma, 4);

    printf("Na ordem crescente:\n");
    for(i=0;i<4;i++){
        printf("%s - %.2f\n",turma[i].nome , turma[i].media);
    }

}