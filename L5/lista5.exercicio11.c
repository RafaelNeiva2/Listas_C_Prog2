#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
    char str[21];
    int i, tamanho = 0;

    printf("Digite uma string de no max 20 caracteres:");
    fgets(str,20,stdin);

    while(str[tamanho] != '\0' ){
        tamanho++;
    }

    for(i=tamanho;i >= 0;i--){
        printf("%c",str[i]);
    }

}