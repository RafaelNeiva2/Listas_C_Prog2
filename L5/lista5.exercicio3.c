#include <stdio.h>
#include <string.h>
int carac(const char* frase, char* letra){
    int n = 0;
    for (int i = 0; i < strlen(frase); i++){
        if (*letra == frase[i]){
            n++;
        } 
    }
    return n;
}
int main(void){
    char frase[21];
    char letra;
    int n;
    printf("Digite sua frase: \n");
    scanf("%20[^\n]", &frase);
    printf("Digite sua letra: ");
    scanf(" %c", &letra);
    n = carac(frase, &letra);
    printf("A quantidade de vezes que a letra %c aparece na frase eh %d", letra, n);
    return 0;
}
