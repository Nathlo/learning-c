#include <stdio.h>

int main() {

    int listNum[6] = {3, 6, 9, 12, 15, 18};
    int i, nbUser, nbUser2;
    char message1[30] = "GAGNÉ ! Nombre trouvé !\n";
    char message2[30] = "PERDU ! Essaie encore !\n";

        printf("Entre un nombre entre 0 et 20 :\n");
        scanf("%d", &nbUser);

      /*  for (i = 0; i <= 6; i++) {
            if (nbUser != listNum[i]) {
                printf("Nouvel essaie ! Entre un nombre\n");
                scanf("%d", &nbUser2);
            } 
       } */

        switch(nbUser) {
            case 3: 
            printf("%s", message1);
                break;
            case 6: 
                printf("%s", message1);
                break;
            case 9: 
                printf("%s", message1);
                break;
            case 12: 
                printf("%s", message1);
                break;
            case 15: 
                printf("%s", message1);
                break;
            case 18: 
                printf("%s", message1);
                break;
            default: 
                printf("%s", message2);
                break;
        }

return 0;
}