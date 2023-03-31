#include <stdio.h>

int main() {
    int num_skins;
    float preco_unitario, preco_total;

    printf("Digite o número de skins compradas: ");
    scanf("%d", &num_skins);

    if (num_skins >= 10) {
        preco_unitario = 1.0;
    } else {
        preco_unitario = 1.3;
    }

    preco_total = num_skins * preco_unitario;

    printf("O preço total da compra é: R$ %.2f\n", preco_total);

    return 0;
}
