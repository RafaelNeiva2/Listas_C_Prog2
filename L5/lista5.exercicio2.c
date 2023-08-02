#include<stdio.h>
#include<string.h>
main(void){
    char texto[]= "foi muito facil";
    int i;
    for (i = 0; texto[i]!='\0'; i++){// o laço for percorrerá pela string
        if (texto[i] == ' ') break;// se chegar em um espaço em branco o condicional terminará e quebrará o laço for
        }
    i++;// incrementa i em uma unidade, começando o laço posterior no indice posterior ao espaço em branco
    for ( ; texto[i]!='\0'; i++){// esse laço irá um indice depois do primeiro espaço em branco
        printf("%c", texto[i]);// irá imprimir os caracteres posteriores ao primeiro espaço em branco na tela
    }
}