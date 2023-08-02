#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float diferenca_percentual(int qtd_bom, int qtd_regular);
float media_ruim(int qtd_ruim, int total_idades);
void info_pessimo(int qtd_pessoas, int qtd_pessimo, int maior_pessimo);
int diferenca_otimo_ruim(int qtd_otimo, int qtd_ruim);

int main() {

    int *vetor_total;
    int total_pessoas, i;
    printf("Quantas pessoas foram ao cinema: ");
    scanf("%d", &total_pessoas);
    // alocacao dinamica
    vetor_total = (int *) malloc(total_pessoas * sizeof(int));
    if (vetor_total == NULL){
        printf("Memoria insuficinte");
        return 1;
    }

    int idade, qtd_otimo = 0, qtd_bom = 0, qtd_regular = 0, soma_idades_ruim = 0, qtd_idades_ruim = 0, qtd_pessimo = 0, maior_pessimo = 0, maior_otimo = 0, maior_ruim = 0;
    char opiniao[8];
    for(i=0; i < total_pessoas; i++){
        printf("Digite sua idade: ");
        scanf(" %d", &idade);
        printf("Digite a opniao (sem acento): ");
        scanf(" %s", opiniao);
        if (strcmp(opiniao, "bom") == 0)
        {
            ++qtd_bom;
        }
        else if (strcmp(opiniao, "regular") == 0)
        {
            ++qtd_regular;
        }
        else if (strcmp(opiniao, "ruim") == 0)
        {
            ++qtd_idades_ruim;
            soma_idades_ruim += idade;
            if (maior_ruim < idade) {  
                maior_ruim = idade;
            }
        }
        else if (strcmp(opiniao, "pessimo") == 0)
        {
            ++qtd_pessimo;
            if (maior_pessimo < idade) { 
                maior_pessimo = idade;
            }
        }
        else if (strcmp(opiniao, "otimo") == 0)
        {
            ++qtd_otimo;
            if (maior_otimo < idade) {
                maior_otimo = idade;
            }
        }
    }
    printf("a. A quantidade de respostas otimo: %d", qtd_otimo);
    printf("b. A diferenca percentual entre respostas bom e regular: %g por cento\n", diferenca_percentual(qtd_bom, qtd_regular));
    printf("c. A media de idade das pessoas que responderam ruim: ");
    if (qtd_idades_ruim == 0) {
        printf("Nenhuma pessoa respondeu ruim.\n");
    }
    else {
        printf("%g\n", media_ruim(qtd_idades_ruim, soma_idades_ruim));
    }
    info_pessimo(total_pessoas, qtd_pessimo, maior_pessimo);
    printf("e. A diferenca de idade entre a maior idade que respondeu otimo e a maior idade que respondeu ruim eh de %d pessoas", diferenca_otimo_ruim(qtd_otimo, qtd_idades_ruim));
    return 0;
}

float diferenca_percentual(int qtd_bom, int qtd_regular) {
    float diferenca;
    int maior, menor;
    if ((qtd_bom > qtd_regular) || (qtd_bom == qtd_regular))
    {
        maior = qtd_bom;
        menor = qtd_regular;
    }
    else if (qtd_bom < qtd_regular)
    {
        menor = qtd_bom;
        maior = qtd_regular;
    }
    if (menor == 0) {  
        diferenca = 0;
    }
    else {
        diferenca = ((float) (maior - menor) / menor)  * 100;
    }
    return diferenca;
}

float media_ruim(int qtd_ruim, int total_idades) {
    float resultado = (float) total_idades / qtd_ruim; 
    return resultado;
}

void info_pessimo(int qtd_pessoas, int qtd_pessimo, int maior_pessimo) {
    float porcentagem = (float) qtd_pessimo / qtd_pessoas; 
    porcentagem *= 100;
    printf("d. A porcentagem de respostas pessimo e a maior idade que utilizou esta opcao:\nA porcentagem foi %g por cento ", porcentagem);
    if (qtd_pessimo == 0) {
        printf("pois nenhuma pessoa respondeu pessimo.\n");
    }
    else {
        printf("e a maior idade foi %d\n", maior_pessimo);
    }
}

int diferenca_otimo_ruim(int qtd_otimo, int qtd_ruim) {
    int diferenca = (qtd_otimo - qtd_ruim);
    if (diferenca < 0) {
        diferenca *= -1;
    }
    return diferenca;
}