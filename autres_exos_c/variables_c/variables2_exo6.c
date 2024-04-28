#include <stdio.h>

int main() {
//Afficher table de multiplication jusqu'à 10 d'un nombre saisi
    int i, userNbr;
    int calMultipl;

    printf("Entrez un nombre de votre choix\n");
    scanf("%d", &userNbr);

    printf("La table de multiplication de %d est :\n", userNbr);
    for (i = 0; i <= 10; i++) {
        calMultipl = userNbr * i,
        printf("%d * %d = %d\n", userNbr, i, calMultipl);
    }

    return 0;
}