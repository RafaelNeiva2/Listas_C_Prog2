#include <stdio.h>
#include <string.h>
int contvogal(char *p){
    int n = 0;
    const char vogais[] = "AEIOUaeiou";
    for (int i = 0; i < strlen(p); i++){
        if (strchr(vogais,p[i]) != NULL){
            n++;
        }   
    }
    return n;
}
int main (void){
    int v;
    char f[81];
    char *p;
    p = &f;
    printf("Digite a sua frase");
    scanf("%80[^\n]", &f);
    v = contvogal(p);
    printf("O numero de vogais e %d", v);
    return 0;
}