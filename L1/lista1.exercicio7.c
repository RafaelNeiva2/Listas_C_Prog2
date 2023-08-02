#include <stdio.h>
#include <math.h>

int main() {

    float num;
    int arred_baixo, arred_alto;
    printf("Digite seu valor: ");
    scanf("%f", &num);
    arred_baixo = floor(num);
    arred_alto = ceil(num);
    printf("O valor digitado arrendondado para baixo: %d\nO valor digitado arrendondado para cima: %d", arredondado_baixo, arredondado_alto);

    return 0;
}