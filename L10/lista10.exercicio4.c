#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char nome_doc[21];
    printf("Digite o nome do arquivo que será escrito a partir do antigo: ");
    scanf(" %16[^\n]", nome_doc);
    strcat(nome_doc, ".txt");
    FILE *arq_verifying = fopen("L9ex4.txt", "r");
    FILE *new_arq = fopen(nome_doc, "w");
    char currentLine[150];
    while (fgets(currentLine, sizeof(currentLine), arq_verifying) != NULL) {
        if (currentLine[0] != '/' && currentLine[1] != '/') {
            fputs(currentLine, new_arq);
        }
    }
    fclose(arq_verifying);
    fclose(new_arq);
    return 0;
}

