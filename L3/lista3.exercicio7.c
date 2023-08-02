#include <stdio.h>

int main() {

    int *pti;
    int veti[]={10,7,2,6,3};
    pti = veti;
    printf("A afirmativa falsa eh d (pti[1] = 10).\nIsso ocorre pois a contagem de elementos de um vetor se inicia em 0, sendo assim 10 eh o elemento 0, e 7 o elemento 1.\npt[1] = %d\n", pti[1]);
    
    printf("\n");

    printf("\nA alternativa a eh correta pois *pti aponta para o primeiro elemento do vetor, que de fato, eh 10.\n");
    printf("*pti = %d\n", *pti);

    printf("\nA alternativa b eh correta pois *(pti + 2) retorna o valor dois elementos depois do primeiro, ou seja, 2, o terceiro valor.\n");
    printf("(*pti + 2) = %d\n", *(pti + 2));

    printf("\nA alternativa c eh correta pois pti[4] retorna o quinto valor [casa de numero 4] do vetor, que de fato, eh 3.\n");
    printf("pt[4] = %d\n", pti[4]);

    printf("\nA alternativa e eh correta pois *(veti+3) retorna o valor 3 casas depois do primeiro, ou seja, o valor pti[3], que de fato, eh 6.\n");
    printf("*(veti+3) = %d", *(veti + 3));

    return 0;
}