#include <stdio.h>
int total_de_notas(int valor);
int dividir_e_modulo(int divisor);

int main() {
    int valor, total_notas;
    printf("Insira o valor: ");
    scanf("%d", &valor);
    total_notas = total_de_notas(valor);
    printf("%d notas", total_notas);

    return 0;
}

int total_de_notas(int valor) {
    int qtd = 0, divisor;
    for (divisor = 100; divisor > 0;) {
        qtd += valor / divisor;
        valor = valor % divisor;
        if (divisor != 50) { 
            divisor = divisor / 2;
        }
        else {
            divisor = 20;
        }
    }

    return qtd;
}