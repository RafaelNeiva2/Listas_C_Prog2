#include <stdio.h>
#include <string.h>

int main()
{
    char nome[81], endereco[81], telefone[10];
    int numero;

    printf("Digite seu nome: ");
    scanf(" %s", nome);

    printf("Digite seu endereco: ");
    scanf(" %s", endereco);

    printf("Digite seu numero de telefone: ");
    scanf(" %d", &numero);

    sprintf(telefone, "%d", numero);

    strcat(nome, "-");
    strcat(nome, endereco);
    strcat(nome, "-");
    strcat(nome, telefone);

    printf("%s", nome);
    return 0;
}
