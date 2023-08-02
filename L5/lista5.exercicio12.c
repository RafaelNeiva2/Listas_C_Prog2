#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>


int main(void)
{   
    int r, i = 0, x = 0, z = 0; 

    char string[50], straux[1000] = "";

    printf("Digite a string: ");
    gets(string);

    while(string[i] != '\0') {
        r = 0;   

        for(int k = 0; k <= strlen(string); k++) {   
            if(string[i] == string[k]) { r++; }   

            if(k == strlen(string)) {   
                for(int j = 0; j <= strlen(string); j++) {
                    if(string[i] == straux[j]) { x = 0; break; }   
                    else { x++; }   
                }
                
                if(x != 0) {
                    printf(" %c = %d \n", string[i], r);
                    straux[z++] = string[i];
                }                
            }
        }
        i++;
    }

    return 0;
}