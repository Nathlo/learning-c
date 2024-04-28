#include <stdio.h>

int main() {
//Affiche les nombres premiers jusqu'à 10
    int estPremier; 
    int i, j;
    
    printf("Les nombres premiers jusqu'à 15 sont :\n");
    for (i = 2; i < 15; i++) {
        estPremier = 1; // on suppose que i est premier
        
        //Vérifie si i est divisible par un nombre autre que 1 et lui-même
        for (j = 2; j < i; j++) {
            //vérifie que i est divisible par j, si oui alors i n'est pas premier
            if (i % j == 0) {
                estPremier = 0; // i n'est pas un nombre premier
                break;
            }
        }
        // Si i est premier alors on l'affiche
        if (estPremier == 1) {
            printf("%d\n", i);
        }
    }    
    return 0;
}