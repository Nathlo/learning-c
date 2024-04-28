#include <stdio.h>

//fonction pour afficher "Bonjour"
void afficherBonjour() {
    printf("Bonjour !\n");
}
//fonction pour calculer le carré d'un nombre
int carre(int n) {
    return n * n;
}
//fonction pour retourner le plus grand nombre
int maximum(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}

int main() {
    /* int a = 5;
    int resultat = carre(a); */

    int a;
    int b;
    //int resultat;

    afficherBonjour();
    //printf("Nombe dont vous souhaitez calculer le carré :\n");
    printf("Première valeur : ");
    scanf("%d", &a );

    printf("Deuxième valeur : ");
    scanf("%d", &b );

    //appel de la fonction "carre" et stockée dans variable "resultat"
    //resultat = carre(a);

    //printf("Carré de %d * %d = %d\n", a, a, carre(a));
    printf("Maximum entre %d et %d : %d\n", a, b, maximum(a,b));

    return 0;
}

