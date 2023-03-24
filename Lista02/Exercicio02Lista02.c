#include <stdio.h>

int main() {
    float raio, perimetro, area, PI;
    PI = 3.14;

    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);

    // Calculando o perímetro e a área
    perimetro = 2 * PI * raio;
    area = PI * raio * raio;

    printf("Raio: %.2f\nPerimetro: %.2f\nArea: %.2f\n", raio, perimetro, area);

    return 0;
}
