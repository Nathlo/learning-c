#include <stdio.h>

int main() {
//convertisseur de température Celsius en Fahrenheit
    int tempCelsius;
    int tempFahrenheit;
    int celsiusToFahrenheit;

    printf("Entrez la température en Celsius\n");
    scanf("%d", &tempCelsius);

    celsiusToFahrenheit = tempCelsius * 9/5 + 32;
    printf("Votre température Celsius équivaut en Fahrenheit à %d.\n", celsiusToFahrenheit);


    return 0;
}