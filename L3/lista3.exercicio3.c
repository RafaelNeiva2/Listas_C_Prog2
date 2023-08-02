#include <stdio.h>

int main() {

    printf("Para gerar uma saida equivalente com aquela onde i ocupa o endereco 4094, se cria uma variavel com esse valor para ser mostrado, chamada endereco.\n");
    int i=5, *p;
    p = &i;
    int endereco = 4094;
    printf("%x %d %d \n", endereco, *p+2, 3**p);

    return 0;
}