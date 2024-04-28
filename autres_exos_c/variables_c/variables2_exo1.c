#include <stdio.h>

int main() {
//message d'accueil personalisé, prénom et nom
    char nom[30];
    char prenom[30];

    printf("Entrez votre prénom\n"); 
    scanf("%s", prenom);
    printf("Entrez votre nom\n"); 
    scanf("%s", nom);

    printf("Bienvenue %s %s !\n", prenom, nom);

    return 0;
}