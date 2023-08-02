#include <stdio.h>

int divs(int n, int *max, int *min);

int main() {

    int numero, maximo, minimo, eh_composto;
    printf("Digite o valor de n: ");
    scanf("%d", &numero);
    printf("Digite o valor de max: ");
    scanf("%d", &maximo);
    printf("Digite o valor de min: ");
    scanf("%d", &minimo);
    eh_composto = divs(numero, &maximo, &minimo);
    if (eh_composto) {  // Não é primo
        printf("Numero nao eh primo\n");
        printf("Maior divisor: %d\n", maximo);
        printf("Menor divisor: %d\n", minimo);
    }
    else {
        printf("Numero eh primo\n");
    }
    
    
    return 0;
}

int divs(int n, int *max, int *min) {

    int resultado = 0; 
    if (n % 2 == 0  && n != 2) { 
        resultado = 1;
    }
    else if (n > 2 && n % 2 != 0) { 
        int divisor;
        for (divisor = 2; divisor < n && resultado != 1; divisor++) { 
            if (n % divisor == 0) { 
                resultado = 1; 
            }
        }
    }
    if (resultado == 1) {
        int divisor;
        *min = 0; 
        *max = 0;
        for (divisor = 2; divisor < n; divisor++) { 
            if (n % divisor == 0) {  
                if (*min == 0) {  
                    *min = divisor;
                }
                *max = divisor; 
            }
        }
    }
    return resultado;
}