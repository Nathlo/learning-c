#include <stdio.h>

int main() {
//Calculer la somme des chiffres d'un nombre saisi
    int userNbr, i, somme = 0;

    printf("Entrez un nombre de votre choix\n");
    scanf("%d", &userNbr);

    for (i = 0; i <= userNbr; i++) {
        somme = somme + i;
        //printf("i est : %d, somme est : %d\n", i, somme);
    }
    printf("La somme des nombres de 0 à %d est : %d\n", userNbr, somme);

    return 0;
}