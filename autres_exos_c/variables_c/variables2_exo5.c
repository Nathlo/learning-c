#include <stdio.h>

int main() {
//Trouver la moyenne de trois nombres

    int nbre1, nbre2, nbre3;
    int moyenne;

    printf("Entrez un premier nombre\n");
    scanf("%d", &nbre1);
    printf("Entrez un deuxième nombre\n");
    scanf("%d", &nbre2);
    printf("Entrez un troisième nombre\n");
    scanf("%d", &nbre3);

    moyenne = (nbre1 + nbre2 + nbre3) / 3;
    printf("La moyenne des 3 nombres que vous avez rentrés est : %d\n", moyenne);

    return 0;
}