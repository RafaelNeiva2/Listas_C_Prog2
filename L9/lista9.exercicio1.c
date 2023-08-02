#include <stdio.h>
#include <stdlib.h>

typedef struct data {
    int dia, mes, ano;
} Data;

typedef struct local {
    char ender[81];
    int sala;
} Local;

typedef struct notas {
    float geral;
    float especifica;
} Notas;

typedef struct candidato {
    int inscr;
    char nome[81];
    Data nasc;
    Local *loc;
    Notas nt;
} Candidato;

void ler_dados(Candidato *candidato) {
    printf("Número de inscrição: ");
    scanf("%d", &candidato->inscr);

    printf("Nome: ");
    scanf(" %[^\n]", candidato->nome);

    printf("Data de nascimento (dd/mm/aaaa): ");
    scanf("%d/%d/%d", &candidato->nasc.dia, &candidato->nasc.mes, &candidato->nasc.ano);

    candidato->loc = (Local *)malloc(sizeof(Local));
    if (candidato->loc == NULL) {
        printf("Não foi possível alocar memória.\n");
        exit(1);
    }

    printf("Endereço do local de prova: ");
    scanf(" %[^\n]", candidato->loc->ender);

    printf("Número da sala: ");
    scanf("%d", &candidato->loc->sala);

    printf("Nota de conhecimentos gerais: ");
    scanf("%f", &candidato->nt.geral);

    printf("Nota de conhecimentos específicos: ");
    scanf("%f", &candidato->nt.especifica);
}

void imprimir_dados(const Candidato *candidato) {
    printf("Número de inscrição: %d\n", candidato->inscr);
    printf("Nome: %s\n", candidato->nome);
    printf("Data de nascimento: %02d/%02d/%04d\n", candidato->nasc.dia, candidato->nasc.mes, candidato->nasc.ano);
    printf("Endereço do local de prova: %s\n", candidato->loc->ender);
    printf("Número da sala: %d\n", candidato->loc->sala);
    printf("Nota de conhecimentos gerais: %.2f\n", candidato->nt.geral);
    printf("Nota de conhecimentos específicos: %.2f\n", candidato->nt.especifica);
}

void alterar_local_prova(Candidato *candidato) {
    printf("Novo endereço do local de prova: ");
    scanf(" %[^\n]", candidato->loc->ender);

    printf("Novo número da sala: ");
    scanf("%d", &candidato->loc->sala);
}

int main() {
    int n, i;
    char opcao;
    Candidato *candidatos;

    printf("Digite a quantidade de candidatos: ");
    scanf("%d", &n);

    candidatos = (Candidato *)malloc(n * sizeof(Candidato));
    if (candidatos == NULL) {
        printf("Não foi possível alocar memória.\n");
        exit(1);
    }

    for (i = 0; i < n; i++) {
        printf("Candidato %d:\n", i + 1);
        ler_dados(&candidatos[i]);
        printf("\n");
    }

    do {
        printf("\nMenu de opções:\n");
        printf("1. Ler dados de candidatos\n");
        printf("2. Imprimir informações dos candidatos\n");
        printf("3. Alterar endereço e sala de prova de um candidato\n");
        printf("0. Sair\n");
        printf("Opção: ");
        scanf(" %c", &opcao);

        if (opcao == '1') {
            for (i = 0; i < n; i++) {
                printf("\nCandidato %d:\n", i + 1);
                ler_dados(&candidatos[i]);
                printf("\n");
            }
        } else if (opcao == '2') {
            for (i = 0; i < n; i++) {
                printf("\nInformações do candidato %d:\n", i + 1);
                imprimir_dados(&candidatos[i]);
                printf("\n");
            }
        } else if (opcao == '3') {
            printf("Digite o número de inscrição do candidato a ser alterado: ");
            int numInscricao;
            scanf("%d", &numInscricao);

            for (i = 0; i < n; i++) {
                if (candidatos[i].inscr == numInscricao) {
                    printf("\nAlterar endereço e sala de prova do candidato %d:\n", numInscricao);
                    alterar_local_prova(&candidatos[i]);
                    break;
                }
            }
            if (i == n) {
                printf("\nCandidato com número de inscrição %d não encontrado.\n", numInscricao);
            }
        } else if (opcao == '0') {
            printf("Encerrando o programa...\n");
        } else {
            printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao != '0');

    for (i = 0; i < n; i++) {
        free(candidatos[i].loc);
    }
    free(candidatos);

    return 0;
}
