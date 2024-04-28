#include <stdio.h>

int main() {

    int tempCelsius = 28;
    int tempFahrenheit = tempCelsius * (9/5) + 32;

    printf("La conversion de %d degrés Celsius en degrés Fahrenheit est : %d\n", tempCelsius, tempFahrenheit);
    

    return 0;
}