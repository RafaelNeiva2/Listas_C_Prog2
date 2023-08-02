#include <stdio.h>
#include <string.h>

int main() {
    char nome[81];
    char excluir[4] = "de";
    char excluir2[4] = "da";
    char excluir3[4] = "do";
    char excluir4[4] = "dos";
    int i;

    printf("Digite seu nome completo: ");
    fgets(nome, sizeof(nome), stdin);

    for (i = 0; i < strlen(nome); i++) {
        if (i == 0) {
            printf("%c.", nome[i]);
        } else if (i > 0 && nome[i] == ' ') {
            if (strstr(nome + i , excluir) != NULL ||
                strstr(nome + i , excluir2) != NULL ||
                strstr(nome + i , excluir3) != NULL ||
                strstr(nome + i , excluir4) != NULL) {
                continue;
            } else {
                printf("%c.", nome[i + 1]);
            }
        }
    }

    return 0;
}
