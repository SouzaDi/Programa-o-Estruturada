#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int jogador, computador;
    int soma;
    srand(time(NULL));
    computador = rand() % 6;
    printf("Digite um número entre 0 e 5: ");
    scanf("%d", &jogador);
    soma = jogador + computador;
    printf("Você escolheu %d e o computador escolheu %d.\n", jogador, computador);
    if (soma % 2 == 0) {
        printf("A soma é par.\n");
        if (jogador % 2 == 0) {
            printf("Você venceu!\n");
        } else {
            printf("O computador venceu!\n");
        }
    } else {
        printf("A soma é ímpar.\n");
        if (jogador % 2 == 1) {
            printf("Você venceu!\n");
        } else {
            printf("O computador venceu!\n");
        }
    }
    return 0;
}