#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float vetor01[20], vetor02[20] ,vetor03[20];
    char vetorchar[20];

    for(int i = 0; i < 20; i++) {
        printf("Digite um numero: ");
        scanf("%f", &vetor01[i]);

        printf("Digite uma operacao: ");
        scanf(" %c", &vetorchar[i]);

        printf("Digite outro numero: ");
        scanf("%f", &vetor02[i]);
    }

    for(int j = 0; j < 20; j++) {
        if(vetorchar[j] == '+') {
            vetor03[j] = (vetor01[j] + vetor02[j]);
        } else if(vetorchar[j] == '-') {
            vetor03[j] = (vetor01[j] - vetor02[j]);
        } else if(vetorchar[j] == '*') {
            vetor03[j] = (vetor01[j] * vetor02[j]);
        } else if(vetorchar[j] == '/') {
            vetor03[j] = (vetor01[j] / vetor02[j]);
        } else {
            printf("Oprecao errada!");
        }
    }

    for(int h = 0; h < 20; h++) {
        printf("(%.2f %c %.2f = %.3f)", vetor01[h], vetorchar[h], vetor02[h], vetor03[h]);
    }
}