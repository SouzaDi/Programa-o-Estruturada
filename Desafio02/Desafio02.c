#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numero_secreto, tentativa, i;

    // gera um número secreto aleatório entre 1 e 100
    srand(time(NULL));
    numero_secreto = rand() % 100 + 1;

    // pede que o usuário faça uma tentativa
    printf("Digite um numero entre 1 e 100:\n");
    scanf("%d", &tentativa);

    // verifica se a tentativa é válida
    if (tentativa < 1 || tentativa > 100) {
        printf("Tentativa inválida! O numero deve estar entre 1 e 100.\n");
        return 0;
    }

    // verifica se a tentativa é correta
    if (tentativa == numero_secreto) {
        printf("Senha correta! Acesso garantido!\n");
        return 0;
    }
    else {
        // informa se a tentativa é maior ou menor que o número secreto
        if (tentativa > numero_secreto) {
            printf("A senha eh menor do que o valor inserido.\n");
        }
        else {
            printf("A senha eh maior do que o valor inserido.\n");
        }
    }

    // permite que o usuário faça mais tentativas
    for (i = 0; i < 4; i++) {
        printf("Digite um numero entre 1 e 100:\n");
        scanf("%d", &tentativa);

        // verifica se a tentativa é válida
        if (tentativa < 1 || tentativa > 100) {
            printf("Tentativa invalida! O número deve estar entre 1 e 100.\n");
            return 0;
        }

        // verifica se a tentativa é correta
        if (tentativa == numero_secreto) {
            printf("Senha correta! Acesso garantido!\n");
            return 0;
        }
        else {
            // informa se a tentativa é maior ou menor que o número secreto
            if (tentativa > numero_secreto) {
                printf("A senha eh menor do que o valor inserido.\n");
            }
            else {
                printf("A senha eh maior do que o valor inserido.\n");
            }
        }
    }

    // o usuário excedeu o número de tentativas permitidas
    printf("Senha incorreta. Numero de tentativas excedido!\n");

    return 0;
}
