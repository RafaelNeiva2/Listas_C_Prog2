#include <stdio.h>

void f1 ( int v) {
    v = v + 1;
    printf (" f1 = %d\n " , v );
}

void f2 ( int *v) {
    *v = *v + 1;
    printf (" f2 = %d\n " , *v );
    }

int f3 ( int v) {
    v = v + 1;
    printf (" f3 = %d\n " , v );
    return v;
}

int main (void) {
    int v = 1;
    f1 ( v ); //sera printado f2 = 2
    f2 (&v ); //sera printado f2 = 2
    v = f3 ( v ); //sera printado f3 = 3
    printf (" main = %d \n" , v ); //sera printado main = 3
    return 0;
}
