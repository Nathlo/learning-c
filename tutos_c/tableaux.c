#include <stdio.h>

int main() {

    int tab[3];
    int i;

    /* ACCOLADES - utilisation lors déclaration tableau
    tab[3] = {45, 89, 25};
    */

    tab[0] = 1;
    tab[1] = 2;
    tab[2] = 3;


    for (i = 0; i < 3; i++)
        printf("Mon nombre tab[%d] vaut %d\n", i, tab[i]);


    /* 
    printf("Mon nombre tab[0] vaut %d\n", tab[0]);
    printf("Mon nombre tab[1] vaut %d\n", tab[1]);
    printf("Mon nombre tab[2] vaut %d\n", tab[2]);
    */


    return 0;
}