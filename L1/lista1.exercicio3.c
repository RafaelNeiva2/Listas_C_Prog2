#include <stdio.h>

int main(){
    char operacao;
    float v1, v2, resultado;
    printf("Digite a operação desejada(+, -, /, ou *): ");
    operacao = getchar();
    printf("Digite os valores: ");
    scanf("%f%f", &v1, &v2);

    if (operacao == '+'){
        resultado = v1 + v2;
        printf("A soma dos dois números vale: %f", resultado);
    } 
    
    else if (operacao == '-'){
        resultado = v1 - v2;
        printf("A subtração dos dois números vale: %f", resultado);
    }

    else if (operacao == '/'){
        resultado = v1 / v2;
        printf("A divisão dos dois números vale: %f", resultado);
    }
     else if (operacao == '*'){
        resultado = v1 * v2;
        printf("A multiplicação dos dois números vale: %f", resultado);
    }

    return 0;
}