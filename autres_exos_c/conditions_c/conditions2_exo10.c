#include <stdio.h>

int main() {
//Indique si un nombre saisi est premier : 2, 3, 5, 7, 11, 13, 17, 19...
    int userNber;
        printf("Entrez un nombre positif de votre choix\n");
        scanf("%d", &userNber);

        //(nb / nb = 1) et (nb / 1 = nb)
        if (userNber / userNber == 1 && userNber / 1 == userNber) {
            printf("Votre nombre %d, est un nombre premier\n", userNber);
        } else {
            printf("Votre nombre %d, n'est pas un nombre premier\n", userNber);
        } 

    return 0;
}

