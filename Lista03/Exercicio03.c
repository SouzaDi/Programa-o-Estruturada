#include <stdio.h>

int main() {
    int i;

    printf("Números pares entre 0 e 100:\n");

    for (i = 0; i <= 100; i += 2) {
        printf("%d\n", i);
    }

    return 0;
}
