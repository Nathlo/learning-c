#include <stdlib.h>
#include <stdio.h>

int main() {
    /* 
    char chaine[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
    int i;
    */

    char chaine[6] = "Hello";
        /* 
        for (i = 0; i < 6; i++) {
            printf("%c\n", chaine[i]);
        }
        */
    printf("%s\n", chaine);

    return 0;
}