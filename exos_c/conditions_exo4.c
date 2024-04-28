#include <stdio.h>


int main() {

    int nbUser;

    printf("Entrez un nombre de votre choix\n");
    scanf("%d", &nbUser);

    if (nbUser == 0)
        printf("Votre nombre est nul\n");
    else if (nbUser > 0)
        printf("Votre nombre est positif\n");
    else
        printf("Votre nombre est négatif\n");

    return 0;
}