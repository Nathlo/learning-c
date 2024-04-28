#include <stdio.h>

int main() {
//Afficher le nombre le plus grand
    int nbre1, nbre2, nbre3;

    printf("Entrez un premier nombre\n");
    scanf("%d", &nbre1);
    printf("Entrez un deuxième nombre\n");
    scanf("%d", &nbre2);
    printf("Entrez un troisième nombre\n");
    scanf("%d", &nbre3);

    if (nbre1 > nbre2 && nbre1 > nbre3) {
        printf("%d est plus grand\n", nbre1);
    } else if (nbre2 > nbre3 && nbre2 > nbre1) {
        printf("%d est plus grand\n", nbre2);
    } else {
        printf("%d est plus grand\n", nbre3);
    }
    return 0;
}