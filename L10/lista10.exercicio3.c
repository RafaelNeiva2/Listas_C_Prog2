#include <stdio.h>
#include <string.h>
#include <stdlib.h>

float media (char* mat, char* nome_arquivo);

int main() {
    char nome[256], matricula_aluno[10];
    printf("Insira o nome do arquivo: ");
    scanf(" %255[^\n]", nome);
    printf("Insira a matricula do aluno: ");
    scanf(" %9[^\n]", matricula_aluno);
    float media_aluno = media(matricula_aluno, nome);
    if (media_aluno != -1.0) {
        printf("Media do aluno %s: %g\n", matricula_aluno, media_aluno);
    }
    else {
        printf("Matricula nao encontrada.\n");
    }

    return 0;
}

float media (char* mat, char* nome_arquivo) {
    FILE *fp;
    fp = fopen(nome_arquivo, "r");
    if (fp == NULL) {
        printf("ERRO");
        exit(1);
    }
    char matricula_busca[10];
    float p1, p2, p3;
    while (fscanf(fp, " %9[^\n] %f %f %f", &matricula_busca, &p1, &p2, &p3) == 4)  {
        if (strcmp(matricula_busca, mat) == 0) {
            fclose(fp);
            float resultado_media = (p1 + p2 + p3) / 3;
            return resultado_media;
        }
    }
    fclose(fp);
    return -1.0;
}