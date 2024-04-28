#include <stdio.h>

int main() {
//Affiche si une année est bissextile ou pas
    int annee;

    printf("Entrez l'année de votre choix\n");
    scanf("%d", &annee);

        if (annee % 4 == 0) {
            printf("Votre année est bissextile\n");
        } else {
            printf("Votre année n'est pas une année bissextile\n");
        }
    return 0;
}