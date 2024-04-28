#include <stdio.h>

int main() {
//déteminer si le mois choisi a 30 ou 31 jours
    int userMois, i;
    char mois30[4] = {4, 6, 9, 11};
    int mois31 = 0; //variable pour vérifier si le mois a 31 jours

    printf("Entrez un mois de votre choix en chiffre : \n");
    scanf("%d", &userMois);

    //Vérifie si le mois a 31 jours
    for (i = 0; i <= 3; i++) {
        if (mois30[i] == userMois) {
            mois31 = 1; //prend la valeur 1 si le mois a 30 jours
            break;
        }
    }
    //Affiche le résultat
    if (mois31) {
        printf("Ce mois a 30 jours\n");
    } else {
        printf("Ce mois a 31 jours\n");
    }

    return 0;
}