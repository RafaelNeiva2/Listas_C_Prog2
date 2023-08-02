#include <stdio.h>
#include <string.h>

//O programa irá exibir a sequência de caracteres "etset Otimo" na tela. No primeiro loop, a variável "misterio[i]" receberá cada letra correspondente ao ponteiro "p", que aponta para a última letra da frase "Otimo teste". O loop continuará até que o caractere apontado por "*p" seja um espaço em branco (' '), incrementando o valor de "i" e decrementando o valor de "p" para avançar da última letra até o início da palavra.

//No segundo loop, a variável "misterio[i]" receberá cada letra da variável "frase[j]" em ordem, percorrendo letra por letra até encontrar um espaço em branco em "frase[j]". Nesse caso, o loop começará no início da frase "Otima frase", pois o valor de "j" foi inicializado como 0. Isso resultará na adição da palavra "Otimo" à sequência de caracteres "etset Otimo", finalizando a construção da string.

int main(void) {
    char *frase = "Otimo teste";
    char *p, misterio[80];
    int i = 0;
    int j = 0;

    p = frase + strlen(frase) - 1;

    while (*p != ' ') {
        misterio[i] = *p;
        i++;
        p--;
    }

    misterio[i] = ' ';
    i++;

    while (frase[j] != ' ') {
        misterio[i] = frase[j];
        j++;
        i++;
    }

    misterio[i] = '\0';

    puts(misterio);

    return 0;
}
