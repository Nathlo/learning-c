#include <stdio.h>

int main() {
//Vérifiez si nombre saisi est pair ou impair
    int userNbr;

    printf("Entrez un nombre de votre choix\n");
    scanf("%d", &userNbr);

        if (userNbr % 2 == 0) {
            printf("Votre nombre, %d, est un nombre pair\n", userNbr);
        } else {
            printf("Votre nombre, %d, est un nombre impair\n", userNbr);
        }
    return 0;
}