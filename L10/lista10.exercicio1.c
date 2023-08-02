#include <stdio.h>
#include <stdlib.h>

typedef struct funcionario{
    char nome[81];
    float valor_hora;
    int horas_mes;
} Funcionario;

void carrega(int n, Funcionario** vet, char* arquivo)
{
    FILE* file = fopen(arquivo, "r");
    if (file == NULL){
        printf("ERRO ao abrir o arquivo.\n");
        exit(1);
    }
    for (int i = 0; i < n; i++){
        Funcionario* funcionario = (Funcionario*)malloc(sizeof(Funcionario));
        if (funcionario == NULL){
            printf("ERRO ao alocar memoria.\n");
            exit(1);
        }
        fgets(funcionario->nome, 81, file);
        fscanf(file, "%f %d\n", &(funcionario->valor_hora), &(funcionario->horas_mes));
        vet[i] = funcionario;
    }
    fclose(file);
}
