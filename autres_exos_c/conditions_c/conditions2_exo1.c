#include <stdio.h>

int main() {
//Indiquez si nombre saisi est positif, négatif ou nul
    int userNbr;

    printf("Entrez un nombre\n");
    scanf("%d", &userNbr);

        if (userNbr > 0) {
            printf("Votre nombre est positif\n");
        } else if (userNbr < 0) {
            printf("Votre nombre est négatif\n");
        } else {
            printf("Votre nombre est nul\n");
        }
    return 0;
}