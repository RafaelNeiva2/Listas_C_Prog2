# include <stdio.h>

int conversao_binaria(int n, int *vetor_binario, int tamanho, int tamanho_fixo) {
    vetor_binario[tamanho] = (n % 2);
    n /= 2;
    if(tamanho > 0) {
        tamanho--;
        return conversao_binaria(n, vetor_binario, tamanho, tamanho_fixo);
    }
    if(tamanho == 0) {
        int indice, binario;
        binario = 0;
        for(indice = 0; indice < tamanho_fixo; indice++) {
            if(indice == 0) {
                if(vetor_binario[indice] == 0) {
                    binario = 0;
                }
                else {
                    binario = 1;
                }
            }
            else {
                if(vetor_binario[indice] == 0) {
                    binario *= 10;
                }
                else {
                    binario = (binario * 10) + 1;
                }
            }
        }
        return binario;
    }
}

int main(void) {
    int n;
    printf("Insira um valor inteiro decimal para ser convertido em binario: ");
    scanf("%d", &n);
    int indice, tamanho, tamanho_fixo, numero_binario;
    tamanho = 0;
    for(indice = n; indice > 0; ) {
        indice /= 2;
        tamanho++;
    }
    tamanho_fixo = tamanho;
    int vetor_binario[tamanho];
    tamanho -= 1;
    numero_binario = conversao_binaria(n, vetor_binario, tamanho, tamanho_fixo);
    printf("\nO numero digitado em binario e': %d", numero_binario);
    getch();    
    printf("\n");
    printf("Teste 1:\nn = 2\n");
    printf("Feitas 2 divisoes de n = 2 por 2, resultando no valor 2 para tamanho.\n");
    printf("tamanho_fixo tem valor tamanho = 2\n");
    printf("vetor_binario tem tamanho = 2\n");
    printf("tamanho decresce em 1, de 2 para 1\n");
    printf("chama-se funcao conversao_binaria com parametros n = 2, vetor_binario, tamanho = 1, tamanho_fixo = 2\n");
    printf("vetor_binario[1] recebe 2 mod 2 = 0.\nn recebe 2 /2 = 1.\n");
    printf("tamanho eh maior que zero, por isso decresce em 1 de 2 para 1\n");
    printf("chama-se funcao conversao_binaria com parametros n = 1, vetor_binario, tamanho = 0, tamanho_fixo = 2\n");
    printf("vetor_binario[0] recebe 1 mod 2 = 1.\nn recebe 1 /2 = 0.\n");
    printf("tamanho eh igual a 0, por isso, binario = 0 e inicia loop com indice variando de 0 ateh tamanho_fixo - 1 = 1\n");
    printf("indice = 0 e vetor_binario[0] = 1, por isso, binario = 1.\n");
    printf("indice = 1 e vetor_binario[1] = 0, por isso, binario = 1 * 10 = 10.\n");
    printf("indice == tamanho_fixo, por isso, sai do loop e retorna binario, que sera imperesso na main.\n");

    printf("\n");
    printf("Teste 2:\nn = 1\n");
    printf("Feitas 1 divisoes de n = 1 por 2, resultando no valor 1 para tamanho.\n");
    printf("tamanho_fixo tem valor tamanho = 1\n");
    printf("vetor_binario tem tamanho = 1\n");
    printf("tamanho decresce em 1, de 1 para 0\n");
    printf("chama-se funcao conversao_binaria com parametros n = 1, vetor_binario, tamanho = 0, tamanho_fixo = 1\n");
    printf("vetor_binario[0] recebe 1 mod 2 = 1.\nn recebe 1 /2 = 0.\n");
    printf("tamanho eh igual a 0, por isso, binario = 0 e inicia loop com indice variando de 0 ateh tamanho_fixo - 1 = 0\n");
    printf("indice = 0 e vetor_binario[0] = 1, por isso, binario = 1.\n");
    printf("indice == tamanho_fixo, por isso, sai do loop e retorna binario, que sera imperesso na main.\n");

    printf("\n");
    printf("Teste 3:\nn = 3\n");
    printf("Feitas 2 divisoes de n = 3 por 2, resultando no valor 2 para tamanho.\n");
    printf("tamanho_fixo tem valor tamanho = 2\n");
    printf("vetor_binario tem tamanho = 2\n");
    printf("tamanho decresce em 1, de 2 para 1\n");
    printf("chama-se funcao conversao_binaria com parametros n = 3, vetor_binario, tamanho = 1, tamanho_fixo = 2\n");
    printf("vetor_binario[1] recebe 3 mod 2 = 1.\nn recebe 3 /2 = 1.\n");
    printf("tamanho eh maior que zero, por isso decresce em 1 de 2 para 1\n");
    printf("chama-se funcao conversao_binaria com parametros n = 1, vetor_binario, tamanho = 0, tamanho_fixo = 2\n");
    printf("vetor_binario[0] recebe 1 mod 2 = 1.\nn recebe 1 /2 = 0.\n");
    printf("tamanho eh igual a 0, por isso, binario = 0 e inicia loop com indice variando de 0 ateh tamanho_fixo - 1 = 1\n");
    printf("indice = 0 e vetor_binario[0] = 1, por isso, binario = 1.\n");
    printf("indice = 1 e vetor_binario[1] = 1, por isso, binario = (1 * 10) + 1 = 11.\n");
    printf("indice == tamanho_fixo, por isso, sai do loop e retorna binario, que sera imperesso na main.\n");
    return 0;
}