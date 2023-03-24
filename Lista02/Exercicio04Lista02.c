#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = 5 *(fahrenheit - 32)/ 9;

    printf("%.2f graus Fahrenheit equivalem a %.2f graus Celsius\n", fahrenheit, celsius);

    return 0;
}
