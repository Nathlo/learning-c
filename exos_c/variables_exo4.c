#include <stdio.h>

int main() {

    float prixItem = 15.00;
    float montantTVA = prixItem * 1.20;

   // float prixTotal = prixItem + montantTVA;

    printf("Le montant de l'article TTC est %f\n", montantTVA);

    return 0;
}