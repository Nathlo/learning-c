#include <stdio.h>

int main() {
//Calcul de l'aire d'un triangle avec base et hauteur saisies. Aire = (B * h) / 2
    int base, hauteur, aire;

    printf("Entrez un nombre pour la base du triangle\n");
    scanf("%d", &base);
    printf("Entrez un nombre pour la hauteur du triangle\n");
    scanf("%d", &hauteur);

    printf("Le calcul de l'aire du triangle est : %d\n", aire = (base * hauteur)/2);

    return 0;
}