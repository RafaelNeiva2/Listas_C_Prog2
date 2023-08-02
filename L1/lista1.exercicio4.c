#include <stdio.h>

float cal_media();

int main() {

    float media;
    media = cal_media();
    printf("A media: %.2lf\n", media);
    if (media >= 6) {
        printf("Aluno aprovado\n");
    }
    else if (media < 4) {
        printf("Aluno reprovado\n");
    }
    else {
        printf("O aluno deverá fazer a VS\n");
    }
    
    return 0;
}

float cal_media() {
    float nota_temp, dividendo = 0, media;
    int invalidade;
    int i;
    for (i = 1; i < 4; i++) {
        do {
            printf("Insira a nota %i: ", i);
            scanf("%f", &nota_temp);
            invalidade = (nota_temp > 10 || nota_temp < 0);
            if (invalidade) {
                printf("Nota invalida, tente novamente:\n");
            }
        } while(invalidade);
        dividendo += nota_temp;
    }
    media = dividendo / 3;
    return media;
}