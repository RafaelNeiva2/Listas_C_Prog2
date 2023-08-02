#include <stdio.h>
int main(){
    int a, b, c, d;
    float e, f, g, h;
    char v[10];
    int x;
    int *pta = &a;
    printf("Endereços de:\n");
    printf("a: %x\n",&a);
    printf("b: %x\n",&b);
    printf("c: %x\n",&c);
    printf("d: %x\n",&d);
    printf("e: %x\n",&e);
    printf("f: %x\n",&f);
    printf("g: %x\n",&g);
    printf("h: %x\n",&h);
    for (int i = 0 ; i < 10 ; i++)
        printf("vetor elemento %d: %x\n", i+1 ,&v[i]);
    printf("x: %x\n",&x);
    printf("ponteiro de a: %x\n",pta);
    ++pta;
    printf("Ponteiro de a incrementado: %x\n",*pta);
    printf("O endereço do ponteiro de a incrementado não coincide com o endereço de nenhuma outra variavel. \n");
    return 0;
}