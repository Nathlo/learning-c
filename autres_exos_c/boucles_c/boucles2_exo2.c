#include <stdio.h>

int main() {
//Affiche les premiers 10 nombres pairs
    int i;

    printf("Affichez les 10 premiers nombres pairs");
        for (i = 0: i <= 10; i++) {
            if (i % 2 == 0) {
                printf("%d\n", i);
            }
        }
    return 0;
}