#include <stdio.h>

int main() {
//convertisseur d'euros en dollars
    float prixEuro;
    float prixDollar;
    float txChange = 1.07;

    printf("Entrez le montant en euros\n");
    scanf("%f", &prixEuro);

    float EuroToDollar = prixEuro * txChange;
    printf("Le prix de votre article en dollars est : %f\n", EuroToDollar);


    return 0;
}