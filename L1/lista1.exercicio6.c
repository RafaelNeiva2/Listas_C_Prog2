#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, delta, raiz_1, raiz_2;
    printf("Insira o valor de a: ");
    scanf("%f", &a);
    printf("Insira o valor de b: ");
    scanf("%f", &b);
    printf("Insira o valor de c: ");
    scanf("%f", &c);
    delta = (b * b) - 4 * a * c;
    raiz_1 = (b * -1 + sqrt(delta)) / (2 * a);
    raiz_2 = (b * -1 - sqrt(delta)) / (2 * a);
    printf("Raiz 1: %f\nRaiz 2: %f", raiz_1, raiz_2);

    return 0;
}