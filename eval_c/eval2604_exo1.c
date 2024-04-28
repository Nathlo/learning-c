#include <stdio.h>

int main() {
//Calculer le nombre d'hommes et de femmes dans un tableau
int i;
int counterH = 0;
int counterF = 0;

char *eleves[8] = {"H Halick", "H Jason", "H Mathieu", "H Nathan", "F Nathaly", "H Murillo", "F Maeva", "H Jeremy"};

    //Pour parcourir le tableau de chaines de caractères
    for (i = 0; i <= 7; i++) {
        printf("%c\n", eleves[i][0]); //Affiche le premier caractère de chaque élément du tableau
            if ( eleves[i][0] == 'H') {
                counterH = counterH + 1;
            } else {
                counterF = counterF + 1;
            }
        }
    printf("Le nombre d'hommes est : %d\n", counterH);
    printf("Le nombre de femmes est : %d\n", counterF);

    return 0;
    }