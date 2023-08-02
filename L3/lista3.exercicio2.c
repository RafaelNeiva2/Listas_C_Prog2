#include <stdio.h>

int main() {
    int i = 3, j = 5;
    int *p, *q;
    p = &i;
    q = &j;
    printf("p == &i = %d (verdadeiro)\n", p == &i);
    printf("*p - *q = %d\n", *p - *q); 
    printf("**&p = %d\n", **&p);
    printf("3* - *p/(*q)+7 = %d\n", 3* - *p/(*q)+7);
}