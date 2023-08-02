# include <stdio.h>

int main() {

    int a, b, c;
    float maior, menor, media;
    printf("Insira o primeiro valor: ");
    scanf("%i", &a);
    printf("Insira o segundo valor: ");
    scanf("%i", &b);
    printf("Insira o terceiro valor: ");
    scanf("%i", &c);
    if (a > b && a > c) {
        maior = a;
        if (b < c) {
            menor = b;
        }
        else {
            menor = c;
        }
    }
    else if (b > a && b > c) {
        maior = b;
        if (a < c) {
            menor = a;
        }
        else {
            menor = c;
        }
    }
    else {
        maior = c;
        if (a < b) {
            menor = a;
        }
        else {
            menor = b;
        }
    }
    media = (maior + menor) / 2;
    printf("\nMaior: %.0f\nMenor: %.0f\nMedia: %.1f\n", maior, menor, media);

    if (a % 2 == 0 || b % 2 == 0 || c % 2 == 0) {
        printf("Pares:\n");
        if (a % 2 == 0) {
            printf("%i\n", a);
        }
        if (b % 2 == 0 && b != a && b != c) {
            printf("%i\n", b);
        }
        if (c % 2 == 0 && a != c ) {
            printf("%i\n", c);
        }
    }
    else {
        printf("Foram digitados apenas impares");
    }
    return 0;
}