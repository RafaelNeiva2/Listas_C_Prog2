#include <stdio.h>
#include <stdlib.h>
int inicial (int *vetor, int n){
    for (int i = 0; i < n; i++){
        vetor[i] = 5 * (i + 1);
    }
    return vetor;
}
void print(int *v, int n){
    for (int i = 0; i < n; i++){
        printf("%d ", v[i]);
    }
    printf("\n");
}
int main (void){
    int n;
    int multi[10];
    inicial(multi, 10);
    printf("Os 10 primeiros multiplos de 5: ");
    print(multi, 10);
    printf("Digite a quantidade de multiplos de 5 que deseja ver: ");
    scanf("%d", &n);
    int *vetor = (int*) malloc (n * (sizeof(int)));
    inicial(vetor, n);
    print(vetor, n);
    return 0;
}