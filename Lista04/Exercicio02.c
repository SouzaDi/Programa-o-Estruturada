#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int jogador, computador;
    srand(time(NULL));
    computador = rand() % 3;
    printf("Escolha uma opção:\n");
    printf("0 para pedra\n");
    printf("1 para papel\n");
    printf("2 para tesoura\n");
    scanf("%d", &jogador);
    printf("Você escolheu ");
    if (jogador == 0) {
        printf("pedra.\n");
    } else if (jogador == 1) {
        printf("papel.\n");
    } else if (jogador == 2) {
        printf("tesoura.\n");
    }
    printf("O computador escolheu ");
    if (computador == 0) {
        printf("pedra.\n");
    } else if (computador == 1) {
        printf("papel.\n");
    } else if (computador == 2) {
        printf("tesoura.\n");
    }
    if (jogador == computador) {
        printf("Empate!\n");
    } else if ((jogador == 0 && computador == 2) || (jogador == 1 && computador == 0) || (jogador == 2 && computador == 1)) {
        printf("Você venceu!\n");
    } else {
        printf("O computador venceu!\n");
    }
    return 0;
}