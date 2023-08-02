#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Aluno {
    int matricula;
    char nome[50];
    struct Aluno* proximo;
} Aluno;

void imprimirLista(Aluno* lista) {
    Aluno* atual = lista;
    printf("Lista de Alunos:\n");
    while (atual != NULL) {
        printf("Matrícula: %d, Nome: %s\n", atual->matricula, atual->nome);
        atual = atual->proximo;
    }
}

void excluirAluno(Aluno** lista, int matricula) {
    Aluno* atual = *lista;
    Aluno* anterior = NULL;
    while (atual != NULL) {
        if (atual->matricula == matricula) {
            if (anterior == NULL) {
                *lista = atual->proximo;
            } else {
                anterior->proximo = atual->proximo;
            }
            free(atual);
            printf("Aluno com matrícula %d foi excluído.\n", matricula);
            return;
        }
        anterior = atual;
        atual = atual->proximo;
    }
    printf("Aluno com matrícula %d não encontrado.\n", matricula);
}

void incluirAluno(Aluno** lista, int matricula, const char* nome) {
    Aluno* novoAluno = (Aluno*)malloc(sizeof(Aluno));
    novoAluno->matricula = matricula;
    strcpy(novoAluno->nome, nome);
    novoAluno->proximo = NULL;

    if (*lista == NULL) {
        *lista = novoAluno;
    } else {
        Aluno* atual = *lista;
        while (atual->proximo != NULL) {
            atual = atual->proximo;
        }
        atual->proximo = novoAluno;
    }
    printf("Novo aluno com matrícula %d foi adicionado.\n", matricula);
}

void alterarNomeAluno(Aluno* lista, int matricula, const char* novoNome) {
    Aluno* atual = lista;
    while (atual != NULL) {
        if (atual->matricula == matricula) {
            strcpy(atual->nome, novoNome);
            printf("Nome do aluno com matrícula %d foi alterado para %s.\n", matricula, novoNome);
            return;
        }
        atual = atual->proximo;
    }
    printf("Aluno com matrícula %d não encontrado.\n", matricula);
}

int main() {
    FILE* arquivo = fopen("alunos.txt", "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo de alunos.\n");
        return 1;
    }    
    Aluno* lista = NULL;    
    int matricula;
    char nome[50];    
    while (fscanf(arquivo, "%d %[^\n]", &matricula, nome) == 2) {
        incluirAluno(lista, matricula, nome);
    }

    fclose(arquivo);
    printf("Lista de Alunos:\n");
    imprimirLista(lista);
    printf("\n");
    int matriculaExcluir = 1234;
    excluirAluno(lista, matriculaExcluir);
    int matriculaAlterar = 5678;
    const char* novoNome = "Novo Nome";
    alterarNomeAluno(lista, matriculaAlterar, novoNome);    
    printf("Lista de Alunos Após Excluir e Alterar:\n");
    imprimirLista(lista);    
    liberarLista(lista);
    return 0;
}
