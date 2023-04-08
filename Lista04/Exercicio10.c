#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int num1, num2, soma, resposta;

    srand(time(NULL));

    num1 = rand() % 100;
    num2 = rand() % 100;

    printf("Digite a soma de %d e %d: ", num1, num2);
    scanf("%d", &resposta);

    soma = num1 + num2;

    if (resposta == soma) {
        printf("Resposta correta!\n");
    } else {
        printf("Resposta incorreta!\n");
    }

    return 0;
}