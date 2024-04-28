#include <stdio.h>

int main() {

    char pwFound[] = "motdepasse";
    char pwUser[11];

    printf("Choisissez votre mot de passe.\n");
    scanf("%s", pwUser);

    int comp = strcmp(pwUser,pwFound);
        if  (comp == 0) {
            printf("Accès autorisé\n");
        } else
            printf("Accès refusé\n");

    return 0;
}