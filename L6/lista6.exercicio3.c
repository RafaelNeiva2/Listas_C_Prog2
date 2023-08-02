#include <stdio.h>
#include <stdlib.h>

int *aprovados(int n, int *mat, float *notas, int *tam);

int main() {
    int tamanho, *matriculas, matricula, i, tam = 0, x = 0;
    float *notas_finais, nota;
    printf("Digite o numero de alunos: ");
    scanf("%d", &tamanho);
    matriculas = (int *) malloc(tamanho * sizeof(int));
    if (matriculas == NULL) {
        printf("Memoria insuficiente.\n");
        exit(1);
    }
    notas_finais = (float *) malloc(tamanho * sizeof(float));
    if (notas_finais == NULL) {
        printf("Memoria insuficiente.\n");
        exit(1);
    }
    for (i = 0; i < tamanho; i++) {  
        printf("Digite a matricula do aluno %d: ", i + 1);
        scanf("%d", &matriculas[i]);
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &notas_finais[i]);
        if (notas_finais[i] >= 5)
        {
            x += 1;
        }
    }
    int *alunos_aprovados = aprovados(tamanho, matriculas, notas_finais, &tam);
    free(matriculas);
    free(notas_finais);

    printf("Os alunos sao: ");
    for (i = 0; i < x; i++) {
        if (i == x - 1)
        {
            printf("%d\n", alunos_aprovados[i]);
        }
        else {
            printf("%d, ", alunos_aprovados[i]);
        }
    }
    free(alunos_aprovados);
    return 0;
}
int *aprovados(int n, int *mat, float *notas, int *tam) {
    int i, *mat_aprovados;
    for (i = 0; i < n; i++) { 
        if (notas[i] >= 5) {
            *tam += 1;
        }
    }
    mat_aprovados = (int *) malloc(*tam * sizeof(int));
    if (mat_aprovados == NULL) {
        printf("Memoria insuficiente.\n");
        exit(1);
    }
    int t = 0; 
    for (i = 0; i <= *tam; i++) {  
        if (notas[i] >= 5) {
            mat_aprovados[t] = mat[i];
            t++;
        }
    }
    tam = mat_aprovados;  
    return mat_aprovados;
}