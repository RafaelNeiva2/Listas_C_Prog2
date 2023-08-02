#include <stdio.h>
#include <conio.h>

int main() {
    int i, tam_vetor = 0;
    char vetor[80], temp;
    for (i = 0; i < 80; i++) {
        temp = getch();
        if (temp == '\r') {
            break;
        }
        else {
            vetor[i] = temp;
            ++tam_vetor; 
        }
    }

    for (i = 0; i < tam_vetor; i++) {  
        if (vetor[i] == ' ') { 
            printf("\n");
        }
        else {
            printf("%c", vetor[i]);  
        }
    }

    return 0;
}