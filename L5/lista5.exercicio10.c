#include <stdio.h>
#include <ctype.h>
#include <conio.h>
#include <string.h>

int cadastrarUsuario(char* nomeUsuario, char* senha) {
    int i = 0;
    char caractere;

    printf("Digite o nome de usuario (somente numeros e letras,max 8 caracteres): ");
    while (i < 8 && (caractere = getchar()) != '\n') {
        if (isalnum(caractere)) {
            nomeUsuario[i++] = caractere;
            putchar(caractere);
        }
    }
    nomeUsuario[i] = '\0';
    printf("\n");

    i = 0;
    printf("Digite a senha (somente numeros e letras, max 8 caracteres): ");
    while (i < 8 && (caractere = getch()) != '\r') {
        if (isalnum(caractere)) {
            senha[i++] = caractere;
            putchar('*');
        }
    }
    senha[i] = '\0';
    printf("\n");

    return 1;
}

int realizarLogin(const char* nomeUsuarioCadastrado, const char* senhaCadastrada) {
    char resposta  = 'S';
    char nomeUsuario[9];
    char senha[9];

    while(resposta == 'S' || resposta == 's'){
            
    printf("Digite o nome de usuario: ");
    scanf("%8s", nomeUsuario);
    getchar(); 

    printf("Digite a senha: ");
    int i = 0;
    char caractere;
    while (i < 8 && (caractere = getch()) != '\r') {
        if (isalnum(caractere)) {
            senha[i++] = caractere;
            putchar('*');
        }
    }
    senha[i] = '\0';
    printf("\n");

    if (strcmp(nomeUsuarioCadastrado, nomeUsuario) == 0 && strcmp(senhaCadastrada, senha) == 0) {
        printf("OK - Acesso permitido\n");
        return 1;
    } else {
        printf("Acesso negado\n");
        
    }

    printf("Deseja tentar novamente? (S/N)");
            scanf("%c", &resposta);
    
    }
    return 0;
}

int main() {
    char nomeUsuarioCadastrado[9];
    char senhaCadastrada[9];

    printf("- Cadastro -\n");
    cadastrarUsuario(nomeUsuarioCadastrado, senhaCadastrada);

    printf("- Login -\n");
    realizarLogin(nomeUsuarioCadastrado, senhaCadastrada);

    return 0;
}
