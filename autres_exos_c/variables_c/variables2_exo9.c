#include <stdio.h>

int main() {
//Calculer la somme, différence, multiplication et division à partir de 2 ombres saisis
    int nbre1, nbre2;
    int somme, difference, multiplication, division;

        printf("Entrez un premier nombre\n");
        scanf("%d", &nbre1);
        printf("Entrez un deuxième nombre\n");
        scanf("%d", &nbre2);

        printf("La somme des deux nombres est : %d\n", somme = nbre1 + nbre2);
        printf("La différence entre ces deux nombres est : %d\n", difference = nbre1 - nbre2);
        printf("La multiplication des deux nombres est : %d\n", multiplication = nbre1 * nbre2);
        printf("La division des deux nombres est : %d\n", division = nbre1 / nbre2);
        
    return 0;
}