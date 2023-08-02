#include <stdio.h>
#include <stdlib.h>

int *premiados(int n, int *inscr, float *t1, int p1,float *t2, int p2, int *tam);

int main() {
    int i, qtd_participantes, *inscritos, peso_teste1, peso_teste2, tam_maiores_medias;
    float *notas_t1, *notas_t2;
    printf("Digite a quantidade de participantes: ");
    scanf("%d", &qtd_participantes);
    inscritos = (int *)malloc(qtd_participantes * sizeof(int));
    if (inscritos == NULL) {
        printf("Memoria insuficiente.\n");
        exit(1);
    }
    notas_t1 = (float *)malloc(qtd_participantes * sizeof(float));
    if (notas_t1 == NULL) {
        printf("Memoria insuficiente.\n");
        exit(1);
    }
    notas_t2 = (float *)malloc(qtd_participantes * sizeof(float));
    if (notas_t2 == NULL) {
        printf("Memoria insuficiente.\n");
        exit(1);
    }

    for (i = 0; i < qtd_participantes; i++) { 
        printf("Digite a inscricao do participante %d: ", i + 1);
        scanf("%d", &inscritos[i]);
        printf("Digite a nota do participante %d no primeiro teste: ", i + 1);
        scanf("%f", &notas_t1[i]);
        printf("Digite a nota do participante %d no segundo teste: ", i + 1);
        scanf("%f", &notas_t2[i]);
    }
    
    printf("Digite o peso da nota do teste 1: ");
    scanf("%d", &peso_teste1);
    printf("Digite o peso da nota do teste 2: ");
    scanf("%d", &peso_teste2);
    int *inscr_premiados = premiados(qtd_participantes, inscritos, notas_t1, peso_teste1, notas_t2, peso_teste2, &tam_maiores_medias);
    free(inscritos);
    free(notas_t1);
    free(notas_t2);
    printf("Premiado(s):\n");
    for (i = 0; i < tam_maiores_medias; i++)
    {
        printf("%d\n", inscr_premiados[i]);
    }
    free(inscr_premiados);
    
    return 0;
}

int *premiados(int n, int *inscr, float *t1, int p1,float *t2, int p2, int *tam) {
    int *maiores, i;
    float maior_media;
    for (i = 0; i < n; i++) {
        if (i == 0) {
            maior_media = ((p1 * t1[i]) + (p2 * t2[i])) / (1 + p2);
        }
        else
        {
            if (maior_media < ((p1 * t1[i]) + (p2 * t2[i])) / (1 + p2)) {
                maior_media = ((p1 * t1[i]) + (p2 * t2[i])) / (1 + p2);
            }
        }
    }
    *tam = 1;
    for (i = 0; i < n; i++) {
        if (((p1 * t1[i]) + (p2 * t2[i])) / (1 + p2) == maior_media) {
            if (*tam == 1) {
                maiores = (int *)malloc(*tam * sizeof(int));
                if (maiores == NULL) {
                    printf("Memoria insuficiente.\n");
                    exit(1);
                }
                maiores[0] = inscr[i];
            }
            else {
                maiores = (int *)realloc(maiores, *tam * sizeof(int)); 
                if (maiores == NULL) {
                    printf("Memoria insuficiente.\n");
                    exit(1);
                }
                maiores[*tam - 1] = inscr[i];; 
            }
            *tam += 1; 
        }
    }
    *tam -= 1;
    return maiores;
}