#include <stdio.h>

int main() {
//Détermine si on a réussi ou échoué selon la note rentrée
    int noteUser;

    printf("Entrez la note que vous avez obtenue :\n");
    scanf("%d", &noteUser);

        if (noteUser >= 10) {
            printf("Bravo ! Vous avez réussi !\n");
        } else {
            printf("Désolé, vous avez échoué...\n");
        }
    return 0;
}