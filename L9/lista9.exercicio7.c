#include <stdio.h>
#include <stdlib.h>

struct aluno {
    int mat; /* Matrícula do aluno */
    char nome[81]; /* Nome do aluno */
};
typedef struct aluno Aluno;

struct prova {
    Aluno a; /* Aluno que fez a prova */
    float q1, q2, q3, q4; /* Nota em cada questão */
};
typedef struct prova Prova;

int compara(Prova* p1, Prova* p2);
void troca(Prova** p1, Prova** p2);
void ordena(int n, Prova** v);

int main() {
    int n;

    printf("Informe a quantidade de provas: ");
    scanf("%d", &n);

    Prova** vetor = (Prova**)malloc(n * sizeof(Prova*));
    printf("Informe os dados das provas:\n");
    for (int i = 0; i < n; i++) {
        vetor[i] = (Prova*)malloc(sizeof(Prova));
        printf("Aluno %d:\n", i + 1);
        printf("Matrícula: ");
        scanf("%d", &(vetor[i]->a.mat));
        printf("Nome: ");
        scanf(" %[^\n]", vetor[i]->a.nome);
        printf("Nota 1: ");
        scanf("%f", &(vetor[i]->q1));
        printf("Nota 2: ");
        scanf("%f", &(vetor[i]->q2));
        printf("Nota3: ");
        scanf("%f", &(vetor[i]->q3));
        printf("Nota4: ");
        scanf("%f", &(vetor[i]->q4));
    }
    ordena(n, vetor);

    printf("\nProvas:\n");
    for (int i = 0; i < n; i++) {
        printf("Aluno: %s\n", vetor[i]->a.nome);
        printf("Nota total: %.2f\n\n", (vetor[i]->q1 + vetor[i]->q2 + vetor[i]->q3 + vetor[i]->q4) / 4);
    }
    for (int i = 0; i < n; i++) {
        free(vetor[i]);
    }
    free(vetor);
    return 0;
}
int compara(Prova* p1, Prova* p2) {

    float nota1 = p1->q1 + p1->q2 + p1->q3 + p1->q4;
    float nota2 = p2->q1 + p2->q2 + p2->q3 + p2->q4;


    if (nota1 != nota2) {
        return nota1 < nota2; 
    } else {
        return strcmp(p1->a.nome, p2->a.nome) > 0;
    }
}

void troca(Prova** p1, Prova** p2) {
    Prova* temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

void ordena(int n, Prova** v){
    int fim,i;
    for(fim=n-1; fim>0; fim--)
        for(i=0; i<fim; i++)
            if(compara(v[i],v[i+1]))
                troca(&v[i],&v[i+1]);
}
