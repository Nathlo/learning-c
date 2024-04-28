#include <stdio.h>

int main() {
    int userNber;
    int isPrime = 1; // On suppose que le nombre est premier par défaut

    printf("Entrez un nombre positif de votre choix : ");
    scanf("%d", &userNber);

    // Un nombre est premier s'il n'a aucun diviseur autre que 1 et lui-même
    for (int i = 2; i <= userNber / 2; i++) {
        if (userNber % i == 0) {
            isPrime = 0; // Si le nombre est divisible par i, il n'est pas premier
            break; // Sortir de la boucle dès qu'un diviseur est trouvé
        }
    }

    if (userNber <= 1) {
        printf("Votre nombre %d n'est pas premier\n", userNber);
    } else if (isPrime) {
        printf("Votre nombre %d est un nombre premier\n", userNber);
    } else {
        printf("Votre nombre %d n'est pas premier\n", userNber);
    }

    return 0;
}