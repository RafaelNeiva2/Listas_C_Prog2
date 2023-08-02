#include <stdio.h>

int somaImpar(int vetor[], int tamanho) {
if (tamanho == 0)
return 0;

if (vetor[tamanho - 1] % 2 != 0)
return vetor[tamanho - 1] + somaImpar(vetor, tamanho - 1);
else
return somaImpar(vetor, tamanho - 1);
}

int main() {
int vetor[] = {2, 3, 5, 6, 7, 9, 10};
int tamanho = sizeof(vetor) / sizeof(vetor[0]);
int somaImpares = somaImpar(vetor, tamanho);
printf("A soma dos números ímpares do vetor é: %d\n", somaImpares);
}