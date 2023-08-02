#include <stdio.h>
#include <stdlib.h>

int main() {
    int tam, *vetor, *repetidos, i, t, qtd_repetidos = 0, idx_vetor_repetidos = 0;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);
    vetor = (int *)malloc(tam * sizeof(int));
    if (vetor == NULL) {
        printf("Memoria insuficiente.\n");
        exit(1);
    }
    repetidos = (int *)malloc(tam * sizeof(int));
    if (repetidos == NULL) {
        printf("Memoria insuficiente.\n");
        exit(1);
    }

    for (i = 0; i < tam; i++) {  // Preenche vetor
        printf("Digite o valor %d do vetor: ", i);
        scanf("%d", &vetor[i]);
    }
    for (i = 0; i < tam; i++) {
        int num_procurado = vetor[i], qtd_ocorrências = 0, ja_determinado = 0;
        if (qtd_repetidos > 0)
        {
            for (t = 0; t < qtd_repetidos; t++) 
            {
                if (vetor[i] == repetidos[t])
                {
                    ja_determinado = 1;
                    break;
                }
            }
        }
        if (!ja_determinado)
        {
            for (t = 0; t < tam; t++)
            {
                if (vetor[i] == vetor[t]) {
                    qtd_ocorrências += 1;
                    if (qtd_ocorrências > 1) 
                    {
                        qtd_repetidos += 1;
                        repetidos = (int *) realloc(repetidos, qtd_repetidos * sizeof(int));
                        if (repetidos == NULL)
                        {
                            printf("Memoria insuficiente.\n");
                            exit(1);
                        }
                        
                        repetidos[idx_vetor_repetidos] = vetor[i]; 
                        idx_vetor_repetidos += 1;  
                        break;
                    }
                }
            }
        }
    }
    free(vetor); 
    for (i = 0; i < qtd_repetidos; i++) 
    {
        if (i == qtd_repetidos - 1) {
            printf("%d\n", repetidos[i]);
        }
        else {
            printf("%d, ", repetidos[i]);
        }
    }
    free(repetidos);
    return 0;
}