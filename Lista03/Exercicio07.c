#include <stdio.h>

int main() {
    int i;

    printf("Números entre 0 e 100, com múltiplos de 4 substituídos por 'plim':\n");

    for (i = 0; i <= 100; i++) {
        if (i % 4 == 0) {
            printf("plim");
        } else {
            printf("%d", i);
        }

        if (i != 100) {
            printf(", ");
        }
    }

    printf("\n");

    return 0;
}
