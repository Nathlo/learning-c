#include <stdio.h>

int main() {
//calcul du périmètre d'un rectangle
    int largeur;
    int longueur;
    int perimetre;

    printf("Entrez la dimension de la largeur\n");
    scanf("%d", &largeur);
    printf("Entrez la dimension de la longueur\n");
    scanf("%d", &longueur);

    perimetre = (largeur + longueur) * 2;
    printf("Le périmètre de votre rectangle est : %d\n", perimetre);




    return 0;
}