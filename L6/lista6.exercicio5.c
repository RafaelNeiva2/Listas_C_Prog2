#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * cesar(char* msg);

int main(void)
{
    char frase[1001];
    scanf("%[^\n]", frase);
    char * nova_frase;
    nova_frase = cesar(frase);
    
    printf("Frase original: \n");
    printf("%s\n", frase);
    printf("Frase modificada: \n");
    printf("%s", nova_frase);
}

char* cesar(char* msg) {
    int n = strlen(msg);
    
    char * nova_frase;
    nova_frase = (char *) malloc(n * sizeof(char));
    if(nova_frase == NULL) { printf("Nao foi possivel alocar a memoria desejada.\n"); exit(1); }

    for(int i = 0; i < n + 1; i++){
        if(msg[i] >= 'a' && msg[i] <= 'w' || msg[i] >= 'A' && msg[i] <= 'W') {
            nova_frase[i]=msg[i]+3;
        } else if(msg[i] == 'x' || msg[i] == 'y' || msg[i] == 'z'|| msg[i] == 'X' || msg[i] == 'Y' || msg[i] == 'Z') {
            nova_frase[i]=msg[i]-23;
        } else if(msg[i] == '\0') {
            nova_frase[i] = '\0';
        } else {
            nova_frase[i] = msg[i];
        }
    }

    return nova_frase;
    free(nova_frase);
}