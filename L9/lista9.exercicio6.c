#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
struct pessoa {
    int codigo;
    char nome[81];
};
typedef struct pessoa Pessoa;

Pessoa* busca(int n, Pessoa** vet, int codigo) {
    int inicio = 0;
    int fim = n - 1;

    while (inicio <= fim) {
    int meio = (inicio + fim) / 2;

    if (vet[meio]->codigo == codigo) {
    return vet[meio];
    }
    else if (vet[meio]->codigo < codigo) {
    inicio = meio + 1;
    }
    else {
    fim = meio - 1;
    }
    }

    return NULL;
}

int main() {
    int num_pessoas = 5;
    Pessoa* pessoas[num_pessoas];

    pessoas[0] = malloc(sizeof(Pessoa));
    pessoas[0]->codigo = 1;
    strcpy(pessoas[0]->nome, "Pedro");

    pessoas[1] = malloc(sizeof(Pessoa));
    pessoas[1]->codigo = 2;
    strcpy(pessoas[1]->nome, "Fred");

    pessoas[2] = malloc(sizeof(Pessoa));
    pessoas[2]->codigo = 3;
    strcpy(pessoas[2]->nome, "Aguiar");

    pessoas[3] = malloc(sizeof(Pessoa));
    pessoas[3]->codigo = 4;
    strcpy(pessoas[3]->nome, "Anna Paula");

    pessoas[4] = malloc(sizeof(Pessoa));
    pessoas[4]->codigo = 5;
    strcpy(pessoas[4]->nome, "Paulo");

    int codigo_procurado = 3;
    Pessoa* pessoa_encontrada = busca(num_pessoas, pessoas, codigo_procurado);

    if (pessoa_encontrada != NULL) {
    printf("Pessoa encontrada:\n");
    printf("Código: %d\n", pessoa_encontrada->codigo);
    printf("Nome: %s\n", pessoa_encontrada->nome);
    } else {
    printf("Pessoa inválida.\n");
    }

    for (int i = 0; i < num_pessoas; i++) {
    free(pessoas[i]);
    }

}*/