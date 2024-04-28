#include <stdio.h>

int main() {

    int nbUser, i;

    printf("Entrez un nombre de votre choix :\n");
    scanf("%d", &nbUser);

    printf("\nLa table de multiplication de %d est :\n", nbUser);
    for (i = 0; i <= 10; i++) {
        printf("%d x %d = %d\n", nbUser, i, nbUser * i);
    }

    return 0;
}