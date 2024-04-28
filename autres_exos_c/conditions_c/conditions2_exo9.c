#include <stdio.h>

int main() {
//Afficher si une lettre est voyelle ou consonne
    char userLetter;
    char voyelles[5] = {'a', 'e', 'i', 'o', 'u'};
    int i;
    int isVowel = 0;

    printf("Entrez une lettre de l'alphabet\n");
    scanf("%c", &userLetter);
    
    //Vérifie si la lettre entrée est unne voyelle
    for (i = 0; i <= 4; i++) {
        if (voyelles[i] == userLetter) {
            isVowel = 1; 
        }
    }
    if (isVowel) {
        printf("Votre lettre est une voyelle\n");
    } else {
        printf("Votre lettre est une consonne\n");
    }

    return 0;
}