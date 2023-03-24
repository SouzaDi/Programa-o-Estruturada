#include <stdio.h>
#include <math.h>

int main() {
    float n1, n2, d1, resultado1, resultado2, resultado3;

    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);

    printf("Digite o segundo numero: ");
    scanf("%f", &n2);

    printf("Digite o terceiro numero: ");
    scanf("%f", &d1);

    // O produto do dobro do primeiro com metade do segundo;
    resultado1 = (2 * n1) * (n2 / 2);

    // A soma do triplo do primeiro com o terceiro;
    resultado2 = (3 * n1) + d1;

    // O terceiro elevado ao cubo.
    resultado3 = pow(d1, 3);

    printf("O produto do dobro do primeiro com metade do segundo : %.2f\n", resultado1);
    printf("A soma do triplo do primeiro com o terceiro : %.2f\n", resultado2);
    printf("O terceiro elevado ao cubo : %.2f\n", resultado3);

    return 0;
}
