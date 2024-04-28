#include <stdio.h>

int main() {

    int nbre1, nbre2;

    printf("Entrez un premier nombre\n");
    scanf("%d", &nbre1);
    printf("Entrez un deuxième nombre\n");
    scanf("%d", &nbre2);

    if (nbre1 > nbre2)
        printf("%d, Le premier nombre est plus grand\n", nbre1);
    else if (nbre1 < nbre2)
        printf("%d, Le deuxième nombre est plus grand\n", nbre2);
    else
        printf("Les deux nombres sont égaux !\n");

    return 0;
}