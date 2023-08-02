#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isValidCharacter(char c) {
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c == ' '));
}

bool validateString(char *str) {
    int i = 0;    
    while (str[i] != '\0') {
        if (!isValidCharacter(str[i])) {
            printf("A string contém caracteres inválidos.\n");
            return 0;
        }
        i++;
    }
    return 1;
}

void removeSpaces(char *str) {
    int i, j;
    int n = strlen(str);
    i = 0;
    while (str[i] == ' ') {
        i++;
    }
    if (i > 0) {
        for (j = 0; j < n - i + 1; j++) {
            str[j] = str[j + i];
        }
    }
    n = strlen(str);
    i = n - 1;
    while (str[i] == ' ') {
        i--;
    }
    str[i + 1] = '\0';
}
int main() {
    char str[100];
    printf("Digite uma string: ");
    scanf("%[^\n]", str);  
    if (validateString(str)){
        removeSpaces(str);
         printf("%s",str);
    }
    return 0;
}