#include <stdio.h>
#include <ctype.h>

int valida_mail(char *s){

    if(s[0] == '.' || s[0] == '-' || s[0] == '_' || isdigit(s[0])){
        return 1;
    }
    for(int i = 0; i < strlen(s); i++) {
        if(s[i] == '.'|| s[i] == '-' || s[i] == '_'){
            if(s[i+1] == '.' || s[i+1] == '-' || s[i+1] == '_')
                return 1;
        }
    }
    return 0;
}

int main(void) {
    char string[64];
    int trueorfalse;

    printf("Digite um inicio de email: ");
    scanf("%s", string);
    trueorfalse = valida_mail(string);
    if(trueorfalse == 1){
        printf("O endereco de email %s e invalido", string);
    }
    else{
        printf("Endereco de email %s valido", string);
    }


    return 0;
}