#include <stdio.h>

int main() {

    int age;

    printf("Quel âge avez-vous ?\n");
    scanf("%d", &age);

    printf("Vous avez %d ans\n", age);

    if (age >= 18) 
        printf("Vous êtes majeur(e)!\n");
    else 
        printf("Vous êtes mineur(e), désolé...\n");
    

    return 0;
}