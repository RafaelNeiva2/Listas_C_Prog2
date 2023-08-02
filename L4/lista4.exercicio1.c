#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x[10], y[10], i;

    for (i = 0; i < 10; i++){
        printf("Digite os elementos do vetor: ");
        scanf(" %d", &x[i]);
    }
    for (i = 0; i < 10; i++){
        y[i] = x[9-i];
    }
    printf("\nA copia do vetor x invertido para y e:\n");
    for (i = 0; i < 10; i++){
        printf("%d ", y[i]);
    }
    printf("\n");
    return 0;
}