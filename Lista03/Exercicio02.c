#include <stdio.h>

int main() {
    int i;

    // Imprime o nome uma vez em cada linha
    for (i = 0; i < 10; i++) {
        printf("Seu nome\n");
    }

    // Imprime o nome sem quebra de linhas e com separação por vírgulas
    for (i = 0; i < 9; i++) {
        printf("Seu nome, ");
    }
    printf("Seu nome\n");

    return 0;
}
