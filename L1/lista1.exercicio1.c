#include <stdio.h>

int converte(int entradaSec){
    int seg, min, h, resto;
    h = entradaSec / 3600;
    resto = entradaSec % 3600;
    min = resto / 60;
    seg = resto % 60;
    printf("Quantidade de horas: %d;\nQuantidade de minutos: %d;\nQuantidade de segundos: %d.", h, min, seg);
}

int main(){
    int Segundos, final;
    printf("Digite o total em segundos: ");
    scanf("%d", &Segundos);
    final = converte(Segundos);
    return 0;
}