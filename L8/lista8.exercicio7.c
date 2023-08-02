#include <stdio.h>
/*
int main() {
    int distancias[5][5] = {
        {0, 15, 30,  5, 12},
        {15, 0,  10, 17, 28},
        {30, 10, 0,   3, 11},
        {5,  17, 3,   0, 80},
        {12, 28, 11, 80, 0}
    };

    int cidade1, cidade2;

    //a)
    do {
        printf("Digite o código da primeira cidade: ");
        scanf("%d", &cidade1);
        if (cidade1 == 0)
        break;

        printf("Digite o código da segunda cidade: ");
        scanf("%d", &cidade2);
        if (cidade2 == 0)
        break;

        printf("A distância entre as cidades %d e %d é %d km.\n", cidade1, cidade2, 
        distancias[cidade1 - 1][cidade2 - 1]);
    } while (1);

    //b)
  
    printf("Tabela sem repetições: \n");
    for (int i = 0; i < 5; i++) {
    for (int j = i + 1; j < 5; j++) {
    printf("Distância entre as cidades %d e %d: %d km\n", i + 1, j + 1, distancias[i][j]);
    }
    }

    //c)
  
    int percurso[] = { 1, 2, 3, 2, 5, 1, 4 };
    int numCidades = sizeof(percurso) / sizeof(percurso[0]);
    int totalPercurso = 0;

    printf("\nPercurso: ");
    for (int i = 0; i < numCidades; i++) {
    printf("%d ", percurso[i]);
    if (i < numCidades - 1) {
    int cidadeAtual = percurso[i] - 1;
    int proxCidade = percurso[i + 1] - 1;
    totalPercurso += distancias[cidadeAtual][proxCidade];
    }
    }
    printf("Distancia percorrida: %d km\n", totalPercurso);
}*/