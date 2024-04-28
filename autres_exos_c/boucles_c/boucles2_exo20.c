#include <stdio.h>

int main() {
//Affiche "Fizz" pour multiple de 3, "Buzz" pour les multiple de 5 et "FizzBuzz" pour les multiples de 15
    int i;

    printf("Voici l'exercice FizzBuzz !\n");
    for (i = 1; i <= 100; i++) {
        if (i % 15 == 0) {
            printf("FizzBuzz\n");
        } else if (i % 3 == 0) {
            printf("Fizz\n");
        } else if (i % 5 == 0) {
            printf("Buzz\n");
        } else {
            printf("%d\n", i);
        }
    }
    return 0;
}