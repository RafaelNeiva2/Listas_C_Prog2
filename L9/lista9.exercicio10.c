#include <stdio.h>

#define MAX 100

struct aluno {
    char nome[50];
    int idade;
    float media;
};

void le(struct aluno turma[]) {
    int n;
    printf("Digite o número de alunos na turma: ");
    scanf("%d", &n);
    getchar();
    
    for (int i = 0; i < n; i++) {
        printf("\nAluno %d\n", i+1);
        printf("Nome: ");
        fgets(turma[i].nome, 50, stdin);
        printf("Idade: ");
        scanf("%d", &turma[i].idade);
        printf("Média: ");
        scanf("%f", &turma[i].media);
        getchar();
    }
}

void imprime(struct aluno turma[]) {
    printf("\n--- Turma ---\n");
    for (int i = 0; turma[i].media >= 0 && i < MAX; i++) {
        printf("\nAluno %d\n", i+1);
        printf("Nome: %s", turma[i].nome);
        printf("Idade: %d\n", turma[i].idade);
        printf("Média: %.2f\n", turma[i].media);
    }
}

void ordena_medias(struct aluno turma[]) {
    int i, j;
    struct aluno temp;
    
    for (i = 0; turma[i].media >= 0 && i < MAX-1; i++) {
        for (j = i+1; turma[j].media >= 0 && j < MAX; j++) {
            if (turma[j].media > turma[i].media) {
                temp = turma[i];
                turma[i] = turma[j];
                turma[j] = temp;
            }
        }
    }
}

int main(void) {
    struct aluno turma[MAX];
    le(turma);

    puts("Imprimindo dados lidos da turma.");
    puts("Digite qualquer coisa para continuar.");
    getchar();
    imprime(turma);
    
    ordena_medias(turma);
    puts("Imprimindo dados ordenados da turma.");
    puts("Digite qualquer coisa para continuar.");
    getchar();
    imprime(turma);
    
    getchar();
    return 0;
}