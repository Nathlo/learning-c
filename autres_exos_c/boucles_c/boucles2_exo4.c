#include <stdio.h>

int main() {
//Affiche la somme des nombres de 1 à un nombre saisi
    int nbUser, i, somme;

    printf("Entrez un nombre\n");
    scanf("%d", &nbUse);

    for (i = 1; i <= nbUser; i++) {
       somme = somme + i;
       printf("La somme des nombres de 1 à %d est : \n", somme);
    }
    return 0;
}