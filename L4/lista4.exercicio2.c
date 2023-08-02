#include <stdio.h>

void preenche_vetor(char nome, int *vetor, int tamanho_vetor);

int main() {

    int r[5], s[10], x[5], i, t = 0, indices_x = 0;
    preenche_vetor('r', r, 5);
    preenche_vetor('s', s, 10);
    for (i = 0; i < 5; i++) {
        for (t = 0; t < 10; t++) {  
            if (t <= indices_x && indices_x > 0) {  
                if (r[i] == x[t]) {  
                    break;
                }
            }
            if (r[i] == s[t]) {
                x[indices_x] = r[i];
                indices_x += 1; 
                break;
            }
        }
    }
    i = 0;
    for (i = 0; i < indices_x; i++)
    {
        printf("%d ", x[i]);
    }
    
    return 0;
}


void preenche_vetor(char nome, int *vetor, int tamanho_vetor) {
    int i, t;
    for (i = 0; i < tamanho_vetor; i++) {
            if (i == 0) {
                printf("Digite o primeiro valor do vetor %c: ", nome);
            }
            else {
                printf("Digite mais um valor para o vetor %c (faltam %d): ", nome, tamanho_vetor - i);
            }
            scanf("%d", &vetor[i]);
        }
}