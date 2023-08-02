#include <stdio.h>

void vetorini(char *vet){
    char letra = 'a';
    for(int i = 0; i<27; i++){
        if(i == 27)
            vet[i] = '\0';
        else{
            vet[i] = letra;
            letra++;
        }
    }
    for(int i = 0; i < 26; i++){
        printf("%c ", vet[i]);
    }
}


int main(){
    char vet[27];
    vetorini(vet);


    return 0;
}