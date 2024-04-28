#include <stdio.h>

int main() {
//Afficher si utilisateur est mineur ou majeur
    int age;

    printf("Entrez votre âge :\n");
    scanf("%d", &age);

        if (age >= 18) {
            printf("Vous  êtes majeur(e)\n");
        } else {
            printf("Vous êtes mineur(e)\n");
        }

    return 0;
}