#include <stdio.h>

int main() {
//Affiche un tableau d'entiers et inverse l'ordre des éléments dans ce tableau
    int i, tailleTab;

    printf("Entrez la taille du tableau :\n");
    scanf("%d", &tailleTab);
    int nbEntiers[tailleTab];

    printf("Entrez les %d nombres du tableau :\n", tailleTab);
        for (i = 0; i < tailleTab; i++) {
            int nombre;
            scanf("%d", &nombre); 
            nbEntiers[i] = nombre;       
        }

    printf("\nLe tableau est :\n");
        for (i = 0; i< tailleTab ; i++) {
            printf("%d\n", nbEntiers[i]);
        }

    printf("\nLe tableau inversé est :\n");
        for (i = tailleTab; i < 0; i--) {
            printf("%d\n", nbEntiers[i]);
        } 
return 0;
}