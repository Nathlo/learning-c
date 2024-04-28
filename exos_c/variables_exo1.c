#include <stdio.h>

int main() {

    int nbreEleves = 3;
    int note1 = 12;
    int note2 = 9;
    int note3 = 15;

    int noteMoyenne = 0;

    noteMoyenne = (note1 + note2 + note3) / nbreEleves;

    printf("La moyenne des notes est %d\n", noteMoyenne);

    return 0;
}