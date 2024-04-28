#include <stdio.h>

int main() {

    int nbre;

    printf("Entrez un nombre entier de votre choix\n");
    scanf("%d", &nbre);

    if (nbre % 2 == 0)
        printf("Votre nombre est un nombre pair\n");
    else
        printf("Votre nombre est un nombre impair\n");

    return 0;
}