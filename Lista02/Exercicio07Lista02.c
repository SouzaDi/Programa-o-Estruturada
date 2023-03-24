#include <stdio.h>
#include <math.h>

int main() {
    float area, litros, latas, preco_total;
    const float LITROS_POR_LATA = 18;
    const float PRECO_LATA = 80;

    printf("Digite o tamanho em metros quadrados da area a ser pintada: ");
    scanf("%f", &area);

    litros = ceil(area / 3.0);
    latas = ceil(litros / LITROS_POR_LATA);
    preco_total = latas * PRECO_LATA;

    printf("Quantidade de latas de tinta a serem compradas: %.0f\n", latas);
    printf("Preco total da compra: R$ %.2f\n", preco_total);

    return 0;
}
