#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int *vetor, tamanho;
    srand(time(0)); 
    tamanho = rand() % (64 + 1 - 2) + 2;  
    if (tamanho % 2 != 0) { 
        tamanho += 1;
    }
    vetor = (int *) malloc (tamanho * sizeof(int));
    if (vetor == NULL) {
        printf("Memoria insuficiente!\n");
        exit(1);
    }
    int i, *ponteiro_1, *ponteiro_2;
    for (i = 0; i < tamanho; i++) { 
        vetor[i] = rand() % (64 + 1); 
    }
    for (i = 0; i < tamanho; i++) { 
        ponteiro_1 = &vetor[i];  
        ponteiro_2 = &vetor[tamanho - 1 - i];  
        printf("Ponteiro 1: %x (Decimal: %d) --- Ponteiro 2:%x (Decimal: %d)\n", ponteiro_1, ponteiro_1, ponteiro_2, ponteiro_2);
        if (i + 1 == tamanho - 1 - i)
        {
            break;
        }
    }
    free(vetor);
    printf("Ponteiros se encontraram.\n");
    return 0;
}

