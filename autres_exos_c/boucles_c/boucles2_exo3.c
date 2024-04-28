#include <stdio.h>

int main() {
//Affiche la table de multiplication d'un nombre saisi
    int nbUser, i, multiplication;

    printf("Entrez un nombre de votre choix\n");
    scanf("%d", &nbUser);

    printf("La table de multiplication de %d est :\n", nbUser);
        for (i = 0; i <= 10; i++) {
            multiplication = nbUser * i;
            printf("%d * %d = %d\n", nbUser, i, multiplication);
        }
    return 0;
}