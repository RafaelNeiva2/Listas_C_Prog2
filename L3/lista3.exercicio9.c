#include <stdio.h>

int main() {

    int pulo[5] = {1,2,3,4,5};
    printf("A expressao que referncia o valor do terceiro elemento da matriz eh *(pulo + 2), pois se o primeiro eh o de posicao 0, o segundo eh aquele 2 posicoes depois.\n");
    printf("*(p + 2) = %d\n", *(pulo + 2)); 
    printf("\n");

    printf("*(pulo + 4) eh incorreto pois retorna o valor 4 posicoes depois de 0, ou seja, a posicao pulo[4], que eh o quinto valor da matriz.\n");
    printf("*(pulo + 4) = %d\n", *(pulo + 4));

    printf("pulo + 4 eh incorreto pois faz uma soma com o valor do endereco de memoria do vetor, e portanto nao retorna um de seus elementos.\n");
    printf("pulo + 4 = %d\n", pulo + 4);
    printf("De mesmo modo, pulo + 2 eh incorreto pois faz uma soma com o valor do endereco de memoria do vetor, e portanto nao retorna um de seus elementos.\n");
    printf("pulo + 2 = %d\n", pulo + 2);
    return 0;
}