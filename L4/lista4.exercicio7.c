#include <stdio.h>
#include <ctype.h>

void camelcase(char *string){
    int i = 0;
    while(string[i] != '\0'){
        if(string[i] == ' ' && isalpha(string[i+1])){
            string[i+1] = toupper(string[i+1]);
        }
        i += 1;
    }
}

int main(){
    char string[50];
    char stringjunta[50];
    int letra = 0;
    int i = 0;
     
    printf("Digite uma frase para ser passada para camel case: ");
    scanf(" %[^\n]", string);
    camelcase(string);
    i = 0;
    while(string[i] != '\0'){
        if(string[i] != ' '){
            stringjunta[letra] = string[i];
            letra += 1;
        }
        i += 1;
    }
    printf("%s",stringjunta);

    return 0;
}