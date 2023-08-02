#include <stdio.h>
#include <stdlib.h>

Compromisso* busca(int n, Compromisso** vet, int d, int m, int a) {
    int inicio = 0;
    int fim = n - 1;

    while (inicio <= fim) {
        int meio = (inicio + fim) / 2;
        if (vet[meio]->dta.dd == d && vet[meio]->dta.mm == m && vet[meio]->dta.aa == a) {
            return vet[meio];
        }
        else if (vet[meio]->dta.aa < a || (vet[meio]->dta.aa == a && vet[meio]->dta.mm < m) || (vet[meio]->dta.aa == a && vet[meio]->dta.mm == m && vet[meio]->dta.dd < d)) {
            inicio = meio + 1;
        }
        else {
            fim = meio - 1;
        }
    }
    return NULL;
}
