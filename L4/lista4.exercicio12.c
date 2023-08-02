#include <stdio.h>

void retira(char *string, char c, char *string2){
    int letra = 0;
    for(int i = 0 ;string[i] != '\0'; i++ ){
        if(string[i] != c){
            string2[letra] = string[i];
            letra += 1;
        }
    }
    string2[letra] = '\0';
}

int main(){
    char string[20];
    char remove;
    char nova_string[20];

    printf("Digite uma frase: ");
    scanf(" %[^\n]", string);

    printf("Qual letra voce pretende retirar as ocorrencias na sua frase?");
    scanf(" %c", &remove);

    retira(string, remove, nova_string);
    printf("%s\n", nova_string);


    return 0;
}