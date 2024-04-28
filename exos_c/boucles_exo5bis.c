#include <stdio.h>
#include <stdbool.h> 

int main() {

    int listNum[6] = {3, 6, 9, 12, 15, 18};
    int i, nbUser;
    bool trouve = false;

    printf("Entre un nombre entre 0 et 20 :\n");
        scanf("%d", &nbUser);

    for (i = 0; i <= 5; i++) {
        if (nbUser == listNum[i]) {
            trouve = true;
        }
    }
        if (trouve) {
            printf("Nombre trouvé !\n");
        } else {
            printf("Nombre non trouvé !\n");
        }
    
    return 0;
}