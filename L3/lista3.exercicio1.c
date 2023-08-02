#include <stdio.h>
#define PI 3.14159265

void calc_circulo(float r, float *circunferencia, float *area) {
    *circunferencia = 2 * PI * r;
    *area = PI * (r * r);
}
int main() {

    float raio, circunferencia_circulo = 2, area_circulo;
    printf("Digite o raio: ");
    scanf("%f", &raio);
    calc_circulo(raio, &circunferencia_circulo, &area_circulo);
    printf("Circunferencia = %g\n", circunferencia_circulo);
    printf("Area = %g\n", area_circulo);
    return 0;
}