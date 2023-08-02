#include <stdio.h>
#include <string.h>
#define MAX 2048

float calcula_media(int n, char v[MAX][128]);
float calcula_variancia(int qtd, char v[MAX][128], float media);

int main() {
    char nomes[MAX][128], nome[128];
    int i = 0;
    printf("Digite o nome %d do vetor ou digite fim para encerrar: ", i + 1);
    scanf(" %127[^\n]", nome);
    int fim_loop = strcmp(nome, "fim") == 0;
    while (!fim_loop)
    {
        strcpy(nomes[i], nome);
        printf("Digite o nome %d do vetor ou digite fim para encerrar: ", i + 1);
        scanf(" %127[^\n]", nome);
        fim_loop = strcmp(nome, "fim") == 0;
        if (!fim_loop) {
            i++;
        }
    }
    int qtd_nomes = i + 1;
    float media = calcula_media(qtd_nomes, nomes);
    printf("Media: %g\n", media);
    float variância = calcula_variancia(qtd_nomes, nomes, media);
    printf("Variancia: %g\n", variância);

    return 0;
}

float calcula_media(int n, char v[MAX][128]) {
    int i;
    float numerador = 0, resultado;
    for (i = 0; i < n; i++) {
        numerador += strlen(v[i]);
    }
    resultado = numerador / n;
    return resultado;
}

float calcula_variancia(int qtd, char v[MAX][128], float media) {
    int i;
    float numerador = 0, resultado;
    for (i = 0; i < qtd; i++) {
        numerador += ((strlen(v[i]) - media) * (strlen(v[i]) - media));
    }
    resultado = numerador / qtd;
    return resultado;
}