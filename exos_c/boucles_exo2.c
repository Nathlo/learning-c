#include <stdio.h>

int main() {

   int i = 0;
   int somme = 0;
    while (i <= 10) {
        somme = i + somme;
        i++;
    }

    printf("La somme des nombres entiers est : %d\n", somme);

    return 0;
}