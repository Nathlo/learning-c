#include <stdio.h>

int main() {
//Affiche les diviseurs d'un nombre saisi
int nbUser, i;

    printf("Entrez un nombre entier positif\n");
    scanf("%d", &nbUser);

        printf("Les diviseurs de %d sont : \n", nbUser);
        for (i = 1; i <= nbUser; i++) {
                if (nbUser % i == 0) {
                    printf("%d\n", i);
                }
        }
    return 0;
}